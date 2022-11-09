#include <bits/stdc++.h>
using namespace std;
#define i64 long long

i64 a[100000000], t, n;
int h=1;
void start(){
	cin>>n;
}
void in(int k){
	for(int i=1; i<=k; i++) {
		if(a[i] == 1) cout<<"9";
		else cout<<a[i];
	}
	cout<<endl;
}
i64 sum(int k){
	i64 suma;
	if(a[1]==0) suma=0;
	else suma=1;
	for(i64 i=2; i<=k; i++) suma= suma*10 + a[i];
	return suma;
}

void sinh(int i, int k){
	for(int j=0; j<=1; j++){
		a[i]= j;
		if(h!=0){
		if(i==k){
			if(sum(k)!=0 && (sum(k) *9) % n == 0) {
				in(k);
				h=0;
			}
		}
		else sinh(i+1, k);
		}
	}
}
void binary(){
	int k=2;
	while(h!=0){
		sinh(1, k);
		k++;
	}
}

main(){
	cin>>t;
	while(t--){
		start();
		if(9% n== 0) cout<<"9"<<endl;
		else binary();
		h=1;
	}
}

