#include <iostream> 
#include <vector> 
#include <cmath>
using namespace std;
int n, p, s;
vector<vector<int> > result;
vector<int> set;
vector<int> prime;

void sieve(){
	int pr[200]={0};
	for(int i=2; i*i<=s; i++){
		if(pr[i] == 0){
			for(int j=i*i; j<=s; j+=i)
				pr[j]=1;
		}
	}
	for(int i=p; i<=s; i++){
		if(pr[i]==0)
			prime.push_back(i);
	}
} //sang nguyen to

void display() 
{ 
    int length=result.size(); //so luong phan tu
    cout<<length<<endl;
    for (int i=0; i<length; i++){
    	for(int j=0; j<n; j++)
    		cout<<result[i][j]<<" ";
    	cout<<endl; 
	}
} 
void primeSum(int total, int index) 
{ 
    if (total== s && set.size()==n) //neu tong bang s va so luong phan tu bang n
    { 
       	result.push_back(set); //luu gia tri
        return; 
    } 
    if (total>s || index==prime.size()) //neu tong lon hon hoac so luong phan tu bang so luong so nguyen to thì return
        return;
    set.push_back(prime[index]); //luu phan tu thu index
    primeSum(total+prime[index], index+1); //de quy tong tiep theo
    set.pop_back();
    primeSum(total, index+1); 
} 
  
int main(){
	int t; cin>>t;
	while(t--){
		cin>>n>>p>>s;
		sieve();
		primeSum(0, 0);
		display();
		prime.clear();
		result.clear();
	}
}
