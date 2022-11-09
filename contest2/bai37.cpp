#include <bits/stdc++.h>
using namespace std;

int N, M, a[30][30], MAX=-1;

void start(){
	cin>>N>>M;
	int b, c;
	for(int i=0; i<M; i++) {
		cin>>b>>c;
		a[b][c] = 1;
		a[c][b] = 1;
	}
}
void DFS(int u, int tmp){
	MAX = max(MAX, tmp);
	for(int v=0; v<N; v++){
		if(a[u][v] == 1) {
			a[u][v]=0;
			a[v][u]=0;
			DFS(v, tmp+1);
			a[u][v]=1;
			a[v][u]=1;
		}
	}
}
void in(){
	MAX= -1;
	for(int i=0; i<N; i++) DFS(i, 0);
	cout<<MAX<<endl;
}

main(){
	int t;
	cin>>t;
	while(t--){
		for(int i=0; i<=30; i++){
			for(int j=0; j<=30; j++) a[i][j] = 0;
		}
		start();
		in();
	}
}
