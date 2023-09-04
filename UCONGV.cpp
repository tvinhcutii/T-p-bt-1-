#include<bits/stdc++.h>
using namespace std ; 
int main()

{
	int n ; 
	int u ,v ; 
	cin >> n  ;
	int a[n] ;
	int i = 0 ; 
	while(i<n)
	{
		u = n-i ;
		v = n-u ;
		i++ ;
	}
	cout << u << " "<< v << endl;

	return 0 ; 
}