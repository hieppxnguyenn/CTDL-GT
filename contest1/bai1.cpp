#include <bits/stdc++.h>
using namespace std;
string a;

void start(){
	cin>>a;
}
void sinh(){
	for(int i=a.size()-1; i>=0; i--) {
		if(a[i] == '0') {
			a[i]= '1';
			i=0;
		}
		else a[i] = '0';
	}
}

void out(){
	for(int i=0; i<a.size(); i++) cout<<a[i];
	cout<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		start();
		sinh();
		out();
	}
}

