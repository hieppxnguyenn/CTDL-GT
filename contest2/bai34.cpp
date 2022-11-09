#include <bits/stdc++.h>
using namespace std;
bool cot[100], chinh[100], phu[100];
int t, m=0, a[100][100], b[100];
void start(){
	for(int i=1; i<=8; i++){
		for(int j=1; j<=8; j++) cin>>a[i][j];
	}
	for(int i=1; i<=8; i++) cot[i]= true;
	for(int i=1; i<=15; i++){
		chinh[i]= true;
		phu[i]= true;
	}
}
void in(){
	int sum=0;
	for(int i=1; i<=8; i++) sum+= a[i][b[i]];
	if(sum > m) m= sum;
}
int Try(int i){
	for(int j=1; j<=8; j++){
		if(cot[j] && chinh[i-j+8] && phu[i+j-1]){
			b[i]= j;
			cot[j]= false;
			chinh[i-j+8]= false;
			phu[i+j-1]= false;
			if(i==8) in();
			else Try(i+1);
			cot[j]= true;
			chinh[i-j+8]= true;
			phu[i+j-1]= true;
		}
	}
}
main(){
	cin>>t;
	while(t--){
		start();
		Try(1);
		cout<<m<<endl;
		m=0;
	}
	
}

