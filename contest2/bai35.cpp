#include <bits/stdc++.h>
using namespace std;

int n, k, s, dem=0;
int sum=0, a[100];

void start(){
	cin>>n>>k>>s;
	for(int i=1; i<=n; i++) a[i]= 1;
}

void Try(int i){
		for(int j=1; j<=n; j++){
			if(a[j] == 1) {
				a[j] = 0;
				sum+=a[j];
				if(sum==s) {
					dem++;
				}
				else Try(i+1);
				a[j] = 1;
				sum-= a[j];
			}
		}
}

main(){
	int t;
	//cin>>t;
	do{
		start();
		Try(1);
		cout<<dem<<endl;
		dem=0; sum=0;
	} while(n!=0 && k!=0 && s!=0);
}
