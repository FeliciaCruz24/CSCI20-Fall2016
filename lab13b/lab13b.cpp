/*Felicia Cruz
October 17th 2016
This program is going to print every minute between 1:00 pm and 2:59 pm and accept user input of 2 different times and print every 15 minute interverals.
*/

#include<iostream>
#include<string>
using namespace std;

int main(){
    //1st hour
    float time0Minutes = 0;//0 min
    float time59Minutes = 0;//59 min
    //2nd hour
    int time_0_Minutes =0;//0 min
    int time_59_Minutes =0;//59 min
    char oneHour ='1';
    char twoHour ='2';
    char timeGap =':';
    int startHour = 0;//The start time the user inputs
    int endHour = 0;//The end time the user inputs
    int startMinutes =0;
    int endMinutes =0;
    
   
    time59Minutes = 60;
    time_59_Minutes =60;
    
    for(time0Minutes= 0; time0Minutes<time59Minutes;time0Minutes++){//The time from 1:00-1:59pm
        if(time0Minutes<10){
                cout<<oneHour<<timeGap<<"0"<<time0Minutes<<"pm"<<endl;
            }
            else{
                cout<<oneHour<<timeGap<<time0Minutes<<"pm"<<endl;
            }
        }
     for(time_0_Minutes=0; time_0_Minutes<time_59_Minutes; time_0_Minutes++){//The time from 2:00 -2:59pm
        if(time_0_Minutes<10){
                cout<<twoHour<<timeGap<<"0"<<time_0_Minutes<<"pm"<<endl;
            }
            else{
                cout<<twoHour<<timeGap<<time_0_Minutes<<"pm"<<endl;
            }
     }
    cout<<"Enter a start hour: ";//the user enters the start hour
    cin>>startHour>>timeGap>>startMinutes;
    cout<<"Enter end hour: ";//the user enters the end hour
    cin>>endHour>>timeGap>>endMinutes;
    cout<<"FIX THIS LOOP";
    /*
     for(startMinutes; startMinutes<60; startMinutes + 15){//this displays the time every fifteen minutes
        cout<<startMinutes<<"pm"<<endl;
         if(startMinutes >=60){
            startMinutes = endMinutes;
         }
    }
    */
}