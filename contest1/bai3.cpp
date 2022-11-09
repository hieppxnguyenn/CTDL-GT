#include <bits/stdc++.h>
using namespace std;
int n, t, a[10000];

void start(){
	cin>>n;
	for(int i=1; i<=n; i++) cin>>a[i];
}
void out(){
	for(int i=1; i<=n; i++) cout<<a[i]<<" ";
	cout<<endl;
}
void hoanvi(){
	int i=n-1;
	while(i>0 && a[i]> a[i+1]) i--;
	if(i>0){
		for(int j=i+1; j<n; j++){
			for(int h=j+1; h<=n; h++){
				if(a[j]> a[h]) {
					int swap=a[j]; 
					a[j]= a[h];
					a[h]= swap;
				}
			}
		}
		for(int j=i+1; j<=n; j++){
			if(a[i]< a[j]) {
				int swap=a[i]; 
				a[i]= a[j];
				a[j]= swap;
				break;
			}
		}
	}
	else for(int i=1; i<=n; i++) a[i]=i;
}
main(){
	cin>>t;
	while(t--){
		start();
		hoanvi();
		out();
	}
}

