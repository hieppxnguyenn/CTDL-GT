#include <bits/stdc++.h>
using namespace std;
int a[50], b[50];
int t;
string s;
void start(){
	cin>>s;
	for(int i=1; i<=s.size(); i++) b[i]=1;
}
void in(){
	for(int i=1; i<=s.size(); i++) cout<<s[a[i]-1];
	cout<<" ";
}
int hoanvi(int i){
	for(int j=1; j<=s.size(); j++){
		if(b[j]==1){
			b[j]=0;
			a[i]=j;
			if(i==s.size()) in();
			else hoanvi(i+1);
			b[j]=1;
		}
	}
}

main(){
	cin>>t;
	while(t--){
		start();
		hoanvi(1);
		cout<<endl;
	}
}

