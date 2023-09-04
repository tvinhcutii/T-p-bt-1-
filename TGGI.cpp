#include<bits/stdc++.h>
using namespace std ; 
int main()
{
	float a , b , c ;
	cin >> a >> b >> c ; 
	if(a + b <= c || a + c <= b ||  b + c <= a) cout << "ko phai tam giac" ;
	if ( a == b  || a == c || b == c) cout << "can" ;
	if(a == b && b == c) cout << "deu" ;
	if(a * a + b * b == c * c || a * c + c * c == b * b || b * b + c * c == a * c) cout << "vuong" ;
	if (a == b  || a == c || b == c && a * a + b * b == c * c || a * c + c * c == b * b || b * b + c * c == a * c ) cout << "vuong can " ;
	return 0;
}