/*Felicia Cruz
September 21st 2016
This program will be able to convert kilograms to pounds and pounds to kilograms
*/
 
#include<iostream>
using namespace std;

//Will convert pounds to kilograms
float ToKilo(int numPoundsToKilos){ //The amount of pounds being converted to kilos 
    return numPoundsToKilos *0.45359;
    
}

//Converting kilograms to pounds
float ToPounds(float numKilosToPounds){ //The amount of kilos being converted to pounds
    return numKilosToPounds/0.45359;
    
}

int main (){
    float totalNumPounds=0.0; //amount of pounds user enters
    float totalNumKilos=0.0; //amount of kilos user enters
    
    cout<< "Enter the amount of pounds or kilograms you wish to convert then press ENTER.";//directions
    cout<<" "<<endl;
    
    cout<<"CONVERT POUNDS TO KILOGRAMS:"<<endl;
    cout<<"Pounds: ";
    cin>>totalNumKilos; //user input kilos
    
    cout<<"Kilos: ";
    cout<<ToKilo(totalNumKilos)<<endl; //user input is called in ToKilos
    
    cout<<" "<<endl;
    
    cout<<"COVERT KILOGRAMS TO POUNDS:"<<endl;
    cout<<"Kilograms: ";
    cin>>totalNumPounds; //user input pounds
    
    cout<<"Pounds: ";
    cout<<ToPounds(totalNumPounds)<<endl; //user input is called in ToPounds
   
    
    
}