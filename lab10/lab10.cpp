/*Felicia Cruz
October 3 2016
This program will output equations from the Operators Worksheet
*/

#include<iostream>
#include<string>
using namespace std;

int main(){
cout<<"#1 - #9 EQUATIONS:"<<endl;
//#1. If true it will output true and if it is false it will output false and the answer
int suzyAge = 25;
int johnAge = 21;   
cout<<"1. "<<(suzyAge < johnAge);//output answer
if (suzyAge < johnAge){
        cout<<"True"<<endl; 
    }    
 else{
     cout<<", False because Suzy is younger than John."<<endl;
 }  

//#2.If true it will output true and if it is false it will output false and the answer    
int x =7;
int y = 7;
cout<<"2. "<<(x >= y);//output answer
if (x>=y){
    cout<<", True because 7 is greater than or equal to 7."<<endl; 
}
else{
    cout<<"False"<<endl;
}

//#3.If true it will output true and if it is false it will output false and the answer
int a = 1;
int b = 9;
cout<<"3. "<<(a == b);//output answer
if(a==b){
    cout<<"True"<<endl;
}
else{
    cout<<", False because 1 is not equal to 9"<<endl;
}

//#4.If true it will output true and if it is false it will output false and the answer
int limit = 20;
int count = 10;
cout<<"4. "<<((limit*count)/2 > 0);//output answer

if((limit*count)/2>0){
    cout<<", True because 100 is greater than 0."<<endl;
}
else{
    cout<<"False"<<endl;
}

//#5.If true it will output true and if it is false it will output false and the answer
int t = -4;
int z = 0;
cout<<"5. "<<(t > 5 || z < 2);//output answer
if(t > 5 || z < 2){
    cout<<", True because 0 is less than 2."<<endl;
}
else{
    cout<<"False"<<endl;
}

//#6.If true it will output true and if it is false it will output false and the answer
int variable = -5;
cout<<"6. "<<(!(variable >0));//output answer
if(!(variable >0)){
    cout<<", True because -5 is not greater than 0."<<endl;
}
else{
    cout<<"False"<<endl;
}

//#7.If true it will output true and if it is false it will output false and the answer
a = 16;
cout<<"7. "<<(a/4 < 8 && a >= 4);//output answer
if(a/4 < 8 && a >= 4){
    cout<<", True because 4 is less than 8 and 16 is greater than 4."<<endl;
}
else{
    cout<<"False"<<endl;
}

//#8.If true it will output true and if it is false it will output false and the answer
x = -2;
y = 5;
cout<<"8. "<<(x*y < 10 || y*z < 10);//output answer
if(x*y < 10 || y*z < 10){
    cout<<", True because -10 is less than 10."<<endl;
}

//#9.If true it will output true and if it is false it will output false and the answer
int j = -2;
int k = 5;
int l = 4;
cout<<"9. "<<(!(j*l < 10) || y/x * 4 <y *2);//output answer
    
if(!(j*l < 10) || y/x * 4 <y *2){
    cout<<", True because -8 is less than 10."<<endl;
}
    
}