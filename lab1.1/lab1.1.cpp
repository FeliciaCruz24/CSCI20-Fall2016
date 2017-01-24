/*Felicia Cruz
January 23rd, 2016
This is a program that will take the numbers between 0-50 and separate them into three sections
1. Set of three-even values
2. Set of even values that are NOT three-even
3. All values that are neither three-even nor even
*/

#include<iostream>
#include<string>
using namespace std;

int main(){
//holds all of the numbers between 0 - 50
int numIntegers[50] ={1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
int threeEven[] = {};//will hold the three-even values
int evenNum[] = {};//will hold all of the even numbers except three-even
int neitherNum[] = {};//holds neither values

cout<<"ALL OTHER VALUES:"; 
for(int i =0; i<50; i++){
    if(numIntegers[i] % 2 == 1){
        neitherNum[i] = numIntegers[i];//assigns the odd values to neitherNum array
        cout<<numIntegers[i]<<" ";//output odd #'s not three-even or even
    }
} 
cout<<endl;
cout<<"THREE-EVEN VALUES: ";
//assign the three-even values to the threeEven array and outputs values
for(int i =0; i< 50; i++){
    if(((numIntegers[i] % 3 == 0) || (numIntegers[i] % 3 == 3)) && ((numIntegers[i] == (numIntegers[i]/2) *2))){
        threeEven[i] = numIntegers[i];
        cout<<threeEven[i]<<" ";// outputs three-even values
    }
}

cout<<endl;  
cout<<"EVEN NUMBERS: 0 ";
for(int i =0; i< 50; i++){    
    if((numIntegers[i] == (numIntegers[i]/2) *2)){//all the even values
        
        //if some of the values are three-even they are put into the three even array
        if(numIntegers[i] % 3 == 0){
            threeEven[i] = numIntegers[i];
        }
        else{//all of the other even values are assigned to the evenNum array
        evenNum[i] = numIntegers[i];
        cout<<evenNum[i]<<" ";//only even values that are not three-even will be outputted
        }
    }
} 

}

