#include <bits/stdc++.h>
using namespace std;

int a[10], b[10], n, c[10], dem=0;
bool used[10];

void Trydau(int i){
	for(int j=1; j<=3; j++){
		c[i]= j;
		if(i== 4) {
			int sum= a[b[1]];
			for(int h=1; h<=4; h++){
				if(c[h] == 1) sum+= a[b[h+1]];
				if(c[h] == 2) sum-= a[b[h+1]];
				if(c[h] == 3) sum*= a[b[h+1]];
			}
			if(sum == 23) dem++;
		}
		else Trydau(i+1);
	}
}

void Try(int i){
	for(int j=1; j<=5; j++){
		if(used[j]){
			b[i]= j;
			used[j] = false;
			if(i== 5) Trydau(1);
			else Try(i+1);
			used[j] = true;
		}
	}
}

main(){
	int t; cin>>t;
	while(t--){
		for(int i=1; i<=5; i++) {
			cin>>a[i];
			used[i]= true;
		}
		dem=0;
		Try(1);
		if(dem == 0) cout<<"NO"<<endl;
		else cout<<"YES"<<endl;
	}
}
