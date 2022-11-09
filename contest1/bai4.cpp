#include<bits/stdc++.h>
using namespace std;
#define cong long long
int a[50], n, t;
void khoitao(){
	cin>>n;
}
void in(){
	for(int i=1; i<=n; i++) {
		if(a[i]==0) cout<<"A";
		else cout<<"B";
	}
	cout<<" ";
}
int nhiphan(int i){
	for(int j=0; j<=1; j++){
		a[i]=j;
		if(i==n) in();
		else nhiphan(i+1);
	}
}
int main(){
	cin>>t;
	while(t--){
		khoitao();
		nhiphan(1);
		cout<<endl;
	}
}

