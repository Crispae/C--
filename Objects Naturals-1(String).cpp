#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1{"happy"}; // constructor call : intilaze the object from class
    string s2{"birthday"};
    string s3; // creates an empty string

    //Display the strings and show their lengths 
    cout << " s1: " << s1 << " length " << s1.length() << endl; // size can also be ued
    cout << " s2: " << s2 << " length " << s2.length() << endl;
    cout << " s3: " << s3 << " length " << s3.length() << endl;

    // compare the string with == and !=  here boolaplha is a stream manipulator
    cout << "\n\n The result of comparing s2 and s1:" << boolalpha << "\n s2==s1: " << (s2 == s1)
    << "\n s2 != s1: " << (s2 != s1) << endl;

    // test string member function empty
    cout << " \"s3\" is empty:" << s3.empty() <<endl; 
    cout << "\n assigning to s3"<<endl;
    string s5{" "};
    s3 = s1 + s5  + s2;
    cout << "\"s3\": " << s3 <<endl;

    // testing new c++20 string functions
    cout << "\n\n s1 starts with \"ha\": " << s1.starts_with("ha") << endl;
    cout << " s2 starts with \"ha\": " << s2.starts_with("ha") <<endl;
    cout << " s1 ends with \"ay\": " << s1.ends_with("ay") <<endl;
    cout << " s2 ends with \"ay\": " << s2.ends_with("ay") <<endl;

    int s4{5};

    cout << typeid(s3).name() <<endl;
    cout << typeid(s4).name() <<endl;

    return 0;


}
