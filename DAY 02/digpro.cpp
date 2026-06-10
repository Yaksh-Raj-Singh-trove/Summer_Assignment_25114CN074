#include <iostream>
using namespace std;

int main() {
    int N;
    
    cout<< "enter the number whose digit's product is to be calculated: ";

    cin>> N;
    int prod=1;
    
    int d=N;

    while (d>0)
    {
        prod=prod*(d%10);
        d=d/10;
    }
    
    cout<<"the product of the digits of the number is: ";
    cout<<prod;

    return 0;
}
