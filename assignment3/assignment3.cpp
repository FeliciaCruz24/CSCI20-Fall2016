/*Felicia Cruz
October 20th 2016
This program is going to be a rock, paper, and scissors game.
*/

#include<iostream>
#include<string>
#include<stdlib.h>
#include<ctime>
using namespace std;

class RockPaperScissors{
public:
    void SetUserPlayer(string gamePiece);//sets the choice the user picked
    string GetUserPlayer() const;
    void SetComputerPlayer(int gamePiece);//sets the choice the computer picked
    string GetComputerPlayer()const;
    void SetUserRoundsWon(int userRounds);//sets the amount of rounds the user wins
    int GetUserRoundsWon()const;
    void SetComputerRoundsWon(int computerRounds);//sets the amount of rounds the computer wins
    int GetComputerRounds()const;
private:
    string userChoice;//the users choice
    string computerChoice;//the computers choice
    int userRounds = 0;//the rounds the user wins
    int computerRounds = 0;//the rounds the computre wins
    
};

void RockPaperScissors::SetUserPlayer(string gamePiece){// the game piece the user picked
   userChoice = gamePiece;
}
string RockPaperScissors::GetUserPlayer()const{
    return userChoice;
}
void RockPaperScissors::SetComputerPlayer(int gamePiece){//the game piece the computer picked
    computerChoice = gamePiece;
}
string RockPaperScissors::GetComputerPlayer()const{
    return computerChoice;
}
void RockPaperScissors::SetUserRoundsWon(int userRounds){//this sets the rounds the user wins
    int i = 0;
    while(i <= userRounds){
    userRounds+=1;
    //the conditions that evaluate if the user wins
        if (((userChoice == "rock")||(userChoice == "Rock")) && ((computerChoice== "scissors")||(computerChoice=="Scissors"))){
            cout<<"Rock Wins"<<endl;
        }  
        else if (((userChoice == "paper")||(userChoice == "Paper")) && ((computerChoice== "rock")||(computerChoice=="Rock"))){
            cout<<"Paper wins"<<endl;
        }
        else if (((userChoice == "scissors")||(userChoice == "Scissors")) && ((computerChoice== "paper")||(computerChoice=="Paper"))){
            cout<<"Scissors wins"<<endl;
        }
        else if (((userChoice == "rock")||(userChoice == "Rock")) && ((computerChoice== "rock")||(computerChoice=="Rock"))){
            cout<<"Tie"<<endl;
        }  
        else if (((userChoice == "paper")||(userChoice == "Paper")) && ((computerChoice== "Paper")||(computerChoice=="paper"))){
            cout<<"Tie"<<endl;
        }
        else if (((userChoice == "scissors")||(userChoice == "Scissors")) && ((computerChoice== "scissors")||(computerChoice=="Scissors"))){
            cout<<"Tie"<<endl;
        }
    }
}
int RockPaperScissors::GetUserRoundsWon()const{//Displays if the user won
    return userRounds;
    if (userRounds<computerRounds){
        cout<<"You Win!"<<endl;
    }
}

void RockPaperScissors::SetComputerRoundsWon(int computerRounds){//the rounds the computer wins
    int i = 0;
    while(i <= computerRounds){
    computerRounds+=1;
    //the conditions that evaluate if the computer wins
        if (((computerChoice == "rock")||(computerChoice == "Rock")) && ((userChoice== "scissors")||(userChoice=="Scissors"))){
            cout<<"Rock Wins"<<endl;
        }  
        if (((computerChoice == "paper")||(computerChoice == "Paper")) && ((userChoice== "rock")||(userChoice=="Rock"))){
            cout<<"Paper wins"<<endl;
        }
        if (((computerChoice == "scissors")||(computerChoice == "Scissors")) && ((userChoice== "paper")||(userChoice=="Paper"))){
            cout<<"Scissors wins"<<endl;
        }
        if (((userChoice == "rock")||(userChoice == "Rock")) && ((computerChoice== "rock")||(computerChoice=="Rock"))){
            cout<<"Tie"<<endl;
        }  
        if (((userChoice == "paper")||(userChoice == "Paper")) && ((computerChoice== "Paper")||(computerChoice=="paper"))){
            cout<<"Tie"<<endl;
        }
        if (((userChoice == "scissors")||(userChoice == "Scissors")) && ((computerChoice== "scissors")||(computerChoice=="Scissors"))){
            cout<<"Tie"<<endl;
        }
    }
}

int RockPaperScissors::GetComputerRounds()const{//says if the computer wins
    return computerRounds;
    if(computerRounds>userRounds){
        cout<<"The computer wins!"<<endl;
    }
}


int main(){

int gameOption;
string userGamePiece;

RockPaperScissors game;

cout<<"Rock, Paper, and Scissors"<<endl;
cout<<"There are three different game options. You can choose best out of 3, 5, or 7."<<endl;
cout<<"Type your game option below."<<endl;

cout<<"Game Option: ";
cin>>gameOption;

//if the game option is three then it will plug into the functions three times in the loop 
if(gameOption ==3){
    int i=0;
    while(i<=3){
    i++;
    cout<<"Pick rock, paper, or scissors: ";
    cin>>userGamePiece;

    cout<<"The computer chose: ";
    srand ( time(NULL) );
    string gameArray[3] = {"Rock", "Paper", "Scissors"};
    int RandIndex = rand() % 3; //generates whether it is rock, paper, and scissors
    cout << gameArray[RandIndex];
    cout<<endl;
    
    game.SetUserPlayer(userGamePiece);
    cout<<"You picked ";
    cout<<game.GetUserPlayer();//shows the choice the user picked
    cout<<endl;
    
    game.SetComputerPlayer(RandIndex);
    cout<<game.GetComputerPlayer();//shows the choice the computer picked
    cout<<endl;
    
    //fix these functions so it will display who won correctly
    game.SetUserRoundsWon(gameOption);
    cout<<game.GetUserRoundsWon();//displays who won
    cout<<endl;
    
    game.SetComputerRoundsWon(gameOption);
    cout<<game.GetComputerRounds();//displays who won
    cout<<endl;
    } 
}
//if the game option is 5 then it will plug into the functions in the loop 5 times
if(gameOption == 5){
   int i=0;
    while(i<=5){
    i++;
    cout<<"Pick rock, paper, or scissors: ";
    cin>>userGamePiece;

    cout<<"The computer chose: ";
    srand ( time(NULL) );
    string gameArray[3] = {"Rock", "Paper", "Scissors"};
    int RandIndex = rand() % 3; //generates whether it is rock, paper, or scissors
    cout << gameArray[RandIndex];
    cout<<endl;
    
    game.SetUserPlayer(userGamePiece);
    cout<<"You picked ";
    cout<<game.GetUserPlayer();//shows the choice the user picked
    cout<<endl;
    
    game.SetComputerPlayer(RandIndex);
    cout<<game.GetComputerPlayer();//shows the choice the computer picked
    cout<<endl;
    
    //fix these functions so it will display who won correctly
    
    game.SetUserRoundsWon(gameOption);
    cout<<game.GetUserRoundsWon();//displays if user won
    cout<<endl;
    
    game.SetComputerRoundsWon(gameOption);
    cout<<game.GetComputerRounds();//displays if computer won
    cout<<endl;
    } 
} 
//if the game option is 7 then it will plug into the functions in the loop 7 times
if(gameOption == 7){
    int i=0;
    while(i<=7){
    i++;
    cout<<"Pick rock, paper, or scissors: ";
    cin>>userGamePiece;
    
    game.SetUserPlayer(userGamePiece);
    cout<<"You picked ";
    cout<<game.GetUserPlayer();//shows the user choice
    cout<<endl;
    
    cout<<"The computer chose: ";
    srand ( time(NULL) );
    string gameArray[3] = {"Rock", "Paper", "Scissors"};
    int RandIndex = rand() % 3; //generates whether it is rock paper and scissors
    cout << gameArray[RandIndex];
    cout<<endl;
    
    game.SetComputerPlayer(RandIndex);
    cout<<game.GetComputerPlayer();//shows the computer choice
    cout<<endl;
    
    //fix these functions so it will display who won correctly
    game.SetUserRoundsWon(gameOption);
    cout<<game.GetUserRoundsWon();//displays if the user won
    cout<<endl;
    
    game.SetComputerRoundsWon(gameOption);
    cout<<game.GetComputerRounds();//displays if the computer won
    cout<<endl;
    }
}

}