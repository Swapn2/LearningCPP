
#include<bits/stdc++.h>
using namespace std;

typedef struct Employee{      
    int eid;
    char favchar;
    float salary;
}ep;

union money{
    int rice;
    char car;
    float pounds;
};

int main(){

  //  enum 
  enum meal{breakfast , lunch , dinner};
  cout << breakfast << endl;  // it will print 0
  cout << lunch << endl;      // it will print 1
  cout << dinner << endl;     // it will print 2


  //  union 

  union money m1;

  m1.rice = 34;
  cout << m1.rice << endl;  // it will actual value
  m1.car = 'c';   // it will overwrite the previous value
  cout << m1.car << endl;
  cout << m1.rice << endl;  // it will print some garbage value
    
  //  structure
    
  ep swapn;
  swapn.eid = 1;
  swapn.favchar = 'K';
  swapn.salary = 3000000;

  cout << swapn.eid <<endl;
  cout << swapn.favchar <<endl;
  cout << swapn.salary <<endl;


  ep saumya;
  ep kaju;

  return 0;   
}