#include <iostream>
using namespace std;
int main()
{
    int no;
    long fac;

    cout <<"Enter a Number : ";
    cin >> no;

    fac = 1;
    for (int r=no; r >= 1; r--) {
        fac = fac * r;
    }

    cout <<"Factorial of is "<< no << fac;  
    return 0;
}