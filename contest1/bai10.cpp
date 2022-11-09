#include <bits/stdc++.h>
using namespace std;
long long t;
string binary, gray;
void start(){
	cin>>binary;
}
string binary_to_gray(char a, char b){
	if(a== b) return "0";
	else return "1";
}
void binary_to_gray(){
	gray = "";
	gray+= binary[0];
	for(int i=1; i<binary.size(); i++) {
		gray += binary_to_gray(binary[i-1], binary[i]);
	}
	cout<<gray<<endl;
}
main(){
	cin>>t;
	while(t--){
		start();
		binary_to_gray();
	}
}

