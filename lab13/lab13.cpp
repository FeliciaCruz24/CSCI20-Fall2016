/*Felicia Cruz
October 11th 2016
This program is going to print every minute between 1:00 pm and 2:59 pm and accept user input of 2 different times and print every 15 minute interverals.
*/

#include<iostream>
#include<string>
using namespace std;

int main(){
    //1st hour
    int time0Minutes = 0;//0 min
    int time59Minutes = 0;//59 min
    //2nd hour
    int time_0_Minutes =0;//0 min
    int time_59_Minutes =0;//59 min
    
    int startHour = 0;//The start time the user inputs
    int endHour = 0;//The end time the user inputs
    
    time0Minutes = 100;
    time59Minutes = 159;
    time_0_Minutes =200;
    time_59_Minutes =259;
    
    while(time0Minutes<time59Minutes){//The time from 1:00-1:59pm
        time0Minutes++;
        cout<<time0Minutes<<"pm"<<endl;
    }
    while(time_0_Minutes<time_59_Minutes){//The time from 2:00 -2:59pm
        time_0_Minutes++;
        cout<<time_0_Minutes<<"pm"<<endl;
    }
    cout<<" "<<endl;
    cout<<"Enter a start hour: ";//the user enters the start hour
    cin>>startHour;
    cout<<"Enter end hour: ";//the user enters the end hour
    cin>>endHour;
    
    while(startHour <= endHour){//this displays the time every fifteen minutes
        startHour= startHour + 15;
        cout<<startHour<<"pm"<<endl;
    }
}