#include <iostream>
#include <string>
using namespace std;

struct Department {
  string name;
  string building;
  // bool operator==(const X&) const = default;
};

struct Student {
  string name;
  string rollno;
  int marks;
  bool isUG;
  Department department;
};


int main() {
  Department d1 = { "CSE", "CC"};
  Department d2 = { "EE" , "GG"};

  Student students[6] = {
    {"Ram"    , "25B1000", 61, true , d1},
    {"Rahim"  , "25B1001", 51, true , d2},
    {"Faiz"   , "25D0201", 64, false, d1},
    {"Kabir"  , "25B1002", 56, true , d1},
    {"Mirabai", "25B1003", 69, true , d2},
    {"Tuslidas","25D0202", 85, false, d2}
  };


   for(int i = 0; i < 6; i++) {
  if (students[i].department.name == d2.name) {
    if (!students[i].isUG)
      cout << students[i].name << " is not UG student" << endl;
    else
      cout << students[i].name << " is UG student" << endl;
    }
  }
}
