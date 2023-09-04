#include<bits/stdc++.h>
using namespace std ; 


bool isArithmeticSequence(int m, int n, int k) {
    return (2 * n == m + k);
}

int main() {
    int m , m , k;
    cin >> m >> n >> k;

    if (CSC(m, n, k)) 
	{
        cout << "YES";
    } else 
	{
        cout << "NO";
    }

    return 0;
}