#include<bits/stdc++.h>
using namespace std;
#define cong long long
int a[50], n, k, t;
void khoitao(){
	cin>>n>>k;
}
void in(){
	int check=0;
	for(int i=1; i<=n; i++){
		if(a[i]==1) check++;
	}
	if(check == k) {
		for(int i=1; i<=n; i++) cout<<a[i];
		cout<<endl;
	}
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
	}
}

