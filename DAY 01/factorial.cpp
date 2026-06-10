#include <iostream>
using namespace std;
int main() {
    int N;
    cout<< "enter number whose factorial has to be calculated: "<<endl;
    cin>> N;
    int fact=1;
    
    cout<< "the factorial of " << N << " is: " ;    
    for(int i=N;i>=1;i--)
    {
        fact=fact*i;

    }
    cout << fact;
    return 0;
}