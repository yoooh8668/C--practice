#include <iostream>
using namespace std;

int main() {
  cout << "Hello World!" << endl;
  //output sign "<<"
  
  /*
  withoud "using namespace std;"
  ==>
  std::cout << "Hello World!" << std::endl;
  */
  string hello = "HHEELLLLOO";
  string world = "WWOORRLLDD";
  
  //One "<<" will output one thing to cout, can be multiple.
  cout << "Hello" << hello << "world" << world << endl;

  //can use "+" to output two variable
  cout << hello + world << endl;
  return 0;
}
