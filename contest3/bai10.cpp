#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll minCost(ll arr[], ll n){
	priority_queue<ll, vector<ll>, greater<ll> > pq(arr, arr + n);
	ll res = 0;
	while(pq.size() > 1){
		ll first = pq.top();//nho nhat
		pq.pop();//xoa phan tu
		ll second = pq.top();//nho thu 2
		pq.pop();//xoa phan tu
		res += first + second;//tong 
		pq.push(first+second); // chen them doan day moi noi
	}
	return res;
}
int main(){
	ll t, n, *arr; cin >> t;
	while(t--){
		cin >> n;
		arr = new ll[n];
		for (int i = 0 ; i < n; i++) cin >> arr[i];
		cout << minCost(arr, n) << endl;
	}
}
