#include <iostream>
using namespace std;

int main () {

/*Uzrakst�t programmu, kas izveido mas�vu ar 3 integer v�rt�b�m (v�rt�bas nosakat pa�i).
 Programmai vajag atrast liel�ko un maz�ko v�rt�bu �aj� mas�v�. */

    int x[3] = {12, 34, 2};

    if (x[0]>x[1]&& x[0]>x[2]) {
        cout<<"Lielakais skaitlis ir "<<x[0]<<"."<<endl;
    } else if (x[1]>x[0]&&x[1]>x[2]) {
        cout<<"Lielakais skaitlis ir "<<x[1]<<"."<<endl;
    } else if (x[2]>x[1]&&x[2]>x[0]) {
        cout<<"Lielakais skaitlis ir "<<x[2]<<"."<<endl;
    }

    if (x[0]<x[1]&& x[0]<x[2]) {
        cout<<"Mazakais skaitlis ir "<<x[0]<<"."<<endl;
    } else if (x[1]<x[0]&&x[1]<x[2]) {
        cout<<"Mazakais skaitlis ir "<<x[1]<<"."<<endl;
    } else if (x[2]<x[1]&&x[2]<x[0]) {
        cout<<"Mazakais skaitlis ir "<<x[2]<<"."<<endl;
    }



}
