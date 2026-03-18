#include <iostream>
using namespace std;
int main() {
  char c, vowels[] = {'a', 'e', 'i', 'o', 'u','A','E','I','O','U'};
  int N[10] = {};
  for(cin >> c; (c >= 'a' && c <= 'z') ||(c>='A' && c<='Z') ; cin >> c) {
    for (int i=0; i<10; i++) {
      if(c == vowels[i]) {
        N[i]++; break;
      }
    }
  }
  for(int i=0; i<10; i++)
     cout << "#" << vowels[i] << " = " << N[i] << (i==4?"":", ");
  cout << endl;
}
