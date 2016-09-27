#include<iostream>
#include "lab9.cpp"
using namespace std;

//the class and all the functions
class TemperatureConverter{
    public:
        void SetTempFromCelcius();
        void SetTempFromFahrenheit();
        void GetTempAsCelcius();
        void GetTempAsFahrenheit();
        void PrintTemps();
        TemperatureConverter(int kelvin_);
    private:
        void SetTempFromKelvin();
        void GetTempFromKelvin();
    
};
// need to fix SetTempFromKelvin and GetTempFrom Kelvin

TemperatureConverter::TemperatureConverter() {  // Default constructor
   kelvin_=0;        // Default price
   return kelvin_;

// the functions and all of their operations for the conversions
void TemperatureConverter::SetTempFromCelcius(int setTempCelcius){
    return setTempCelcius +273.15;

}
void TemperatureConverter::SetTempFromFahrenheit(int setTempFahrenheit){
    return (5*(setTempFahrenheit-32)/9);
}
void TemperatureConverter::GetTempAsCelcius(int getTempCelcius){
    return getTempCelcius -273.15;
}
void TemperatureConverter::GetTempAsFahrenheit(int getTempFahrenheit){
    return ((getTempFahrenheit*9)/5 + 32);
}
void TemperatureConverter::PrintTemps(){
    
}
int main ()
{
    TemperatureConverter temp1; //testing default constructor
    TemperatureConverter temp2(274); //testing overloaded constructor
    
    temp1.PrintTemps();
    temp2.PrintTemps();
    
    temp1.SetTempFromKelvin(400.15); //testing mutator function
    cout<<temp1.GetTempFromKelvin()<<endl;//testing accessor function
    temp1.PrintTemps();
    
    temp2.SetTempFromCelcius(32); //testing other functions
    cout<<temp2.GetTempAsCelcius()<<endl;
    temp2.PrintTemps();
    
    temp2.SetTempFromFahrenheit(32);
    cout<<temp2.GetTempAsFahrenheit()<<endl;
    temp2.PrintTemps();
    
    return 0;
}