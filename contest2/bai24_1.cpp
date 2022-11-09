#include <bits/stdc++.h>
using namespace std;
int n, k, t, a[11], b[100];
bool c;
void start(){
	cin>>n>>k;
	for(int i=1; i<=n; i++) cin>>a[i];
	sort(a+1, a+n+1);
}
void in(){
	int m=0;
	for(int i=1; i<=n; i++) {
		if(b[i]==1){
			m++;
			if(m==1) cout<<"["<<a[i];
			else cout<<" "<<a[i];
		}
	}
	cout<<"] ";
}
void check(){
	int sum=0;
	for(int i=1; i<=n; i++) sum+= b[i]*a[i];
	if(sum== k) {
		in();
		c= true;
	}
}

void Try(int i){
	for(int j=1; j>=0; j--){
		b[i]= j;
		if(i==n) check();
		else Try(i+1);
	}
}
main(){
	cin>>t; 
	while(t--){
		c=false;
		start();
		Try(1);
		if(!c) cout<<"-1";
		cout<<endl;
	}
}

