#include <bits/stdc++.h>
using namespace std;
int n;
int a[1000];
void quyhoachdong(){
	cin>>n;
	long long sum=0;
	for(int i=0; i<n; i++) {
		cin>>a[i];
		sum+= a[i];
	}
	if(sum % 2 == 1) cout<<"NO";
	else {
		int s= sum/2;
		int L[100002];
		for(int i=0; i<=100002; i++) L[i]==0;
		L[0]=1;
		for(int i=1; i<=n; i++){
			for(int h= s; h>= a[i]; h--){
				if(L[h] == 0 && L[h-a[i]] == 1) L[h]= 1;
			}
		}
		if(L[s]== 1) cout<<"YES";
		else cout<<"NO";
	}
}

main(){
	int t;
	cin>>t;
	while(t--){
		quyhoachdong();
		cout<<endl;
	}
}
