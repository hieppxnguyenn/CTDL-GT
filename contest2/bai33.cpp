#include <bits/stdc++.h>
using namespace std;

int n, dem=0;
bool cot[100], chinh[100], phu[100];
void start(){
	cin>>n;
	for(int i=1; i<=n; i++) cot[i]= true;
	for(int i=1; i<2*n; i++){
		chinh[i]= true;
		phu[i]= true;
	}
}
int Try(int i){
	for(int j=1; j<=n; j++){
		if(cot[j] && chinh[i-j+n] && phu[i+j-1]){
			cot[j]= false;
			chinh[i-j+n]= false;
			phu[i+j-1]= false;
			if(i == n) dem++;
			else Try(i+1);
			cot[j]= true;
			chinh[i-j+n]= true;
			phu[i+j-1]= true;
		}
	}
}
main(){
	start();
	Try(1);
	cout<<dem;	
}

