#include <iostream>
using namespace std;

bool isPerfect(int n) {
    int sum = 0;
    for(int i = 1; i <= n/2; i++) {
        if(n % i == 0)
            sum += i;
    }
    return (sum == n);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if(isPerfect(num))
        cout << num << " is Perfect" << endl;
    else
        cout << num << " is Not Perfect" << endl;

    return 0;
}
