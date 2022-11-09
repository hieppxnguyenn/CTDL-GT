#include <bits/stdc++.h>
using namespace std;
int n, m, t, a[100][100], dem=0;
void start(){
	cin>>n>>m;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++) cin>>a[i][j];
	}
}
void Try(int i, int j){
	if (i == n && j == m){
		dem++;
		return;
	}
	if (i < n){
		Try(i+1, j);
	}
	if (j < m){
		Try(i, j+1);
	}
}
main(){
	cin>>t;
	while(t--){
		start();
		Try(1, 1);
		cout<<dem<<endl;
		dem=0;
	}
}

