#include <iostream>
using namespace std;

bool isPalindrome(int num) {
    if (num < 0) 
        return false;  

    int original = num;
    long reverse = 0;

    while (num != 0) {
        int digit = num % 10;
        reverse = reverse * 10 + digit;
        num /= 10;
    }

    return original == reverse;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isPalindrome(number))
        cout << "Palindrome Number";
    else
        cout << "Not a Palindrome Number";

    return 0;
}