#include <iostream>
using namespace std;

int main() {
    int N;
    cout<< "the number whose sum of digits is to be taken is: "<<endl;

    cin>>N;
    int d=N;

    int sum=0;

    while (d>0)
    {
        sum=d%10+sum;
        d=d/10;

    }
cout<< "the sum of digits is: "<<endl;

cout<<sum;
return 0;

}
