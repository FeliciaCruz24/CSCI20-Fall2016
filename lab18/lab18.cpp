/*
Felicia Cruz 
November 5th, 2016
This program takes the user's name and outputs three different user names for them to use.
*/
#include <iostream>
#include <string>
using namespace std;

int main(){
    string firstName;//characters in first name
    string lastName;//characters in last name
    
    
    cout<<"Enter First Name: ";
    cin>>firstName;//user first name
    
    //counts how many characters are in the first name
    firstName.length();
    firstName.size();
    if (firstName.size() >10){
        cout<<"Too many characters. Maximum is 10"<<endl;
    }
    cout<<"Enter Last Name: ";
    cin>>lastName;//user last name
    //counts how many characters are in the last name
    lastName.length();
    lastName.size();
    
    if (lastName.size() >20){
        cout<<"Toos many characters. Maximum is 20"<<endl;
    }
    //Determines if the first and last name match
    if(firstName == lastName){
        cout<<"Warning. First and last name are the same."<<endl;
    }
    
    //creates the different user names
    firstName.push_back('_');//ads underscore to the end of the first name
    cout<<"UserName Choice 1: "<<firstName<<lastName<<endl;
   
    firstName.insert(0, lastName);//puts the last name entered in front of the first name
    cout<<"UserName Choice 2: "<<firstName<<endl;
    
    firstName.insert(0 , "2016");//adds 2016 to the front of the firt and last name
    cout<<"UserName Choice 3: "<<firstName<<endl;
}