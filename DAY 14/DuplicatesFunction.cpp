#include <iostream>
using namespace std;

int main() 
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }

    cout << "Duplicate elements found: ";
    bool foundAny = false;


    for (int i = 0; i < n; i++) 
    {
        for (int j = i + 1; j < n; j++) 
        {
            if (arr[i] == arr[j]) 
            
            {
                
                bool alreadyPrinted = false;
                
                for (int k = 0; k < i; k++) 
                {
                    if (arr[k] == arr[i]) 
                    {
                        alreadyPrinted = true;
                        break;
                    }
                }
                
                if (!alreadyPrinted) 
                {
                    cout << arr[i] << " ";
                    foundAny = true;
                }
                break;
            }
        }
    }

    if (!foundAny) 
    {
        cout << "None";
    }

    cout << endl;
    return 0;
}
