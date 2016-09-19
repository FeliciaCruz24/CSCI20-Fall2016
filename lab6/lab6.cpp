/*Felicia Cruz
Sptember 19th, 2016
This program is going to have my copyright right function at the end of it. The program I chose to add to is where the user 
will input the amount of money they have and the computer will tell them how many quarters, nickels, dimes, and pennies they have.
It will also tell them the amount of money they have after the machine takes out its 10.9 percent of the money.
*/

#include <iostream>
#include <string>
using namespace std;

void CopyRight (){
    
    cout<< "FFFFF"<<"   "<< "CCCCC"<<endl;
    cout<< "F"<< "     "<< "  C  "<<endl;
    cout<<"FFFFF"<< "   "<< "C  "<<"   Copyright Felicia Cruz 2016"<<endl;
    cout<<"F"<< "     "<< "  C  "<<endl;
    cout<<"F"<< "   "<< " O"<<"  CCCCC"<< endl;
    return;
}

int main () {
    int originalAmount = 0; // amount entered by user
    
    //quarter variable
    int numQuarters = 0;
   
    //dime variable
    int numDimes = 0;

    //Nickel variable
    int numNickels = 0;
    
    // Penny variable
    int numPennies = 0;
    
   // Where the user inputs the amount of change they have
   
    cout<< "Enter amount of cents here and then press ENTER: ";
    cin>> originalAmount;
    cout<< endl;
    
    cout<<"You have entered "<< originalAmount<< " cents."<< endl;//Tells the user how much money they entered.
    cout << " "<< endl;
    
    int changeFee =  originalAmount - originalAmount/10.9;//takes the percentage off the original amount of change.
    
    cout<<"Your total amount is $"<< originalAmount*.01 << "."<< " After the fee you get $"<< changeFee*.01 << " in cash."<<endl;
    cout<<" "<<endl; //Tells the user the amount of money they have and the money they will get after the 10.9 % fee is taken off.
    
    //Determines the amount of quarters the user has.
    numQuarters = originalAmount/25;
    originalAmount = originalAmount %25;
    
    //Determines the amount of dimes the user has.
    numDimes = originalAmount/10;
    originalAmount = originalAmount % 10;
    
    //Determines the amount of nickels the user has
    numNickels = originalAmount/5;
    numPennies = originalAmount % 5; // Determines amount of pennies the user has.
    
    //Tells user how many quarters, dimes, nickels, and pennies they have.
    cout<< "You have "<< numQuarters<< " quarters, "<< numDimes<<" dimes, "<< numNickels<<" nickels, and "<< numPennies<< " pennies."<< endl; 
    cout<<" "<<endl; 
    CopyRight();
}