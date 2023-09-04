#include<bits/stdc++.h>

using namespace std ; 

int main()
{
	double a , b , k , t;
	cin >> a >> b >> k >> t ;
	double cao = (t*3) / (a * b) ;
	if(cao < (k/100)) cout << "YES" << endl;
	if(cao > (k/100)) cout << "NO" << endl ;
	cout << cao << endl; 
	cout << k/100 ;
	return 0;
}