#include <bits/stdc++.h>
using namespace std;
int t, n, a[100000];
vector <int> arr;
void start(){
	cin>>n;
	for(int i=1; i<=n; i++) cin>>a[i];
}

void in(){
	int dau=arr.size(), cuoi=0;
	for(int i=1; i<=n; i++){
		cuoi= dau-i;
		dau-=i;
		cout<<"["<<arr[cuoi];
		for(int j=2; j<=i; j++) {
			cuoi++;
			cout<<" "<<arr[cuoi];
		}
		cout<<"] ";
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
		start();
		sum(n);
		cout<<endl;
	}
}

