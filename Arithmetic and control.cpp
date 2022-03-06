#include <iostream> // give access to cin,cout and endl
using namespace std;
// finction main beigns program execution
int main(){
    

    int number1{0};
    int number2{0};
    
    cout << "Enter two integers to compare: "; // prompt user for data
    cin >> number1 >> number2; // read two integers from user
    
    if (number1 == number2 ){
        cout << number1 << " == " << number2 << endl;
    }
    
    if (number1 != number2){
        cout << number1 << " !== " << number2 <<endl;
    }
    
    if (number1 < number2){
        cout << number1 << " < " << number2 <<endl;
    }
    
    if (number1 <= number2) {
        cout <<  number1 << " <= " <<number2 <<endl;
    }
    
    if (number1 >= number2){
        cout << number1 << " >= " << number2 << endl;
    }

}

