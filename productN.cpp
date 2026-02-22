#include<iostream>
using namespace std;
int productN(int n){
    int product=1;

    for( int i=1;i<=n;i++){
       product*=i;
    }
    return product;
}

int main(){
    int n;
     cin>>n;
    cout<<productN(n)<<endl;
    return 0;

}