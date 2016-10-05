/*
Felicia Cruz
September 30th 2016
This program coverts a persons weight on earth to what they would weigh on all of the other planets.
*/

#include<iostream>
#include<string>
using namespace std;

//the class and all the functions for converting weight
class ConvertWeightOnPlanets{
    public:
        //calulates earth weight and gets the normal weight 
        void SetWeightOnEarth(float earthWeight); 
        float GetWeightOnEarth()const;
        
        //calculates moon weight and gets normal weight
        void SetWeightOnMoon(float moonWeight);
        float GetWeightOnMoon()const;
        
        //calculates mars weight and gets normal weight
        void SetWeightOnMars(float marsWeight);
        float GetWeightOnMars()const;
        
        //calculates jupiter weight and gets normal weight
        void SetWeightOnJupiter(float jupiterWeight);
        float GetWeightOnJupiter()const;
        
        //calculates mercury weight and gets normal weight
        void SetWeightOnMercury(float mercuryWeight);
        float GetWeightOnMercury()const;
        
        //calculates venus weight an gets normal weight
        void SetWeightOnVenus(float venusWeight);
        float GetWeightOnVenus()const;
        
        //calculates uranus weight and gets normal weight
        void SetWeightOnUranus(float uranusWeight);
        float GetWeightOnUranus()const;
        
        //calculates saturn weight and gets normal weight
        void SetWeightOnSaturn(float saturnWeight);
        float GetWeightOnSaturn()const;
        
        //calculates neptune weight and gets normal weight
        void SetWeightOnNeptune(float neptuneWeight);
        float GetWeightOnNeptune()const;
        
        //calculates pluto weight and gets normal weight
        void SetWeightOnPluto(float plutoWeight);
        float GetWeightOnPluto()const;
        
        ConvertWeightOnPlanets();// default constructor 
        ConvertWeightOnPlanets(float weight_);//overload constructor
        
        void PrintAllWeights(string value);//prints all of the weights calculated on the planets
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

void ConvertWeightOnPlanets::SetWeightOnMercury(float mercuryWeight){//calculate mercury weight
    weight_=mercuryWeight*0.38;
}

float ConvertWeightOnPlanets::GetWeightOnMercury()const{//goes back to normal weight
    return weight_/0.38;
}

void ConvertWeightOnPlanets::SetWeightOnVenus(float venusWeight){//calculates venus weight
    weight_=venusWeight*0.91;
}

float ConvertWeightOnPlanets::GetWeightOnVenus()const{//goes back to normal weight
    return weight_/0.91;
    
}

void ConvertWeightOnPlanets::SetWeightOnUranus(float uranusWeight){//calculate uranus weight
    weight_=uranusWeight*0.89;
}

float ConvertWeightOnPlanets::GetWeightOnUranus()const{//return back to normal weight
    return weight_/0.89;
}

void ConvertWeightOnPlanets::SetWeightOnSaturn(float saturnWeight){//calculate saturn weight
    weight_=saturnWeight*1.06;
}

float ConvertWeightOnPlanets::GetWeightOnSaturn()const{//goes back to normal weight
    return weight_/1.06;
}

void ConvertWeightOnPlanets::SetWeightOnNeptune(float neptuneWeight){//calculate neptune weight
    weight_=neptuneWeight*1.12;
}

float ConvertWeightOnPlanets::GetWeightOnNeptune()const{//goes back to normal weight
    return weight_/1.12;
}

void ConvertWeightOnPlanets::SetWeightOnPluto(float plutoWeight){//calculate pluto weight
    weight_=plutoWeight*0.07;
}

float ConvertWeightOnPlanets::GetWeightOnPluto()const{//goes back to normal weight
    return weight_/0.07;
}

void ConvertWeightOnPlanets::PrintAllWeights(string value){ //display all the weights calculated on the planets
    cout<<weight_<<value;
}

int main ()
{
    float earthWeight;//The weight the user pluggged in and it will used when all of the functions are called as an argument to calculate the weight on the planets
    
    //Title and instructions for the program
    cout<< "Converting Weight On All Planets: Earth, Moon, Mars, Jupiter, Mercury, Venus, Uranus, Saturn,Neptune, and Pluto"<<endl;
    cout<<"Enter your weight below and the computer will tell you your weight on all of the planets"<<endl;
    cout<<" "<<endl;
    
    ConvertWeightOnPlanets weight; //default constructor
    ConvertWeightOnPlanets convertedWeight; //overloaded constructor
    
    //User inputs their weight
    cout<<"Weight:";
    cin>>earthWeight;
    cout<<" "<<endl;
    
    weight.SetWeightOnEarth(earthWeight); //calculate weight on earth
    cout<<weight.GetWeightOnEarth()<<" Pounds = ";//displaying earth weight
    weight.PrintAllWeights(" Pounds on Earth");//displaying weight calculated
    cout<<endl;
    
    cout<<" "<<endl;
    
    convertedWeight.SetWeightOnMoon(earthWeight);//calculating moon weight
    cout<<convertedWeight.GetWeightOnMoon()<<" Pounds = "; //display normal weight
    convertedWeight.PrintAllWeights(" Pounds on the Moon");//display moon weight calculated
    cout<<endl;
    
    cout<<" "<<endl;
    
    convertedWeight.SetWeightOnMars(earthWeight);//calculate mars weight
    cout<<convertedWeight.GetWeightOnMars()<<" Pounds = "; // display normal weight
    convertedWeight.PrintAllWeights(" Pounds on Mars");//display mars weight calculated
    cout<<endl;
    
    cout<<" "<<endl;
    
    
    convertedWeight.SetWeightOnJupiter(earthWeight);//caluate jupiter weight
    cout<<convertedWeight.GetWeightOnJupiter()<<" Pounds = ";//display normal weight
    convertedWeight.PrintAllWeights(" Pounds on Jupiter");//display jupiter weight calculated
    cout<<endl;
    
    cout<<" "<<endl;
    
    convertedWeight.SetWeightOnMercury(earthWeight);//mercury weight
    cout<<convertedWeight.GetWeightOnMercury()<<" Pounds = ";//displays normal weight
    convertedWeight.PrintAllWeights(" Pounds on Mercury");//displays mercury weight calculated
    cout<<endl;
    
    cout<<" "<<endl;
    
    convertedWeight.SetWeightOnVenus(earthWeight);//calculate venus weight
    cout<<convertedWeight.GetWeightOnVenus()<<" Pounds = ";//display normal weight
    convertedWeight.PrintAllWeights(" Pounds on Venus");//display venus weight
    cout<<endl;

    cout<<" "<<endl;
    
    convertedWeight.SetWeightOnUranus(earthWeight);//calculate uranus weight
    cout<<convertedWeight.GetWeightOnUranus()<<" Pounds = ";//display normal weight
    convertedWeight.PrintAllWeights(" Pounds on Uranus");//display uranus weight
    cout<<endl;
    
    cout<<" "<<endl;
    
    convertedWeight.SetWeightOnSaturn(earthWeight);//calculate saturn weight
    cout<<convertedWeight.GetWeightOnSaturn()<<" Pounds = ";//display normal weight
    convertedWeight.PrintAllWeights(" Pounds on Saturn");//display saturn weight
    cout<<endl;
    
    cout<<" "<<endl;
    
    convertedWeight.SetWeightOnNeptune(earthWeight);//calculate neptune weight
    cout<<convertedWeight.GetWeightOnNeptune()<<" Pounds = ";//display normal weight
    convertedWeight.PrintAllWeights( " Pounds on Neptune");//display neptune weight
    cout<<endl;
   
    cout<< " "<<endl;
    
    convertedWeight.SetWeightOnPluto(earthWeight);// calculate pluto weight
    cout<<convertedWeight.GetWeightOnPluto()<<" Pounds = ";//display normal weight
    convertedWeight.PrintAllWeights(" Pounds on Pluto");//display pluto weight
    cout<<endl;
    
    return 0;
}