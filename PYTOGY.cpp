#include<bits/stdc++.h>
using namespace std ; 

bool PYTOGY(float a , float b , float c)
{
	if(a * a + b * b == c * c || a * c + c * c == b * b || b * b + c * c == a * c)
	return true ;
	return false ;
}
int main()
{
	float a ,b , c;
	cin >> a >> b >> c;
	if(PYTOGY(a,b,c) == true) cout << "YES" ; else cout << "NO" ;
	return 0;
}