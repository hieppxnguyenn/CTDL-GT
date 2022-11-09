#include <bits/stdc++.h>
using namespace std;
int n, t;
int a[100000];
vector <int> arr;
void start(){
	cin>>n;
	for(int i=1; i<=n; i++) cin>>a[i];
}
void in(){
	int k=0;
	for(int i=n; i>0; i--){
		cout<<"["<<arr[k];
		k++;
		for(int j=2; j<=i; j++) {
			cout<<" "<<arr[k];
			k++;
		}
		cout<<"]"<<endl;
	}
}
void sum(int n){
	for(int i=1; i<=n; i++) arr.push_back(a[i]);
	for(int i=1; i<n; i++) a[i]= a[i]+ a[i+1];
	if(n==1) {
		in();
		return;
	}
	else sum(n-1);
}
main(){
	cin>>t;
	while(t--){
		arr.clear();
		start();
		sum(n);
	}
}

