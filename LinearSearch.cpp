#include <iostream>
using namespace std;

int linearSearch(int arr[],int size,int target){
    for(int i=0 ; i<size;i++){
        if(arr[i] ==target){
            return i;
        }
    }
    return -1;
}
int main(){
    int n; cin>>n;
    int arr[] ={2,3,5,6,8,1,0,4};
    int size =8;
    int target = n;
    if(linearSearch(arr,size,target)>0){
        cout << "index of target "<< target << " = " <<linearSearch(arr,size,target)<<endl;
    }else{
        cout<< "target "<< target << " not in array"<<endl;
    }
}