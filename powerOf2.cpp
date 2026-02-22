#include <iostream>
using namespace std;

bool isPowerOfTwo(int n) {
    if (n <= 0) 
        return false;
        
    if (n == 1) 
        return true;
        
    if (n & 1)   // if last bit is 1 and n != 1
        return false;
        
    return isPowerOfTwo(n >> 1);   // right shift
}

int main() {
    int n;
    cin >> n;

    if (isPowerOfTwo(n))
        cout << "Power of 2";
    else
        cout << "Not Power of 2";

    return 0;
}

// int main(){
//     cout<<(24<<1)<<endl;
//}