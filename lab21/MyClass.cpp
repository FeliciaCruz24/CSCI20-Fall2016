#include<iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;

#include "MyClass.h"

int randomNumber(){
   srand(time(0));
   return ((rand()% 10) + 1);
};


