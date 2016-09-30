/*
Felicia Cruz
September 30th 2016
This program coverts a persons weight on earth to what they would weigh on other planets. Such as Earth, the Moon, Mars, and Jupiter.
*/

#include<iostream>
#include<string>
using namespace std;

//the class and all the functions for converting weight
class ConvertWeightOnPlanets{
    public:
        void SetWeightOnEarth(float earthWeight);
        float GetWeightOnEarth()const;
        void SetWeightOnMoon(float moonWeight);
        float GetWeightOnMoon()const;
        void SetWeightOnMars(float marsWeight);
        float GetWeightOnMars()const;
        void SetWeightOnJupiter(float jupiterWeight);
        float GetWeightOnJupiter()const;
        ConvertWeightOnPlanets();
        ConvertWeightOnPlanets(float weight_);
        void PrintAllWeights(string value);
    private:
        float weight_;//the amount of weight 
};

ConvertWeightOnPlanets::ConvertWeightOnPlanets() {  // Default constructor
   weight_= 0.0;        // Default
   return;
}

ConvertWeightOnPlanets::ConvertWeightOnPlanets(float resweight_){ //overload constructor
    weight_=resweight_;
}

//accepts the earth weight and stores it
void ConvertWeightOnPlanets::SetWeightOnEarth(float earthWeight){
    weight_=earthWeight;
}

//returns the earth weight
float ConvertWeightOnPlanets::GetWeightOnEarth() const{
    return weight_;
}

// the functions and all of their operations for the conversions

void ConvertWeightOnPlanets::SetWeightOnMoon(float moonWeight){//calculate weight on the moon
    weight_= moonWeight * 0.17;
}

float ConvertWeightOnPlanets::GetWeightOnMoon() const{ //goes back to normal weight
    return weight_ /0.17;
}

void ConvertWeightOnPlanets::SetWeightOnMars(float marsWeight){ //calculate weight on mars
    weight_=marsWeight * 0.38;
}

float ConvertWeightOnPlanets::GetWeightOnMars() const{ //goes back to normal weight
    return weight_ /0.38;
}

void ConvertWeightOnPlanets::SetWeightOnJupiter(float jupiterWeight){//calculate weight on Jupiter
    weight_=jupiterWeight * 2.34;
}

float ConvertWeightOnPlanets::GetWeightOnJupiter()const{//Goes back to normal weight
    return weight_ /2.34;
}

void ConvertWeightOnPlanets::PrintAllWeights(string value){ //display all the weights
    cout<<weight_<<value;
}

int main ()
{
    cout<< "Converting Weight On Various Planets: Earth, Moon, Mars, and Jupiter"<<endl;
    ConvertWeightOnPlanets weight; //testing default constructor
    ConvertWeightOnPlanets convertedWeight(100); //testing overloaded constructor
    cout<<" "<<endl;
    
    weight.PrintAllWeights(" Pounds (Testing default constructor)"); //display the default amount
    cout<<endl;
    convertedWeight.PrintAllWeights(" Pounds (Testing overloaded constructor)"); // display overload amount
    cout<<endl;
    
    weight.SetWeightOnEarth(100); //calculate weight on earth
    cout<<weight.GetWeightOnEarth()<<" Pounds = ";//displaying earth weight
    weight.PrintAllWeights(" Pounds on Earth");//displaying weight calculated
    cout<<endl;
    
    convertedWeight.SetWeightOnMoon(156);//calculating moon weight
    cout<<convertedWeight.GetWeightOnMoon()<<" Pounds = "; //display normal weight
    convertedWeight.PrintAllWeights(" Pounds on the Moon");//display moon weight calculated
    cout<<endl;
    
    convertedWeight.SetWeightOnMars(300);//calculate mars weight
    cout<<convertedWeight.GetWeightOnMars()<<" Pounds = "; // display normal weight
    convertedWeight.PrintAllWeights(" Pounds on Mars");//display mars weight calculated
    cout<<endl;
    
    convertedWeight.SetWeightOnJupiter(35);//caluate jupiter weight
    cout<<convertedWeight.GetWeightOnJupiter()<<" Pounds = ";//display normal weight
    convertedWeight.PrintAllWeights(" Pounds on Jupiter");//display jupiter weight calculated
    cout<<endl;
    return 0;
}