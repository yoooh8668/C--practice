#include <iostream>
#include <string>
using namespace std;

class Car {        // The class
  public:          // Access specifier
    string brand;  // Attribute
    string model;  // Attribute
    string year;      // Attribute
    Car(string x, string y, string z) { // Constructor with parameters
      brand = x;
      model = y;
      year = z;
    };
    Car(string x, string y) { // Constructor with parameters
      brand = x;
      model = y;
      year = "unknow";
    };
    Car(string y) { // Constructor with parameters
      brand = "?";
      model = y;
      year = "unknow";
    };
};

int main() {
  // Create Car objects and call the constructor with different values
  Car carObj1("BMW", "X5", "1999");
  Car carObj2("Ford", "Mustang", "1969");
  Car carObj3("volvo", "?");
  Car carObj4("R7");

  // Print values
  cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
  cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
  cout << carObj3.brand << " " << carObj3.model << " " << carObj3.year << "\n";
  cout << carObj4.brand << " " << carObj4.model << " " << carObj4.year << "\n";
  return 0;
}