#include <bits/stdc++.h>
using namespace std;
int t, n, k, check=0;
int a[50], b[50];
void start(){
	cin>>n>>k;
	for(int i=1; i<=n; i++) cin>>b[i];
	sort(b+1, b+n+1);
}
void in(int h){
	int tong=0;
	for(int i=1; i<=h; i++) tong+=b[a[i]];
	if(tong == k) {
		check=1;
		for(int i=1; i<=h; i++) {
			if(i==1) cout<<"["<<b[a[i]];
			else cout<<" "<<b[a[i]];
		}
		cout<<"] ";
	}
}
int tohop(int i, int h){
	for(int j=a[i-1]+1; j<=n-h+i; j++){
		a[i]=j;
		if(i==h) in(h);
		else tohop(i+1, h);
	}
}
void sum(){
	int h=n;
	while(h>=1){
		tohop(1, h);
		h--;
	}
}
main(){
	cin>>t;
	while(t--){
		start();
		sum();
		if(check==0) cout<<"-1";
		check=0;
		cout<<endl;
	}
}

