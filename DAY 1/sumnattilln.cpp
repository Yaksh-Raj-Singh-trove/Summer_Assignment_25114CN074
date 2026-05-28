#include <iostream>
using namespace std; 

int main() {
    int N, sum=0;
    cout << "enter number";
    cin>>N;

    for(int i=0 ; i<=N ; i++)
    {
        sum+=i;

    }
cout << "the sum of numbers till "<< N <<  " is " << sum << endl;

return 0;
}