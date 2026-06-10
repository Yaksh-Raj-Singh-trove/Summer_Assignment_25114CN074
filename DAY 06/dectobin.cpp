#include <iostream>
#include <list>
using namespace std;

int main()
{
    int N;
    cout<<"enter a decimal number: "<<endl;

    cin>>N;

    int d=N;

    list <int> declist;

    while(d!=0)
    {
        declist.push_back(d%2);

        d/=2;

    }

    declist.reverse();

    cout<<"the binary conversion of "<<N<<" is: "<<endl;

    for(int i: declist)
    {
        cout<<i;
    }

return 0;

}