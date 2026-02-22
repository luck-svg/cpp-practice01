#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int count = 0;

    for (int j = 1; j <= n; j++) {
        if (n % j == 0) {
            count++;
        }
    }

    if (count == 2)
        cout << "is a prime" << endl;
    else
        cout << "not a prime" << endl;

    return 0;
}