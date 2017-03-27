/*
Felicia Cruz
3/26/2017
This is a program that has a recursive function to convert binary to decimal. 
And it has an inverse recursive function to conver decimal to binary.
*/
#include<iostream>
#include<string>
#include<math.h>
#include<stdio.h>

using namespace std;

//class example
int binToDec(long binary, int i =0){
    long int decimal = 0, r = 0, b=0;

    if (binary > 0){
        i++;
        decimal = decimal + binary%2*pow(2,i-1) + binToDec(binary/10,i);
        cout<<decimal;
        return decimal;
    }
    else{
        decimal = decimal + binary%2*pow(2,i);
        cout<<decimal;
        return decimal;
    }
}

void decToBin(int user_input) {
    int left_over = 0;
    left_over = user_input % 2; // the remaider of user input
	
	if (user_input > 0) {
		decToBin(user_input/2); //call function and divide by two
		cout<<left_over; // output converted number
	}
}

int main() {
    long new_binary = 0;
    int user_num = 0;
    
    cout << "Enter a binary value: ";  // take binary input to convert to decimal
    cin>>new_binary;
    
    cout << "Decimal value: ";
    binToDec(new_binary, 0);  // calls binary to decimal function
    cout<<endl; 
    
    cout<< "Enter an integer value: ";  // take integer value and convert to binary
    cin>>user_num;
    
    cout<< "Binary value: ";
    decToBin(user_num);  // calls decimal to binary function
    
    return 0;
    
}