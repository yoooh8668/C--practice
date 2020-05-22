#include <iostream>

//Remember add this line when using string
#include <string>


using namespace std;

int main() {
    string greeting = "Hello";
    cout << greeting << endl;

    string firstName = "John";
    string lastName = "Doe";
    string fullName1 = firstName + " " + lastName;
    cout << fullName1 << endl;
    
    //String.append(<the-String-you-want-to-add>)
    string fullName2 = firstName.append(lastName);
    cout << fullName2 << endl;
    
    //Object.length() get the lehgth of string/array
    cout << "Length = " << fullName2.length() << endl;
    
    /*
    cin considers a space 
    (whitespace, tabs, etc) as a terminating character,
    which means that it can only display a single word 
    (even if you type many words)
    */
    /*
    string fullName3;
    cout << "Type your full name: ";
    cin >> fullName3;
    cout << "Your name is: " << fullName3 << endl;
    */
    // Type your full name: Joe Zhang
    // Your name is: Joe
    
    
    string fullName4;
    cout << "Type your full name: ";
    /*
    we often use the getline() function to read a line of text. 
    It takes cin as the first parameter, and the string variable as second:
    */
    getline (cin, fullName4);
    cout << "Your name is: " << fullName4 << endl;

    
    return 0;
}
