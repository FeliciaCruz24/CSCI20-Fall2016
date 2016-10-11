/*Felicia Cruz
October 12, 2016
This is a program that will ouput a series of questions and is a getting to know you flow chart
*/

#include<iostream>
#include<string>
using namespace std;
int main(){
    string answer;//answer user input, yes or no
    cout<<"What sport do you like to play?"<<endl;//name of the flow chart
    cout<<" "<<endl;
    cout<<"Do you like to run? ";//first question
    cin>>answer;
    //if answer yes to the first question it goes to these questions
    if (answer =="yes" || answer=="Yes"){
        cout<<"Do you like the outdoors? ";
        cin>>answer;
        if(answer=="yes" || answer=="Yes"){//if the answer was yes this is the question, it asks this one
            cout<<"Do you like physical sports? ";
            cin>>answer;
            
            if(answer=="yes" || answer=="Yes"){// if the answer was yes the user likes this sport
            cout<<"You like soccer!"<<endl;
            }
            else{
            cout<<"You like track!"<<endl;//if the answer was no the user likes this sport
            }
        }
        else if(answer=="no" || answer=="No"){//if the answer was no to the question it asks this question
            cout<<"Do you like physical sports? ";
            cin>>answer;
            if(answer=="yes" || answer=="Yes"){//if answer yes user likes this sport
                cout<<"You like baskettball!"<<endl;
            }
            else{
                cout<<"You like volleyball!"<<endl;//if answer no the user likes this sport
            }
        }
    }
    
    else if (answer =="no" || answer=="No"){//if answer was no to the first question it asks the user these questions.
        cout<<"Do you like the outdoors? ";
        cin>>answer;
        if (answer=="yes" || answer=="Yes"){//if answer yes the user likes this sport
            cout<<"You like tennis!"<<endl;
        }
        else{
            cout<<"You like table tennis!"<<endl;// if answer no user likes this sport
        }
    }
}