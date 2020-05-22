#include <iostream>
#include <string>
using namespace std;

int main() {
  string cars[] = {"Volvo", "BMW", "Ford", "Mazda"};
  //will have no extra space of other element
  
  //string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
  //if use string cars[5] = {"Volvo", "BMW", "Ford", "Mazda"};
  //you can get one extra space to use.
  
  
  cars[0] = "Opel";
  cout << cars[0] << endl;
  return 0;
}

