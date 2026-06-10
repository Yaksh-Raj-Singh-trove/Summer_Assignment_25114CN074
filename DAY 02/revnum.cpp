#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N;
    cout<< "enter the digit to be reversed: ";
    cin>>N;

    int rev=0;
    int nodig=0;

    int d=N;

    while(d>0)
    {
        d=d/10;
        nodig+=1;

    } 

    for(nodig;nodig>=0;nodig--)
    {
        
        rev=rev+pow(10,nodig-1)*(N%10);
        N=N/10;


    }

    cout<< "the reversed number is: "<<endl;
    cout<< rev;
    
    return 0;
}


