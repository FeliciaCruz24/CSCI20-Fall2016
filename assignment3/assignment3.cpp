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
    void SetUserGameRoundsWon(int userRoundsWon, string userGame, string computerGame);//checks to see which rounds the user won and how many they won
    int GetUserRoundsWon()const;
    void SetComputerGameRoundsWon(int computerRoundsWon, string userGame, string computerGame);//checks to see which rounds the computer won and how many they won
    int GetComputerRoundsWon()const;
    void SetRoundsTied(int roundsTied, string userGame, string computerGame);//checks which rounds were tied
    int GetRoundsTied()const;
    void PrintWhoWOn();//prints who won the game
private:
    int totalUserRoundsWon = 0;//the total rounds the user won
    int totalComputerRoundsWon = 0;//the total rounds the computer won
    int totalRoundsTied = 0;
};

void RockPaperScissors::SetUserGameRoundsWon(int userRounds, string userGame, string computerGame){//checks conditions and sees if the user won the round
    if(((userGame == "rock")||(userGame =="Rock")) && (computerGame =="scissors")){    
        cout<<"You win round!"<<endl;
        userRounds = userRounds + 1;//if user won round its added to the amount of rounds won
    }
    if (((userGame == "scissors")|| (userGame=="Scissors")) &&(computerGame=="paper")){
        cout<<"You win round!"<<endl;
        userRounds = userRounds + 1;//if user won round its added to the amount of rounds won
    }
    if (((userGame == "paper")||(userGame == "Paper")) && (computerGame =="rock")){
        cout<<"You win round!"<<endl;
        userRounds = userRounds + 1;//if user won round its added to the amount of rounds won
    }
    
    
    totalUserRoundsWon = userRounds;//stores the amount of rounds won into the total amount
}
int RockPaperScissors::GetUserRoundsWon()const{
    return totalUserRoundsWon;//total won
}
void RockPaperScissors::SetComputerGameRoundsWon(int computerRounds, string userGame, string computerGame){//checks conditions to see if the computer won the rounds
    if (((userGame =="scissors")||(userGame == "Scissors")) &&(computerGame == "rock")){  
        cout<<"Computer wins round!"<<endl;
        computerRounds = computerRounds + 1;//if computer won then amount is added to rounds won
    }
    if (((userGame=="paper")||(userGame=="Paper")) && (computerGame == "scissors")){
        cout<<"Computer wins round!"<<endl;
        computerRounds = computerRounds + 1;//if computer won then amount is added to rounds won
    }
    if (((userGame =="rock")|| (userGame == "Rock")) && (computerGame == "paper")){
        cout<<"Computer wins round!"<<endl;
        computerRounds = computerRounds + 1;//if computer won then amount is added to rounds won
    }
    
    
    totalComputerRoundsWon = computerRounds;//stores the amount of rounds won into the total amount
}
int RockPaperScissors::GetComputerRoundsWon()const{
    return totalComputerRoundsWon;//total won
}
void RockPaperScissors::SetRoundsTied(int roundsTied, string userGame, string computerGame){//checks which rounds are tied
    if (((userGame =="scissors")||(userGame == "Scissors")) &&(computerGame == "scissors")){  
        cout<<"Tie!"<<endl;
        roundsTied = roundsTied +1;
    }
    if (((userGame=="paper")||(userGame=="Paper")) && (computerGame == "paper")){
        cout<<"Tie!"<<endl;
        roundsTied = roundsTied +1;
    }
    if (((userGame =="rock")|| (userGame == "Rock")) && (computerGame == "rock")){
        cout<<"Tie!"<<endl;
        roundsTied = roundsTied +1;
    }
    totalRoundsTied = roundsTied;
}
int RockPaperScissors::GetRoundsTied()const{
   return totalRoundsTied; 
}

void RockPaperScissors::PrintWhoWOn(){
    if(totalUserRoundsWon>totalComputerRoundsWon){//if user has more rounds won the computer it outputs the user won
        cout<<"You win the game!"<<endl;
    }
    if(totalComputerRoundsWon>totalUserRoundsWon){//if the computer has more rounds won it outputs the computer won
        cout<<"The computer wins the game!"<<endl;
    }
    if(totalComputerRoundsWon == totalUserRoundsWon){
        cout<<"The game is tied!"<<endl;//if they ahve the same amount of rounds it says they tied
    }
}
int main(){
    int i = 0;
    int gameOption = 0;//either 3, 5, or 7
    string gamePiece;//the game piece the user chooses
    string computerGamePiece;//the game piece the computer chooses
    int userWonRound = 0;//rounds the user wins
    int computerWonRound = 0;//rounds the computer wins
    RockPaperScissors game;
    
    //directions for the game
    cout<<"Rock, Paper, and Scissors Game"<<endl;
    cout<<"You can choose between three different game options. You can pick 3, 5 or 7."<<endl;
    cout<<"Type game option below"<<endl;
    
    cout<<"Game Option: ";
    cin>>gameOption;//user inputs game option
    cout<<endl;
    
    if(gameOption == 3){//if the game option is 3 it will repeat all of these functions three times and include three rounds of the game
        for(i = 0; i<3; i++){
            cout<<"Pick rock, paper, or scissors: ";
            cin>>gamePiece;//the user inputs their choice
    
            cout<<"You picked "<<gamePiece<<"."<<endl;//shows what the user picked
            cout<<"The computer picked ";
            
            //will generate what the computer picked randomly
            srand(time(NULL));
            string gameArray[3] ={"rock", "paper", "scissors"};
            int RandIndex = rand() % 3;
            gameArray[RandIndex];
    
            computerGamePiece = gameArray[RandIndex];//stores what the computer picked into the computerGamePiece
            cout<<computerGamePiece<<endl;//what the computer picked
            
            game.SetUserGameRoundsWon(0, gamePiece, computerGamePiece);//checks to see if the user won the rounds
            game.GetUserRoundsWon();//gets how many rounds won
            game.SetComputerGameRoundsWon(0, gamePiece, computerGamePiece);//checks to see if the computer won the rounds
            game.GetComputerRoundsWon();//gets how many user rounds won
            game.SetRoundsTied(0, gamePiece, computerGamePiece);//checks to see if they tied
            game.GetRoundsTied();//rounds tied
            cout<<endl;
            }
            game.PrintWhoWOn();//Prints who won the game in the end
        } 
    else if(gameOption == 5){//if the game option is 5 it will repeat all of these functions three times and include three rounds of the game
        for(i = 0; i<5; i++){
            cout<<"Pick rock, paper, or scissors: ";
            cin>>gamePiece;//user inputs their choice
    
            cout<<"You picked "<<gamePiece<<"."<<endl;//says what they picked
            cout<<"The computer picked ";
    
            srand(time(NULL));
            string gameArray[3] ={"rock", "paper", "scissors"};
            int RandIndex = rand() % 3;
            gameArray[RandIndex];
    
            computerGamePiece = gameArray[RandIndex];
            cout<<computerGamePiece<<endl;//the computers choice
            
            game.SetUserGameRoundsWon(0, gamePiece, computerGamePiece);//checks if user won rounds
            game.GetUserRoundsWon();//gets how many user rounds won
            game.SetComputerGameRoundsWon(0, gamePiece, computerGamePiece);//checks if computer won rounds
            game.GetComputerRoundsWon();//gets how many computer rounds won
            game.SetRoundsTied(0, gamePiece, computerGamePiece);//if they tied
            game.GetRoundsTied();//rounds tied
            cout<<endl;
            }
            game.PrintWhoWOn();//prints who won
        }
    else{
        for(i = 0; i<7; i++){//if the game option is 7 it will repeat all of these functions three times and include three rounds of the game
            cout<<"Pick rock, paper, or scissors: ";
            cin>>gamePiece;
    
            cout<<"You picked "<<gamePiece<<"."<<endl;//what the user picked
            cout<<"The computer picked ";
    
            srand(time(NULL));
            string gameArray[3] ={"rock", "paper", "scissors"};
            int RandIndex = rand() % 3;
            gameArray[RandIndex];
    
            computerGamePiece = gameArray[RandIndex];
            cout<<computerGamePiece<<endl;//computer picked
            
            game.SetUserGameRoundsWon(0, gamePiece, computerGamePiece);//checks if user won rounds
            game.GetUserRoundsWon();//gets how many rounds user won
            game.SetComputerGameRoundsWon(0, gamePiece, computerGamePiece);//checks if computer won rounds
            game.GetComputerRoundsWon();//gets how many rounds computer won
            game.SetRoundsTied(0, gamePiece, computerGamePiece);//checks if they tied
            game.GetRoundsTied();//rounds tied
            cout<<endl;
            }
            game.PrintWhoWOn();//says who won the game
        } 
    }