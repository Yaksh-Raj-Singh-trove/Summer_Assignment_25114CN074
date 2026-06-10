#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int N;
    
    cout<<"enter the number to be checked for palindrome: ";

    cin>> N;
    int rev=0;

    int nodig=0;
    
    int d=N;
    while(d>0)
    {
        d/=10;
        nodig+=1;
        
    }
    
    int e=N;
    for(nodig;nodig>0;nodig--)
    {
        rev=rev+pow(10,nodig-1)*(e%10);
        e/=10;
    }

    if (rev==N)
    {
        cout<<"the number is palindrome!"<<endl;
    }
    
    else
    {
        cout<<"the number is not palindrome!"<<endl;
    }
    
    return 0;    
}