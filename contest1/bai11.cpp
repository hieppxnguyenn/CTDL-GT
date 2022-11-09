#include <bits/stdc++.h>
using namespace std;
int t;
string binary, gray;
void start(){
	cin>>gray;
}

void gray_to_binary(){
	binary= "";
	binary += gray[0];
	for(int i=1; i<gray.size(); i++){
		if(binary[i-1] == '0') {
			if(gray[i]=='1') binary += "1";
			else binary += "0";
		}
		else {
			if(gray[i]=='1') binary += "0";
			else binary += "1";
		}
	}
	cout<<binary<<endl;
}
main(){
	cin>>t;
	while(t--){
		start();
		gray_to_binary();
	}
}

