#include<iostream>
using namespace std;
int main(){

  int n=12;
  for(int i=0;i<=n;i++){
      char ch='a'; char sm='B';
    for(int j=0;j<=i;j++){ 
      
      cout<<" "<<ch <<" "<<sm;
      sm=sm+2;
      ch=ch+2;
    }
   cout<<endl;
  }
  
    return 0;
}