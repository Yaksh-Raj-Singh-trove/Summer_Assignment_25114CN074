#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    int newArr[n];   // to store unique elements
    int newSize = 0;

    for (int i = 0; i < n; i++) {
        bool duplicate = false;
        for (int j = 0; j < newSize; j++) {
            if (arr[i] == newArr[j]) {
                duplicate = true;
                break;
            }
        }
        if (!duplicate) {
            newArr[newSize] = arr[i];
            newSize++;
        }
    }

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < newSize; i++) cout << newArr[i] << " ";
    cout << endl;

    return 0;
}
