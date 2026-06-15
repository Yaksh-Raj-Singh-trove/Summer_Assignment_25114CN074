#include <iostream>
using namespace std;

void rotateLeft(int arr[], int n) 
{
    int temp = arr[0]; 
    for(int i = 0; i < n-1; i++)
    {
        arr[i] = arr[i+1]; 
    }
    arr[n-1] = temp;
}

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) cin >> arr[i];

    rotateLeft(arr, n);

    cout << "Array after left rotation: ";
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
    return 0;
}
