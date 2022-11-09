#include <bits/stdc++.h>
using namespace std;
int n, k, t, a[50], c=0;

void start(){
	cin>>n>>k;
}

void in(){
	for(int i=1; i<=n; i++){
		if(a[i]==0) cout<<"A";
		else cout<<"B";
	}
}

void kiemtra(){
	
}

void sinh(int i){
	for(int j=0; j<=1; j++){
		a[i]= j;
		if(i == n) kiemtra();
		else sinh(i+1);
	}
}

main(){
	int 
}

