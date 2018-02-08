// replace my_object and My_object with the actual object name

// an object's .cpp file always includes that objects .h file
// never include a .cpp file!
#include <iostream>
using namespace std;

#include "Course.h" 
#include <string>
#include <iostream>

// example of how functions are specified
Course::Course(string dept, int number, int time);
void Course::print()
{
    // the code for the print function goes here

    cout << dept << " " << number << " at " << time << endl;


}

