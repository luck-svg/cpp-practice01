#include <iostream>
using namespace std;
//  int main(){
//    int nums[] = {5,15,22,1,-14,-12};
//    int size=6;

//    int smallest =INT_MAX;     
//    for(int i=0;i<size;i++){     
//      if(nums[i] < smallest){      //min(nums[i] , smallest);
//        smallest = nums[i];      // insted of if
//      }
//    }

//    cout<<"smallest = " << smallest<<endl;
//    return 0;
// }


int main(){
    int nums[] = {5,15,22,1,-14,-12};
   int size=6;
   int largest=INT_MIN;
   for(int i=0;i<size;i++){largest = max(nums[i], largest);
   }
   cout<<"largest = "<<largest<<endl;
   return 0;
}