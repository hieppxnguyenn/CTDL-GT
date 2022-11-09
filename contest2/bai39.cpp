#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main (){
	string s;
	ll n;
	cin>>s>>n;
	ll check=s.size();
	
	while(n>check) check*=2;
	
	int len=s.size();
	
	while(n>len){
		if(n>check/2){
			n-=check/2;
			n--; // khi x2 xau thi phan tu can tim se lui 1
			if(n==0) n=check/2;
		}
		check/=2;
	}
	cout<<s[n-1]; //do ta dang xet xau + 1;
	return 0;
}
