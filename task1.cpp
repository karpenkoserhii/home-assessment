/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream> // для використання потокового вводу/виводу cin/cout

using namespace std; // щоб не писати std::cout, а просто std

// 1.1 Variables initialization
//      Create a variable named "data", and assign to it the value 255 (you must choose the right data type).
int data = 255;
//      Create a variable named "payload", and assign to it the value 6.153 (you must choose the right data type).
float payload = 6.153;
//      Create a variable named "flag", and assign to it the value "true" (you must choose the right data type).
bool flag = true;
//      Create a variable named "ch", and assign to it the value '#' (you must choose the right data type).
char ch = '#';
// Note: you also need to use endl: try to type in main following code and run it:
//      cout << "Something 1" << endl;
//      cout << "Something 2" << endl;
//      cout << "Something 3" << endl;
// You will see:
//  Something 1
//  Something 2
//  Something 1
// endl makes new line (отступает на след строку).

int main()
{
    // 1.2 Print all variables in next format (help: use spaces):data value is : 255
    //      payload value is : 6.153
    cout << "payload value is : " << payload << endl;
    //      flag value is : true
    cout << "flag value is : " << flag << endl;
    //      ch value is : #
    cout << "ch value is : " << ch << endl;
    
    
    // 2. Variable's acrobatics
    //      Create integer variable assigning to it any value, then — change it value to 10.
    //      Operating with the previous variable — add 100 to its value and print it.
    //      Operating with the previous variable — subtract 20 from its value and print it.
    //      Operating with the previous variable — multiply by 3 the current value and print it.
    //      Operating with the previous variable — divide by 2 the current value and print it.
    int integer = 5;
    integer = 10;
    integer +=100;
    cout << "integer value is : " << integer << endl;
    integer -=20;
    cout << "integer value is : " << integer << endl;
    integer *=3;
    cout << "integer value is : " << integer << endl;
    integer /=2;
    cout << "integer value is : " << integer << endl;

    
    // 3. Someone wrote a program with errors. 
    // Uncomment below code and find these errors and tell why did they arise
    
    float g = 0; // there is no errors
    float h = 1; // double ";;"
    float q = 1.5426; //Use float and dot insted of ","
    
    
    // 4. Someone wrote a program with errors. 
    // Uncomment below code and find these errors and tell why did they arise
    
    int value = 3;
    value = value + 1;
    cout << value << endl; //"value" should start from small letter "v"
    
    
    // 5. Someone wrote a program with errors. 
    // Uncomment below code and find these errors and tell why did they arise
    
    int userID = 18; //Here is the math using using the steps above showing you how to convert 0X12 to decimal. 2 x 1 = 2 1 x 16 = 16 2 + 16 = 18 That is all there is to it. Here is the answer to 0X12 in decimal: 18
    userID += 5;
    cout << userID << endl;

  //Or we can use int userID1 = 0*12;
  int userID1 = 0*12;
  userID1 += 5;
    cout << userID1 << endl;
    
    
    return 0;
}
