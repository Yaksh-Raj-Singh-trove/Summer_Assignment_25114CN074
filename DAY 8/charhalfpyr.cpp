#include <iostream>
using namespace std;

int main()
{
    int x;

    for(int i=1;i<=5;i++)
    {x=65;
        for(int j=1;j<=i;j++)
        {
            cout<<(char)x<<"";
            x++;
        }
    cout<<endl;
    }

return 0;
}