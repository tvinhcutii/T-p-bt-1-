#include<bits/stdc++.h>
using namespace std ; 

bool CSN(int p, int q, int r) 
{
    if (q/p == r/q)
    return true;
    return false;
}

int main()
{
	int p , q , r ;
	cin >> p >> q >> r ;
	if(CSN(p, q, r)) 
        cout << "YES";
    else 
        cout << "NO";
	return 0; 
}