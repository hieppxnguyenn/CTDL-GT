#include <bits/stdc++.h>
using namespace std;
int n, t;
int a[100000];
void start(){
	cin>>n;
	for(int i=1; i<=n; i++) cin>>a[i];
}
void in(){
	cout<<"["<<a[1];
	for(int i=2; i<=n; i++) cout<<" "<<a[i];
	cout<<"]"<<endl;
}
void sinh(){
	in();
	while(n-- && n!=0){
		for(int i=1; i<=n; i++) a[i]= a[i] + a[i+1];
		in();
	}
}
main(){
	cin>>t;
	while(t--){
		start();
		sinh();
	}
}	

