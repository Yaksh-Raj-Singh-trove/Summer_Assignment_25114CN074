#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter size of square matrix: ";
    cin >> n;

    int a[n][n];

    cout << "Enter elements of matrix:\n";
    
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    bool symmetric = true;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(a[i][j] != a[j][i])
            
            {
                symmetric = false;
                break;
            }
        }
    }

    if(symmetric)
    
    {
        cout << "Matrix is Symmetric";
    }
    else
    {
        cout << "Matrix is Not Symmetric";
    }

    return 0;
}
