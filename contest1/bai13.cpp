#include<bits/stdc++.h>
using namespace std;
int a[10000], b[10000], n, k, c=0, d=0;

void khoitao(){
	cin>>n>>k;
}

void luu(){
	c++;
	for(int i=1; i<=n; i++){
		d++;
		b[d]= a[i];
	}
}

void kiemtra(){
	int checkin0=0;
	for(int i=1; i<=n-k+1; i++){
		if(a[i]==0){
			int check0=1;
			for(int j=i+1; j<=k+i-1; j++){
				if(a[j]==0) check0++;
			}
			if(check0== k) checkin0++;
		}
	}
	if(checkin0== 1) luu();
}
int nhiphan(int i){
	for(int j=0; j<=1; j++){
		a[i]=j;
		if(i==n) kiemtra();
		else nhiphan(i+1);
	}
}
int main(){
	khoitao();
	nhiphan(1);
	cout<<c<<endl;
	for(int i=1; i<=d; i=i+n){
		for(int j=i; j<=n+i-1; j++){
			if(b[j]==0) cout<<"A";
			else cout<<"B";
		}
		cout<<endl;
	}
}

