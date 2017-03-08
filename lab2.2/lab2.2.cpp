/*
Felicia Cruz
March 8th 2017
Binomial coefficients lab
*/

#include<iostream>
#include<string>
using namespace std;

int main() {
  int n_value = 0; // user input 
  int k_value = 5; // my k_value I have chosen
  
  // these are used for the combination formula
  int total_n_value = 1;
  int total_k_value = 1;
  int combination = 0;
  
  cout << "Investigating Pascal's Triangle and Binomial Thereom"<<endl;
  cout << "K value is 5." << endl;
  cout << "Enter an n value to determine a bonomial position: ";
  cin >> n_value;
  
  // this switch case will find the bonomial position using the n value given by the user
  switch (n_value) {
  case 1:
  case 2:
  case 3:
  case 4:
    cout << "No position found."<< endl; 
    break;
  case 5:
    cout << "Position is 1." << endl;
    break;
  case 6:
    cout << "Position is 6."<< endl;
    break;
  case 7:
    cout << "Position is 21."<< endl;
    break;
  case 8:
    cout << "Position is 56."<< endl;
    break;
  case 9:
    cout << "Position is 126."<< endl;
    break;
  case 10:
    cout << "Position is 252."<< endl;
    break;
  case 11:
    cout << "Position is 462."<< endl;
    break;
  case 12:
    cout << "Position is 792."<< endl;
    break;
  case 13:
    cout << "Position is 1287."<< endl;
    break;
  case 14:
    cout << "Position is 2002."<< endl;
    break;
  case 15:
  cout << "Position is 3003."<< endl;
    break;
  }
  
  cout << "Permutation for P(" << n_value << "," << k_value << "): "; // outputs the permutation formula
  for (int i = n_value; i > k_value; i--) {
    cout << i << " ";
  }
  
  cout << endl;
  cout << "Combination for ( n = " <<n_value << " , " << "k = "<<k_value << "): ";
  
  
  for (int i = n_value; i > k_value; i--) { // will find the top value for the combination equation 
    total_n_value *= i;
  }
  
  for (int h = 5; h > 0; h--) { // will find bottom value of the combination equation 
    total_k_value *= h;
  }
  
  combination = total_n_value / total_k_value;  // calculates the equation
  cout << combination;
  
}