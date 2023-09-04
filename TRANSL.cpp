#include<bits/stdc++.h>
using namespace std  ;
void THU(int n)
{
	switch(n) 
	{
		case 2 :
			cout << "MONDAY" ;
				break;
		case 3 :
			cout << "TUESDAY" ;
				break;
		case 4 :
			cout << "WEDNESDAY" ;
				break;
		case 5 :
			cout << "THURSDAY" ;
				break;
		case 6 :
			cout << "FRIDAY" ;
				break;
		case 7 : 
			cout << "SATURDAY" ;
				break;
		case 8 :
			cout << "SUNDAY" ;
				break;
			default:
				break;
	}
 } 
int main()
{
	int n; 
	cin >> n; 
	THU(n) ;
	return 0; 
}