#include <iostream>
using namespace std;

int main () {

    double a, b, c;

    cout<<"Ierakstat jebkadus 3 skaitlus trijstura malu garumiem.\n";
    cin>>a>>b>>c;
    if (a+b>c&&a+c>b&&b+c>a) {
        cout<<"Eksiste";
    } else {
        cout<<"Neeksiste";
    }

}
