#include <iostream>
using namespace std;

int main() {

    
    int N;
    cout<< "enter a number to be checked for prime or not: ";
    cin>> N;

    if (N==1 || N==0)
    {
        cout<<"neither prime nor composite";
        exit(0);
    }
    if (N<4 && N>1)
    {
        cout<<"the number is  prime!";
        exit(0);
    }
    
    bool isprime=true;
    for (int i=2;i<N;i++)
    {
        if (N%i==0)
        {
            isprime=false;
        }
        else
        {
            isprime=true;
    
        }
    }    
    
    if (isprime=true)
    {
        cout<<"the number is not prime!";
    }
    else
    {
        cout<<"the number is prime!";
    }

return 0;
}
