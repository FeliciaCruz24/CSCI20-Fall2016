/*Felicia Cruz
8/31/2016
This is a mad libs about a summer vacation
*/

#include <iostream>
#include <string> 
using namespace std;

int main () {
    string place;
    string adjective1;
    string pluralNoun1;
    string pluralNoun2;
    string pluralNoun3;
    string pluralNoun4;
    float decimalNum = 0;
    string verb1;
    string verb2;
    int numNoun = 0;
    string adjective2;
    char endSent = '.';
    
    cout<< "MAD LIBS: SUMMER VACATION"<< endl;
    cout<< "Type in the categories below with no spaces and they will be used to fill in the blanks in the story."<< endl;

    // all of the categories that the user has to answer. Their answers should show up in the mad lib.
    cout<<""<<endl;
    cout<< "Place: ";
    cin>> place;
    cout<< endl;
    cout<< "Ajective 1: ";
    cin>> adjective1;
    cout<< endl;
    cout<< "Adjective 2: ";
    cin>> adjective2;
    cout<< endl;
    cout<< "Plural Noun 1: ";
    cin>> pluralNoun1;
    cout<<endl;
    cout<< "Plural Noun 2: ";
    cin>> pluralNoun2;
    cout<< endl;
    cout<<"Plural Noun 3: ";
    cin>> pluralNoun3;
    cout<<endl;
    cout<< "Plural Noun 4: ";
    cin>> pluralNoun4;
    cout<<endl;
    cout<< "Decimal Number: ";
    cin>> decimalNum;
    cout<< endl;
    cout<< "Action Verb 1: ";
    cin>> verb1;
    cout<< endl;
    cout<< "Action Verb 2: ";
    cin>> verb2;
    cout<< endl;
    cout<< "Whole Number: ";
    cin>> numNoun;
    cout<< endl;
   
    
    
    // The mad lib that has all of the spaces filled in with the user's answers.
    cout<< "SUMMER VACATION"<< endl;
    cout<<"Last summer I went on a vacation with my family to "<< place<< endSent <<" It is very "<< adjective1<<" there."<<endl;
    cout<<"There was a lot of "<<pluralNoun1<< " and they made great "<<pluralNoun2<< endSent << " My favorite food to eat was"<<endl;
    cout<<decimalNum<<" "<<pluralNoun3<<" and I had a lot of fun "<<verb1<< " with my family."<< " We also liked "<< verb2<< " and saw"<<endl;
    cout<< numNoun<< " "<< pluralNoun4<< endSent << " It was a really "<< adjective2<< " vacation!"<<endl;
    
    
    
    
    
    
    
    
    
    
}

