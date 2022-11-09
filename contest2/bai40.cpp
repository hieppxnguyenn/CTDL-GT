#include <bits/stdc++.h>
using namespace std;
long long a[20][20], x[30];
bool check[20];
long long n, MIN=1000000, minc= 1000000, sum=0;
void start(){
	cin>>n;
	x[1]= 1;
	for(int i=1; i<=n; i++){
		check[i] = true;
		for(int j=1; j<=n; j++) {
			cin>>a[i][j];
			if(a[i][j] != 0) minc= min(minc, a[i][j]);
		}
	}
	check[1] = false;
}
void Try(int k){
	if(sum + minc*(n-k+1) >= MIN) return;
	for(int j=1; j<=n; j++){
		if(check[j] ){
			x[k]= j;
			check[j]= false;
			sum= sum + a[x[k-1]][j];
			if(k==n) {
				if(sum+ a[x[n]][x[1]] < MIN) MIN= sum+ a[x[n]][x[1]];
			}
			else Try(k+1);
			check[j]= true;
			sum= sum - a[x[k-1]][x[k]];
		}
	}
}
main(){
	start();
	Try(2);
	cout<<MIN;
}
