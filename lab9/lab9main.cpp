#include<iostream>
#include "lab9.cpp"
using namespace std;

int main ()
{
    cout<< "TEMPERATURE CONVERTER: KELVINS, CELCIUS, FAHRANHEIT"<<endl;
    TemperatureConverter temp1; //testing default constructor
    TemperatureConverter temp2(274); //testing overloaded constructor
    cout<<" "<<endl;
    
    temp1.PrintTemps(" Kelvins (Testing default constructor)"); //display the default amount
    cout<<endl;
    temp2.PrintTemps(" Kelvins (Testing overloaded constructor)"); // display overload amount
    cout<<endl;
    
    temp1.SetTempFromKelvin(400.15); //testing mutator function
    cout<<temp1.GetTempFromKelvin()<<" Kelvins = ";//testing accessor function
    temp1.PrintTemps(" Kelvins");
    cout<<endl;
    
    temp2.SetTempFromCelcius(32); //testing other functions
    cout<<temp2.GetTempAsCelcius()<<" Degrees Celcius = "; //display temperature
    temp2.PrintTemps(" Kelvins");//display amount in kelvins 
    cout<<endl;
    
    temp2.SetTempFromFahrenheit(32);
    cout<<temp2.GetTempAsFahrenheit()<<" Degrees Fahranheit = "; // display temperature
    temp2.PrintTemps(" Kelvins");//display amount in kelvins
    cout<<endl;
    
    return 0;
}