#include <iostream>
using namespace std;
// int main(){
//     int a,b;
//     cin>>a>>b;
//     swap(a,b);
//     cout<<a<<" "<<b<<endl;
//  return 0;
// }

int main(){
    int a,b;
    cin>>a>>b;
    int temp;
    temp=a;a=b;b=temp;
    cout<<a<<" "<<b<<endl;
 return 0;
}