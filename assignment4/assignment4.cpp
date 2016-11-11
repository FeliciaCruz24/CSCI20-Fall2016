/*
Felicia Cruz
November 10th, 2016
This program is going to be a test grading program. It will check the students answers with the answer key. 
It will say the students score, how many questions weren's answered, their name and the class average.
*/

#include<iostream>
#include<string>
#include<fstream>
using namespace std;

class TestGradingProgram{
  public:
    void SetStudentOneScores(string oneStudent[],int scores_1, string correctAnswers[], int correctScores);
    float GetStudentOneScores() const;
    void SetStudentTwoScores(string twoStudent[],int scores_2, string correctAnswers[], int correctScores);
    float GetStudentTwoScores() const;
    void SetStudentThreeScores(string threeStudent[],int scores_3, string correctAnswers[], int correctScores);
    float GetStudentThreeScores() const;
    void SetStudentFourScores(string fourStudent[],int scores_4, string correctAnswers[], int correctScores);
    float GetStudentFourScores() const;
    void SetStudentFiveScores(string fiveStudent[],int scores_5, string correctAnswers[], int correctScores);
    float GetStudentFiveScores() const;
    void PrintAllScores();
private:
    int i= 0;
    int h=0;
    int totalScore =23;
};
//need to fix each function. They are supposed to check the students answers with the answer key. Whichever answeers
//do not match they will be subtracted from the total. Then we will get the students score, ommitted answers, and incorrect
//answers. Need to go back through each function and fix it.
void TestGradingProgram::SetStudentOneScores(string oneStudent[],int scores_1, string correctAnswers[], int correctScores){
    for(i=0; i<scores_1; i++){
        oneStudent[i];
        for(i =0; i<correctScores; i++){
            correctAnswers[i];
        }
        if(oneStudent[i] != correctScores[i]){
            oneStudent[i].length();
            totalScore = totalScore - oneStudent[i].size();    
        }
        if(oneStudent[i] =="?")||
    }    
}
float TestGradingProgram::GetStudentOneScores()const{
    
}
void TestGradingProgram::SetStudentTwoScores(){
    for(i=0; i<scores_2; i++){
        twoStudent[i];
        for(i =0; i<correctScores; i++){
            correctAnswers[i];
        }
        if(twoStudent[i] != correctScores[i]){
        
        }    
    }    
}
float TestGradingProgram::GetStudentTwoScores()const{
    
}
void TestGradingProgram::SetStudentThreeScores(){
    for(i=0; i<scores_1; i++){
        threeStudent[i];
        for(i =0; i<correctScores; i++){
            correctAnswers[i];
        }
        if(threeStudent[i] != correctScores[i]){
        
        }    
    }    
}
float TestGradingProgram::GetStudentThreeScores()const{
    
}
void TestGradingProgram::SetStudentFourScores(){
    for(i=0; i<scores_1; i++){
        fourStudent[i];
        for(i =0; i<correctScores; i++){
            correctAnswers[i];
        }
        if(fourStudent[i] != correctScores[i]){
        
        }    
    }    
}
float TestGradingProgram::GetStudentFourScores()const{
    
}
void TestGradingProgram::SetStudentFiveScores(){
   for(i=0; i<scores_1; i++){
        fiveStudent[i];
        for(i =0; i<correctScores; i++){
            correctAnswers[i];
        }
        if(fiveStudent[i] != correctScores[i]){
        
        }    
    }     
}
float TestGradingProgram::GetStudentFiveScores()const{
    
}
int main(){
    ifstream inFS;
    string answerKey[23] ={"a", "b", "c", "c", "c", "c", "a", "a", "b", "b", "f", "f", "t", "t", "f", "t", "f", "f","variable", "random", "condition"};
    int student_one = 23;
    char studentOne[student_one];
    int student_two =23;
    string studentTwo[student_two];
    int student_three = 23;
    string studentThree[student_three];
    int student_four =23;
    string studentFour[student_four];
    int student_five =23;
    string studentFive[student_five];
    int firstName = 1;
    int lastName = 4;
    string firstLastName[1][4];
    string fileName;
    
    cout<<"Text File Name:";
    cin>>fileName;
    
    inFS.open(fileName);
    
    if(!inFS.is_open()){
        cout<<"Unable to open file.";
    }
    inFS>>firstLastName[firstName][lastName];
    inFS>>studentOne[student_one];
    inFS>>studentTwo[student_two];
    inFS>>studentThree[student_three];
    inFS>>studentFour[student_four];
    inFS>>studentFive[student_five];
    
    inFS.close();
    
    //need to add my output file

}