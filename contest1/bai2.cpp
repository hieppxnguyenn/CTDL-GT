#include <bits/stdc++.h>
using namespace std;
int n, k, t, a[10000];
void start(){
	cin>>n>>k;
	for(int i=1; i<=k; i++) cin>>a[i];
}
void in(){
	for(int i=1; i<=k; i++) cout<<a[i]<<" ";
}
void tohop(){
	int i=k;
	while(i>=0 && a[i] == n-k+i) i--;
	if(i>0){
		a[i] = a[i]+1;
		for(int j=i; j<k; j++) a[j+1]= a[j]+1;
	}
	else {
		for(i=1; i<=k; i++) a[i]= i;
	}
}
main(){
	cin>>t;
	while(t--){
		start();
		tohop();
		in();
		cout<<endl;
	}
}

