#include<bits/stdc++.h>
using namespace std ; 


int  main()
{
	float a , b , c  , x1 , x2;
	cin >> a >> b >> c  ; 
	if(a == 0) {
        if(b == 0) {
            if (c == 0) {
                cout << "Vo so nghiem" ;
            } else {
                cout << "Vo nghiem" ;
            } 
        } else {
            cout << "Nghiem duy nhat" << -c/b ;
        }
    } else {
        int delta = pow(b,2) - 4*a*c;
        if(delta > 0) {
            x1 = (-b+sqrt(delta))/(2*a);
            x2 = (-b-sqrt(delta))/(2*a);
            cout << "Nghiem thu nhat x1 = " << x1 << endl;
            cout << "Nghiem thu hai x2 = " << x2 ;
        } else if ( delta == 0) {
            cout << "Phuong trinh co nghiem kep: x1 = x2 " << -b/2*a ;
        } else {
            cout << "Phuong trinh vo nghiem";
        }
    }
    return 0;
}