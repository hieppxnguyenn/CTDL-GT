#include<bits/stdc++.h>
using namespace std;
#define cong long long
cong a[50], b[50];
int t, n;
void start(){
	cin>>n;
	for(int i=0; i<=n; i++){
		b[i]=1;
	}
}
void in(){
	for(int i=1; i<=n; i++){
		cout<<a[i];
	}
	cout<<" ";
}
void hoanvi(int i){
	for(int j=n; j>=1; j--){
		if(b[j]==1){
			b[j]=0;
			a[i]=j;
			if(i==n) in();
			else hoanvi(i+1);
			b[j]=1;
		}
	}
}
int main(){
	cin>>t;
	while(t--){
		start();
		hoanvi(1);
		cout<<endl;
	}
}

