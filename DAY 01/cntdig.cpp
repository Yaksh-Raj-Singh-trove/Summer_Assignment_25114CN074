#include <iostream>
using namespace std;
int main() {
    int N;
    
    cout<< "enter the number  whose number of digits have to be seen";

    cin>> N;
    int d=N;

    int nodig=0;
    while (d>0)
    {
        d=d/10;
        nodig+=1;
    }
cout<< "the number of digits in the number "<< N <<" is: " << nodig;
return 0;
}