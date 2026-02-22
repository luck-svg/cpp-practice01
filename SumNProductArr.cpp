#include <iostream>
using namespace std;
int SumNProductArr(int arr[],int sz, int&sum ,int&pro){
      sum =0;  pro=1;
    for(int i=0;i<sz;i++){
        sum=arr[i]+sum;
       
        pro=pro*arr[i];
    }
   return sum;
   return pro;
}


int main(){
    int arr[]={1,2,3,4,5,6};
    int sz=6;
    int sum,pro;
    SumNProductArr(arr,sz,sum,pro);
    cout<<"sum = "<< sum << " "<< "product = "<<pro;

    return 0; 
}