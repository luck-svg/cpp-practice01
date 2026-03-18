#include <iostream>
using namespace std;

void print_matrix( int M[3][3]) {
  cout << "-------\n";
  for(unsigned i =0; i < 3; i++) {
    for(unsigned j =0; j < 3; j++)
      cout << M[i][j] << " ";
    cout << "\n";
  }
  cout << "-------\n";
}


int main() {
  int M1[3][3] = { { 1,  2,  3},
                    { 0,  1, -1},
                    {-1,  1, -1}};
  int M2[3][3] = { { 1, -1,  2},
                    { 0,  6,  2},
                    { 2,  1, -1}};

  int M[3][3] = { {0, 0, 0},
                  {0, 0, 0},
                  {0, 0, 0}};

  for(unsigned i =0; i < 3; i++)
    for(unsigned j =0; j < 3; j++)
      for(unsigned k=0; k < 3; k++ )
        M[i][j] += M1[i][k]*M2[k][j];
  print_matrix(M1);
  cout << "times\n";
  print_matrix(M2);
  cout << "=\n";
  print_matrix(M);
  // // Add code for M = M1 + M2
  for(unsigned i =0;i<3;i++)
     for(unsigned j =0; j < 3; j++)

     M[i][j]=M1[i][j] + M2[i][j];
    print_matrix(M1);
    cout << "adds\n";
    print_matrix(M2);
    cout << "=\n";
    print_matrix(M);
}
