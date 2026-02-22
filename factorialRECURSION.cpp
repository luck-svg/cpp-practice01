#include <iostream>
#include <climits>
using namespace std;

int factorial(int n){
    if(n==1){
        return 1;
    }
 return n * factorial(n-1);
}

int main(){
    int k;
    cin>>k;
    cout<<factorial(k)<<endl;

    return 0;
}