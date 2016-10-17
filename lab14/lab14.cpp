/*Felicia Cruz
October 17th 2016
This program reads in a letter and reports whether it is an 
uppercase letter, a lowercase letter, or neither.
*/

#include <iostream>
using namespace std;
int main() {
// Read a character in
char ch;
cout << "Please enter a character: ";
cin >> ch;
    
// check -- is it a letter??
if ((ch >= 'A')&&(ch <= 'Z')) {//upper case
    cout << "Yes, that is a uppercase letter." << endl;
}
else if ((ch >= 'a')&&(ch <= 'z')) {//lower case
    cout << "Yes, that is a lowercase letter" << endl;
}
else {//not letter
 cout << "Not a letter" << endl;
}
return 0;
}