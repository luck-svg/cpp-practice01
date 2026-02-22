#include <iostream>
using namespace std;

int DecToBinary(int n){
    int ans=0;
    int pow = 1;
    while(n>0){
        int rem = n%2;
        n/=2;

        ans +=(rem * pow);
        pow *=10;
    }
    return ans;
}
 
// int main (){
//     int n;
//     cin>>n;
//     cout<<DecToBinary(n)<<endl;
//     return 0;
// }

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<DecToBinary(i)<<endl;
    }
}