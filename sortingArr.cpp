#include <iostream>
using namespace std;

void maxend(int list[], int n) {
  int maxindex=0;
  for(int i=1; i<n; i++)
    if(list[i] > list[maxindex])
      maxindex = i;
  int tmp = list[maxindex]; list[maxindex]=list[n-1]; list[n-1]=tmp;
}

int main() {
  int numbers[11] = {61,51,56,69,90,84,86,45,88,55,21};
  for (int i=11; i>0; i--) maxend(numbers,i);
  for (int i=1; i<11; i++) cout << numbers[11-i] << " ";
  cout << endl;
}
