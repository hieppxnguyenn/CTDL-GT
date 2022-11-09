#include<bits/stdc++.h>
using namespace std;
#define cong long long
cong a[50];
int n, k,t;
void start(){
	cin>>n>>k;
}
void in(){
	for(int i=1; i<=k; i++){
		cout<<a[i];
	}
	cout<<" ";
}
void tohop(int i){
	for(int j=a[i-1]+1; j<=n-k+i; j++){
		a[i]=j;
		if(i==k) in();
		else tohop(i+1);
	}
}
int main(){
	cin>>t;
	while(t--){
		start();
		tohop(1);
		cout<<endl;
	}
}

