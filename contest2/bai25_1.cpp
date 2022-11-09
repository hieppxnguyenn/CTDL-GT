#include <bits/stdc++.h>
using namespace std;
int n, k, t, a[11], b[100];
vector <int> arr;
void start(){
	cin>>n;
	for(int i=1; i<=n; i++) cin>>a[i];
}
void check(){
	int sum=0;
	for(int i=1; i<=n; i++) sum+= b[i]*a[i];
	arr.push_back(sum);
}

void Try(int i){
	for(int j=1; j>=0; j--){
		b[i]= j;
		if(i==n) check();
		else Try(i+1);
	}
}
main(){
	cin>>t; 
	while(t--){
		arr.clear();
		start();
		Try(1);
		int i=0;
		sort(arr.begin(), arr.end());
		for(int j=0; j<arr.size()-1; j++) {
			if(arr[j]==arr[j+1]){
				cout<<"YES";
				i=1;
				j=arr.size();
			}
		}
		if(i==0) cout<<"NO";
		cout<<endl;
	}
}

