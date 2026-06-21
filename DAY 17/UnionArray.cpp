#include <iostream>
using namespace std;

int main() 
{
    int n1, n2;
    cout << "Enter size of first array: ";
    cin >> n1;
    
    int a[n1];
    cout << "Enter elements of first array:\n";
    
    for(int i=0; i<n1; i++) 
    {
        cin >> a[i];
    }
    
    
    cout << "Enter size of second array: ";
    cin >> n2;
    
    int b[n2];
    cout << "Enter elements of second array:\n";
    
    for(int i=0; i<n2; i++) 
    {
        cin >> b[i];
    }
    
    int unionArr[n1+n2], k=0;


    for(int i=0; i<n1; i++) 
    
    {
        unionArr[k++] = a[i];
    }
    
    for(int i=0; i<n2; i++) 
    {
        bool found = false;
        
        for(int j=0; j<k; j++) 
        {
            if(unionArr[j] == b[i]) 
            {
                found = true;
                break;
            }
        }
        
        if(!found) 
        {
            unionArr[k++] = b[i];

        }
    }

    cout << "Union of Arrays: ";
    for(int i=0; i<k; i++) cout << unionArr[i] << " ";
    return 0;
}
