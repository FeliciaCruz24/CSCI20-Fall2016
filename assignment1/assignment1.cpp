/*Felicia Cruz
September 8th, 2016
This program will be able to calculate a person's weekly wages based on the amount of hours they work and how much they get paid per hour. It will determine
how much money they get paid after they pay 17% in taxes. Afterwards there will be a wage slip that shows the person's name, hours, rate, gross pay, and net pay.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    float rate = 0.0;// money made per hour
    int hours = 0;// hours worked per week
    float grossPay = 0.0; //payment before taxes
    float netPay = 0; //payment after taxes
    string firstName;
    string lastName;
    float wageTax = 0.0; // will determine the net pay
    
    //Instructions for the user
    cout<<"Fill out the categories below then press ENTER and you will recieve your wage slip."<<endl;
    
    //All of the information the user will have to fill out to determine their gross pay and net pay.
    cout<<"Your Name (First and Last): ";
    cin>> firstName>>lastName; 
    cout<<endl;
    cout<<"The number of hours you work per week: ";
    cin>> hours;
    cout<<endl;
    cout<< "Your hourly wage: $";
    cin>>rate;
    cout<< endl;
    cout<<" "<<endl;
    
    // The Wage Slip
    cout<< "WAGE SLIP"<<endl;
    cout<<"Name: " <<firstName<< " "<<lastName<<endl; 
    cout<< "Hours: "<<hours<<endl;
    cout<< "Rate: $"<<rate<<endl;
    
    grossPay= (hours*rate); //determines gross pay
    cout<< "Gross Pay: $"<< grossPay<<endl;    
    wageTax = grossPay - grossPay*.17; //This equation will determine the amount of money after taxes.
    cout<<"Net Pay : $"<< wageTax<< endl;
}