class Solution {
public:
    bool isPalindrome(int x) {
      if (x < 0) 
        return false;  

       int original = x;
       long reverse = 0;

     while (x != 0) {
        int digit = x % 10;
        reverse = reverse * 10 + digit;
        x /= 10;
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
    
};