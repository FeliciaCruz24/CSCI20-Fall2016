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
    void SetUserGameRoundsWon(int userRoundsWon);
    int GetUserRoundsWon()const;
    void SetComputerGameRoundsWon(int computerRoundsWon);
    int GetComputerRoundsWon()const;
private:
    int totalUserRoundsWon = 0;
    int totalComputerRoundsWon = 0;
};

void gameConditionals(string userGame, string computerGame){
    if(((userGame == "rock")||(userGame =="Rock")) && (computerGame =="scissors"))    
        cout<<"You win round!"<<endl;
    }
    else if (((userGame == "scissors")|| (userGame=="Scissors")) &&(computerGame=="paper")){
        cout<<"You win round!"<<endl;
    }
    else if(((userGame == "paper")||(userGame == "Paper")) && (computerGame =="rock")){
        cout<<"You win round!"<<endl;
    }
    else if(((computerGame == "rock") && (userGame =="scissors")||(userGame == "Scissors")   
        cout<<"You win round!"<<endl;
    }
    else if ((computerGame == "scissors") && (userGame=="paper")||(userGame=="Paper")){
        cout<<"You win round!"<<endl;
    }
    else if(((computerGame == "paper") && (userGame =="rock")|| (userGame == "Rock"){
        cout<<"You win round!"<<endl;
    }
}
int main(){
    int gameOption = 0;
    string gamePiece;
    string computerGamePiece;
    RockPaperScissors game;
    
    cout<<"Rock, Paper, and Scissors Game"<<endl;
    cout<<"You can choose between three different game options. You can pick 3, 5 or 7."<<endl;
    cout<<"Type game option below"<<endl;
    
    cout<<"Game Option: ";
    cin>>gameOption;
    
    if(gameOption == 3){
    cout<<"Pick rock, paper, or scissors: ";
    cin>>gamePiece;
    
    cout<<"You picked "<<gamePiece<<"."<<endl;
    cout<<"The computer picked ";
    
    srand(time(NULL));
    string gameArray[3] ={"rock", "paper", "scissors"};
    int RandIndex = rand() % 3;
    gameArray[RandIndex];
    
    computerGamePiece = gameArray[RandIndex];
    cout<<computerGamePiece<<endl;
    
    
    }
    
    
    
}