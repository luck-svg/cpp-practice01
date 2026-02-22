#include<iostream>
using namespace std;
int main(){
    int n,i=0;
    cin>>n;
    int sum=0;
    for(;i<=n;i=i+3){
        sum=sum+i;
    }
    cout<<sum<<endl;

    return 0;
}