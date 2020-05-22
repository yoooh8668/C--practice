#include <iostream>
#include <string>
using namespace std;

int main() {
    int int_1 = 65;
    int int_1_ref = int_1;
    int* int_1_ptr = &int_1;
    int** int_1_ptr_ptr = &int_1_ptr;
    int* int_1_ref_ptr = &int_1_ref;
    int int_1_ref_ref = int_1_ref;
    int* int_1_ptr_ref = int_1_ptr;

    cout << "int_1            = " << int_1 <<endl;
    //cout << "*int_1         = " << *int_1 <<endl;
    cout << "&int_1           = " << &int_1 <<endl << endl;
    

    cout << "int_1_ptr        = " << int_1_ptr <<endl;
    cout << "*int_1_ptr       = " << *int_1_ptr <<endl;
    cout << "&int_1_ptr       = " << &int_1_ptr <<endl << endl;
    cout << "int_1            = " << int_1 <<endl;
    //cout << "*int_1         = " << *int_1 <<endl;
    cout << "&int_1           = " << &int_1 <<endl << endl;

    cout << "int_1_ref        = " << int_1_ref <<endl;
    //cout << "*int_1_ref     = " << *int_1_ref <<endl;
    cout << "&int_1_ref       = " << &int_1_ref <<endl << endl;

cout << "int_1_ptr_ptr    = " << int_1_ptr_ptr <<endl;
cout << "*int_1_ptr_ptr   = " << *int_1_ptr_ptr <<endl;
cout << "&int_1_ptr_ptr   = " << &int_1_ptr_ptr <<endl;
cout << "**int_1_ptr_ptr  = " << **int_1_ptr_ptr <<endl;
cout << "*&int_1_ptr_ptr  = " << *&int_1_ptr_ptr <<endl;
cout << "&*int_1_ptr_ptr  = " << &*int_1_ptr_ptr <<endl <<endl;
//cout << "&&int_1_ptr_ptr = " << &&int_1_ptr_ptr <<endl << endl;

    cout << "int_1_ref_ptr    = " << int_1_ref_ptr <<endl;
    cout << "*int_1_ref_ptr   = " << *int_1_ref_ptr <<endl;
    cout << "&int_1_ref_ptr   = " << &int_1_ref_ptr <<endl;
    //cout << "**int_1_ref_ptr  = " << **int_1_ref_ptr <<endl;
    cout << "*&int_1_ref_ptr  = " << *&int_1_ref_ptr <<endl;
    cout << "&*int_1_ref_ptr  = " << &*int_1_ref_ptr <<endl << endl;
    //cout << "&&int_1_ref_ptr = " << &&int_1_ref_ptr <<endl << endl;
    
    cout << "int_1_ref_ref    = " << int_1_ref_ref <<endl;
    //cout << "*int_1_ref_ref   = " << *int_1_ref_ref <<endl;
    cout << "&int_1_ref_ref   = " << &int_1_ref_ref <<endl;
    //cout << "**int_1_ref_ref  = " << **int_1_ref_ref <<endl;
    cout << "*&int_1_ref_ref  = " << *&int_1_ref_ref <<endl << endl;
    //cout << "&*int_1_ref_ref  = " << &*int_1_ref_ref <<endl;
    //cout << "&&int_1_ref_ref = " << &&int_1_ref_ref <<endl << endl;
    
    cout << "int_1_ptr_ref    = " << int_1_ptr_ref <<endl;
    cout << "*int_1_ptr_ref   = " << *int_1_ptr_ref <<endl;
    cout << "&int_1_ptr_ref   = " << &int_1_ptr_ref <<endl;
    //cout << "**int_1_ptr_ref  = " << **int_1_ptr_ref <<endl;
    cout << "*&int_1_ptr_ref  = " << *&int_1_ptr_ref <<endl;
    cout << "&*int_1_ptr_ref  = " << &*int_1_ptr_ref <<endl <<endl;
    //cout << "&&int_1_ptr_ref = " << &&int_1_ptr_ref <<endl << endl;
    
    return 0;
}

