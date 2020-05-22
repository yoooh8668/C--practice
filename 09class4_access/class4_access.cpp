#include <iostream>
#include <string>
using namespace std;

class MyClass {
  public:    // Public access specifier

    /*
    C++ can't set initial value in Class.
    int x = 1;
    */
    
    int x;   // Public attribute

    
    int a;
    void myClassHelloPublic(){
        cout << "HelloPub~~~~~" << endl;
    }
    void myClassPrint(){
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
    void setPrivate(){
        y=2;
        b=4;
    }
    MyClass();
  private:   // Private access specifier
    int y;   // Private attribute
    int b;
    void myClassHelloPrivate(){
        cout << "HelloPir~~~~~" << endl;
    }
};

  MyClass::MyClass(){
    int x = 1;
    //private variable can't set value when instance.
    //int y = 2;
    int a = 3;
    //int b = 4;
    
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
  }

int main() {
  MyClass myObj;
  myObj.x = 5;  // Allowed (public)
  //myObj.y = 5;  // Not allowed (private)
  myObj.a = 5;  // Allowed (public)
  //myObj.b = 5;  // Not allowed (private)
  myObj.myClassHelloPublic();
  //myObj.myClassHelloPrivate();
  myObj.setPrivate();
  myObj.myClassPrint();
  return 0;
}