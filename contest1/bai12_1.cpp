#include <bits/stdc++.h>
using namespace std;

int n, k, t;
int a[50];
void start(){
	cin>>n>>k;
}
void in(){
	for(int i=1; i<=n; i++) cout<<a[i];
	cout<<endl;
}
void kiemtra(){
	/*int check1=0;
	for(int i=1; i<=n; i++) {
		if(a[i]==1) check1++;
	}
	if(check1 == k) in();*/
	int checkin1= 0;
	for (int i=1; i<=n; i++){
		int check1= 0;
		if(a[i]== 1){
			check1++;
			for(int j=i+1; j<= k+i-1; j++){
				if(a[j]== 1){
					check1++;		
				}
			}
		}
		if(k== 0){
			checkin1++;
		}
		else if(check1== k && check1 != 0){
			checkin1++;
		}
	}
	if(checkin1 ==1) in();
}
void sinh(int i){
	for(int j=0; j<=1; j++){
		a[i]= j;
		if(i==n) kiemtra();
		else sinh(i+1);
	}
}
main(){
	int t;
	cin>>t;
	while(t--){
		start();
		sinh(1);
	}
}

