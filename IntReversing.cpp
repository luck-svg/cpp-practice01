#include <iostream>
using namespace std;

int main() {
    int n, rev = 0;
    cin >> n;

    while (n > 0) {
        int digit = n % 10;      // get last digit
        rev = rev * 10 + digit; // add digit to reversed number
        n = n / 10;             // remove last digit
    }

    cout << rev;
    return 0;
}
 
// using_reccursion

int reverseNumber(int n, int rev = 0) {
    if (n == 0)              // base case
        return rev;

    return reverseNumber(n / 10, rev * 10 + (n % 10));
}

int main() {
    int n;
    cin >> n;

    cout << reverseNumber(n);
    return 0;
}
