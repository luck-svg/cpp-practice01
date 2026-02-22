#include <iostream>
using namespace std;

int BinaryToDec(int n){
    int pow=1;int ans =0;
 
    while(n>0){
           int rem =n%10;
           n/=10;
           ans +=(pow*rem);
           pow *=2;
    }
    return ans;
}
 
int main(){
    int n;
    cin>>n;
    cout<<BinaryToDec(n)<<endl;
    return 0;
}