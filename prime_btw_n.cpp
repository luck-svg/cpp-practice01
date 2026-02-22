#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    for (int j = 1; j <= n; j++) {
        int count = 0;
        for(int i=1;i<=j;i++){
            if(j%i==0){
                count++;
            }
        }
        if(count==2){
            cout<<j<<endl;
        }

    }
     return 0;
}