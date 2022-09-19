#include <iostream>
using namespace std;

int main () {

/*Uzrakstît programmu, kas izveido masîvu ar 3 integer vçrtîbâm (vçrtîbas nosakat paði).
 Programmai vajag atrast lielâko un mazâko vçrtîbu ðajâ masîvâ. */

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
