#include <bits/stdc++.h>
#define TRUE 1 
#define FALSE 0 
using namespace std;
int n, t, a[100], k=1, Stop; 

void start(){ 
    cin>>n;
	k=1; 
	a[1]=n; 
}
void in(void){ 
    for(int i=1; i<=k; i++) 
    printf("%3d", a[i]);
}
void ketiep(){ 
	int i, j, R, S, D; 
    i= k;
    while(i>0 && a[i]==1) i--; 
    if(i>0){ 
        a[i] = a[i]-1; 
        D = k - i +1; 
        R = D / a[i]; 
        S = D % a[i]; 
        k = i; 
        if(R>0){ 
        for(j=i+1; j<=i+R; j++) 
	        a[j] = a[i]; 
            k = k+R;
        }
        if(S>0){
            k=k+1; 
			a[k] = S;
        }
    }
    else Stop=TRUE;
}

void sinh(){ 
	Stop = FALSE; 
    while(!Stop){ 
		in(); 
        ketiep();
    }
} 

main(){
	cin>>t;
	while(t--){
		start(); 
		sinh(); 
	}
}
