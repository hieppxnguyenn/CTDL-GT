#include <bits/stdc++.h>
using namespace std;
int t, n, k, a[100], b[100];
void start(){
	cin>>n>>k;
	for(int i=1; i<=k; i++){
		cin>>a[i];
		b[i]= a[i];
	}
}
void in(){
	int check=0;
	for(int i=1; i<=k; i++) {
		int c=0;
		for(int j=1; j<=k; j++){
			if(a[i]== b[j]) c++;
		}
		if(c== 0) check++;
	}
	cout<<check<<endl;
}

void tohop(){
	int i=k;
	while(i>0 && a[i]== n-k+i) i--;
	if(i>0) {
		a[i]= a[i]+1;
		for(int j=i+1; j<=n; j++) a[j]= a[j-1] +1;
		in();
	}
	else {
		cout<<k<<endl;
	}
}

main(){
	cin>>t;
	while(t--){
		start();
		tohop();
	}
}

