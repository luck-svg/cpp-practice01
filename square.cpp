#include<iostream>
using namespace std;
int main(){
    int n= 100,sum=0;
    for(int i=1;i<=n;i=i+2){
        sum+=i;
        cout<<sum<< " ";
    }
    return 0;
}