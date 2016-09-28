/*
Felicia Cruz
September 27th 2016
This program is a temperatre converter between kelvins, celcius, fahranheit.
*/

#include<iostream>
#include<string>
using namespace std;

//the class and all the functions
class TemperatureConverter{
    public:
        void SetTempFromCelcius(float setTempCelcius); //setter
        float GetTempAsCelcius() const;//getter
        void SetTempFromFahrenheit(float setTempFahrenheit);//setter
        float GetTempAsFahrenheit() const;//getter
        void SetTempFromKelvin(float kelvinValue);//setter
        float GetTempFromKelvin() const;//getter
        void PrintTemps(string value);//display temperatures
        TemperatureConverter();//default constructor
        TemperatureConverter(float kelvin_);//overloaded constructor
    private:
        float kelvin_;//important variable
};

TemperatureConverter::TemperatureConverter() {  // Default constructor
   kelvin_= 0.0;        // Default
   return;
}

TemperatureConverter::TemperatureConverter(float reskelvin_){ //overload constructor
    kelvin_=reskelvin_;
}

//accepts a kelvin value an stores it
void TemperatureConverter:: SetTempFromKelvin(float kelvinValue){
    kelvin_=kelvinValue;
}

//returns the kelvin value
float TemperatureConverter::GetTempFromKelvin() const{
    return kelvin_;
}

// the functions and all of their operations for the conversions

void TemperatureConverter::SetTempFromCelcius(float setTempCelcius){//celcius to kelvins
    kelvin_= setTempCelcius +273.15;
}

float TemperatureConverter::GetTempAsCelcius() const{ //kelvins to celcius
    return kelvin_-273.15;
}

void TemperatureConverter::SetTempFromFahrenheit(float setTempFahrenheit){ //fahranheit to kelvins
    kelvin_= (5*(setTempFahrenheit-32)/9) + 273.15;
}
float TemperatureConverter::GetTempAsFahrenheit() const{ //kelvins to fahranheit
    return ((kelvin_*9)/5 + 32);
}

void TemperatureConverter::PrintTemps(string value){ //display the temperatures
    cout<<kelvin_<<value;
}


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
