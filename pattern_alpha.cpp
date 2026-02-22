#include<iostream>
using namespace std;
int main(){
  int n=5;
  
  for(int i=0;i<n;i++){
    char ch='A';char sm;
    
    for(int j=0;j<=i;j++){
      sm=ch+i;
     cout<<char(sm)<<" "; 
    }
     cout<<endl;
  }

    return 0;
}