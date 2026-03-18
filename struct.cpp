#include <iostream>
#include <string>
using namespace std;

struct Student {
  string name;
  string rollno;
  int marks;
  bool isUG;
};

void maxend(Student students[], int n) {
  int maxindex=0;
  for(int i=1; i<n; i++)
    if(students[i].isUG < students[maxindex].isUG &&
      students[i].marks > students[maxindex].marks)
      maxindex = i;
  auto tmp = students[maxindex]; students[maxindex]=students[n-1]; students[n-1]=tmp;
}

int main() {
  Student students[6] = {
    {"Ram"    , "25B1000", 61, true },
    {"Rahim"  , "25B1001", 51, true },
    {"Faiz"   , "25D0201", 64, false},
    {"Kabir"  , "25B1002", 56, true },
    {"Mirabai", "25B1003", 69, true },
    {"Tuslidas","25D0202", 85, false}
  };
  for (int i=6; i>0; i--) maxend(students,i);
  for (int i=0; i<6; i++) cout << students[i].name << " " << students[i].isUG << "\n";
}
