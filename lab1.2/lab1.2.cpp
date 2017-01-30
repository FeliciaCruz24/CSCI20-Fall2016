/*
Felicia Cruz
January 28th, 2016
This program will take in three different problems with two rows of numbers
and determines what kind sets they are.
*/

#include<iostream>
#include<fstream>
#include<string>
#include<cstring>
using namespace std;
int main(){
    ifstream inFS;
    string fileName;
    
    int lineOne[4] = {};//for row 1
    int lineTwo[4] = {};//for row 2
    int lineThree[4] = {}; // problem two row 1
    int lineFour[2] = {};//problem two row 2
    int lineFive[4] = {};//problem three row 1
    int lineSix[4] = {};//problem three row 2
    
    int numSize1 = 0;//num of integers that are equal
   
    
    cout<<"Text File Name:";
    cin>>fileName;
    
    inFS.open(fileName);
    
    
    if(!inFS.is_open()){
        cout<<"Unable to open file.";
    }
    
    inFS>>lineOne[4]; //row 1
    inFS>>lineTwo[4];//row 2
    inFS>>lineThree[4];//problem 2 row 1
    inFS>>lineFour[2];//problem 2 row 2
    inFS>>lineFive[4];//problem 3 row 1
    inFS>>lineSix[4];//problem 3 row 2
    
    inFS.close();
    //will run three times for all three problems
    for(int i =0; i<3; i++){
        if(lineOne[i] == lineTwo[i]) { //determines if row1 and row2 are equal
            cout<<"Equal"<<endl;
            numSize1 = sizeof(lineOne);//keeps track of the num of Integers that are equal
            if(numSize1 < 5){//if the numSize is less than 5 than it they are subsets
                cout<<"Subset"<<endl;
            }
        }
        else if(lineOne[i] != lineTwo[i]){//determines if they are not equal and are proper sets
            cout<<"Proper"<<endl;
        }
        else{//if none of the other sets then it is empty
                cout<<"Empty"<<endl;
            }
    } 
}