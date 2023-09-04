#include<bits/stdc++.h>
using namespace std ;
void AM(int m , int n , int k )
{
    if (m <0) cout << m*m ;
    if ( n < 0) cout << n*n; 
    if (k <0) cout << k*k ;
}
void DUONG(int m , int n , int k )
{
	if (m >0) cout << pow(m,3) ;
    if ( n > 0) cout << pow(n,3); 
    if (k > 0) cout << pow(k,3);	
}
int main()
{
	int m , n , k;
	cin >> m >> n >> k ; 
	DUONG(m,n,k) ;
	AM(m,n,k) ;
	return 0 ;
}