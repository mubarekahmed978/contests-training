#include <bits/stdc++.h>
#include <vector>
#define forn(i,n) for(int i=0;i<(int)n;i++)
#define ENDL "\n";
//typedef vector<int> vi;//to use vector<int> datatype as vi
using namespace std;
int fact(int n){
	if ((n==1 )|| (n==0))
	   return 1;
	else
		return n*fact(n-1) ;
}
int main() {
	int n,x;
	cin>>n>>x;
	int a,b=0;
	
	forn(i,n){
		cin>>a;
		if(a>=1 && a<=x)
		  b+=fact(a);
	}
	if(b%fact(x)==0)
    cout<<"Yes";
    else
    cout<<"No";
	return 0;
}

