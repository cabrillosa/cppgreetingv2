/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    /* Write a c++ program that accepts a firstname and a lastname
        then outputs the Fullname
    */
    //inputs
    //declare inputs
    string firstname;
    string lastname;
    //string fullname;

    cout << "Enter firstname: ";
    getline(cin,firstname);
    //cin >> firstname;
    cout << "Enter lastname: ";
    getline(cin, lastname);
    //cin >> lastname;

    //process
    //fullname = firstname +" "+lastname;

    //output
    cout << "Your fullname is : " << firstname << " " << lastname;
}
