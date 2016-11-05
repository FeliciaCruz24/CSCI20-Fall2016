/*
Felicia Cruz 
November 3rd, 2016
This program takes the user's name and outputs three different user names for them to use.
*/
#include <iostream>
#include <cstring>
using namespace std;

int main(){
    const int firstName = 10;//number of characters in first name
    const int lastName = 20;//number of characters in last name
    char userFirstName[firstName];//first name array
    char userLastName[lastName];//last name array
    int i = 0;
    
    cout<<"Enter First Name: ";
    cin>>userFirstName;//user first name
    
    cout<<"Enter Last Name: ";
    cin>>userLastName;//user last name
    //checks if first and last name are the same
    if(userFirstName == userLastName){
        cout<<"Warning. First name and the last name are the same."<<endl;
    }
    if(firstName>10){//checks if first name characters are larger than 10
        cout<<"Too many characters. Max size is 10 char."<<endl;
    }
    if(lastName>20){//checks if first name characters are larger than 20
            cout<<"Too many characters. Max size is 10 char."<<endl;
    }
    

    for (i = 0; userFirstName[i] != '\0'; ++i) {
      userFirstName[i] = toupper(userFirstName[i]);//makes all letters in first name upper case
   }
   for (i = 0; userLastName[i] != '\0'; ++i) {
      userLastName[i] = toupper(userLastName[i]);//makes all letters in last name uppercase
   }
   
   cout<<"User Name Choice 1: "<<userFirstName<<userLastName<<endl;//user name 1
   
   for (i = 0; userFirstName[i] != '\0'; ++i) {
      userFirstName[i] = tolower(userFirstName[i]);//makes all letter in first name lowercase
   }
   for (i = 0; userLastName[i] != '\0'; ++i) {
      userLastName[i] = tolower(userLastName[i]);//makes all letters in last name lowercase
   }
   
   cout<<"User Name Choice 2: "<<userFirstName<<userLastName<<endl; //user name 2
   cout<<"User Name Choice 3: "<<"_"<<userFirstName<<"_"<<userLastName<<"_"<<endl;//user name 3, same as #2 but with underscores
   
}
