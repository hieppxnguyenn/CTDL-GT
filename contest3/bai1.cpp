#include <bits/stdc++.h>
using namespace std;

int t, n;
int a[10]= {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
void start(){
	cin>>n;
}
void out(){
	int c=0;
	for(int i=9; i>=0; i--){
		if(n>=a[i]) {
			c+= n/ a[i];
			n= n%a[i];
		}
	}
	cout<<c;
}
main(){
	cin>>t;
	while(t--){
		start();
		out();
		cout<<endl;
	}
}
