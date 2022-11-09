#include <bits/stdc++.h>
using namespace std;
long long a[100][100], b[100], c[100], d[100000], h=0, k=1;
long long n, sum;

void start(){
	cin>>n>>sum;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++) cin>>a[i][j];
	}
	for(int i=0; i<=n; i++) c[i]=1;
}

void luu(){
	for(int i=1; i<=n; i++) {
		d[k]= b[i];
		k++;
	}
	h++;
}
void in(){
	for(int i=1; i<k; i= i+ n) {
		for(int j=i; j<i+n; j++) cout<<d[j]<<" ";
		cout<<endl;
	}
}
void check(){
	long long sumarr=0;
	for(int i=1; i<=n; i++) sumarr += a[i][b[i]];
	if(sumarr== sum) luu();

}
void hoanvi(int i){
	for(int j=1; j<=n; j++){
		if(c[j]==1){
			c[j]=0;
			b[i]=j;
			if(i==n) check();
			else hoanvi(i+1);
			c[j]=1;
		}
	}
}

main(){
	start();
	hoanvi(1);
	cout<<h<<endl;
	in();
}

