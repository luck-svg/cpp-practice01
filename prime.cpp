#include<iostream>
using namespace std;
int main(){
    int i,n;
    cout<<"enter the number";
    cin>>n;
    bool isprime=(true);
    for(i=2;i<=n-1;i++){
        if(n%i==0){
            isprime=false;
            break;
        }
    } 
       if(isprime==true){
            cout<<n<<" : is prime";
        }else{
            cout<< n<<": non prime";
        }
       
    

    return 0;
}