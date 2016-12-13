/*
Felicia Cruz
December 7th, 2016
This program is going to be a hang man game called HANGING WITH SANTA. This is going to be a holiday version of the game hangman.
*/

#include<iostream>
#include<cstring>
#include<string>
#include<stdlib.h>
#include<ctime>
using namespace std;

class HangingWithSanta{
 public:
    void CheckIncorrectAnswers(int incorrectAnswers);//check the number of incorrect answers and calculates them
    int AmountIncorrectAnswers();//store the amountof incorrect answers 
private:
    int totalIncorrectAnswers = 0;//will hold the  total number of incorrect guesses
};

//this function will be called in the main function and will keep track of the numberof wrong guesses the user made
void HangingWithSanta::CheckIncorrectAnswers(int incorrectAnswers){
    incorrectAnswers++;
    totalIncorrectAnswers = incorrectAnswers; 
}
    
//holds the total amount if incorrect answers
int HangingWithSanta::AmountIncorrectAnswers(){
    return totalIncorrectAnswers;
}

int main(){
    string holidayWord; //the hang man word 
    HangingWithSanta hangMan;
    char userLetterChoice;//user letter choice
    int numberOfCorrectAnswers = 0; //hold the number of answers user gets correct
    
    cout<<"HANGING WITH SANTA"<<endl;
    
        cout<<"        ______________"<<endl;
        cout<<"        |            |"<<endl;
        cout<<"        |____        |"<<endl;
        cout<<"       /  ___|       |"<<endl;
        cout<<"     _/__/_  @       |"<<endl;
        cout<<"    |      |         |"<<endl;
        cout<<"    |      |         |"<<endl;
        cout<<"    |______|         |"<<endl;
        cout<<"        |            |"<<endl;   
        cout<<"       |||           |"<<endl;
        cout<<"      | | |          |"<<endl;
        cout<<"     |  |  |         |"<<endl;
        cout<<"        |            |"<<endl;
        cout<<"       | |           |"<<endl;
        cout<<"      |   |          |"<<endl;
        cout<<"     |     |         |"<<endl;
    
   //this will find the word used for the hang man game randomly
    srand(time(NULL));
    string holidayWords[14]={"santa", "rudolph","jolly", "christmas", "snowman", "candycane", "stocking", "gingerbread","jinglebells", "mistletoe", "presents", "ornament", "reindeer", "elves"};
    int RandIndex = rand()%13;
    holidayWords[RandIndex];
    holidayWord = holidayWords[RandIndex];// the random word will be stored in holidayWord
    
   
    
    int incorrectAnswers = 0;
    string underScoreWordChoice;//these underscores will take place  for the letters in the word
    underScoreWordChoice = holidayWord;// this will store the holidayWod in underscoreWordChoice
    
    int numUnderScoreChars = 0;//number of letters in underscore word
    numUnderScoreChars = underScoreWordChoice.length(); //store it here
    
    int numHolidayWordChars = 0;//number of letters in the holiday word
    numHolidayWordChars = holidayWord.length();//stores it here
     int incorrectGuesses = 0;
    
    //this generates the underscores
    for(int i=0; i<numUnderScoreChars; i++){
        underScoreWordChoice[i] = '-';
    }
    
    while(numberOfCorrectAnswers < numHolidayWordChars){//the number of correct answers less than the number of letters in the holiday word
        cout<<"Enter a letter:";
        cout<<underScoreWordChoice<<endl;
        cin>>userLetterChoice;//user input
            for(int i=0; i<numHolidayWordChars; i++){
                if(userLetterChoice == holidayWord[i]){//if the letter the user choosesd equals holidayWor[i] then it sets the underscores equal to it the holiday word
                    underScoreWordChoice[i] = holidayWord[i];
                    numberOfCorrectAnswers++;//count number of guesses that are correct
                }
                if( userLetterChoice != holidayWord[i]){
                  
               hangMan.CheckIncorrectAnswers(incorrectGuesses);//if it is not equal it counts number of guesses wrong
               
                }
            }
       
    }
   
    cout<< " "<<endl;
    cout<<"Congratulations! You win! The word was "<<holidayWord<< "!"<<endl;// if they guess the word then it displays they won and what the word is
    
    cout<<"You had ";
    cout<<incorrectGuesses;
    cout<<hangMan.AmountIncorrectAnswers()<< " incorrect guesses."<<endl;//it displays how many guesses they got wrong
    
}
    
   
  
