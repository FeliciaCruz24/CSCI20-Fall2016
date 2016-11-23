/*
Felicia Cruz
November 10th, 2016
This program is going to be a test grading program. It will check the students answers with the answer key. 
It will say the students score, how many questions weren's answered, their name and the class average.
*/

#include<iostream>
#include<string>
#include<ios>
#include<iomanip>
#include<cstring>
#include<fstream>
using namespace std;


class TestGradingProgram{
  public:
   void SetCharIncorrectAnswers(char* STUDENT_ANSWERS[]);
   int GetCharIncorrectAnswers()const;
   void SetStringIncorrectAnswers();
   int GetStringIncorrectAnswers()const;
   void SetStudentTestGrade();
   float GetStudentGrade() const;
   
private:
    int i= 0;
    int totalScore =23;
    int charOmmittedAnswers = 0;
    int stringOmmittedAnswers = 0;
    int charIncorrectAnswers = 0;
    int stringIncorrectAnswers = 0;
};

void TestGradingProgram::SetCharIncorrectAnswers(char* STUDENT_ANSWERS[]){
  char ommitedAnswer = '?';
   char letterAnswerKey[19] ={'a', 'b', 'c', 'c', 'c', 'c', 'a', 'a', 'b', 'b', 'f', 'f', 't', 't', 'f', 't', 'f', 'f'};
    if(strcmp (const char* STUDENT_ANSWERS[i], const char*letterAnswerKey[i]) !=0){
        charIncorrectAnswers = strlen(STUDENT_ANSWERS[i]);
        if(STUDENT_ANSWERS[i] == ommitedAnswer){
            charOmmittedAnswers = strlen( STUDENT_ANSWERS[i]);
        }
        charIncorrectAnswers = charIncorrectAnswers - charOmmittedAnswers;
    }
}
int TestGradingProgram::GetCharIncorrectAnswers()const{
    return charIncorrectAnswers, charOmmittedAnswers;
}
void TestGradingProgram::SetStringIncorrectAnswers(){
   
}
int TestGradingProgram::GetStringIncorrectAnswers()const{
    
}
int main(){
    ifstream inFS;
    
    int student_answers;
    char studentAnswers[student_answers];
    int firstName = 1;
    int lastName = 4;
    string firstLastName[firstName][lastName];
    string fileName;
    
    TestGradingProgram grades;
    
    cout<<"Text File Name:";
    cin>>fileName;
    
    inFS.open(fileName);
    
    if(!inFS.is_open()){
        cout<<"Unable to open file.";
    }
    inFS>>firstLastName[firstName][lastName];
    inFS>>studentAnswers[student_answers];
    
    
    inFS.close();
    
    
    
    //need to add my output file

}