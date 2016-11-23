/*
Felicia Cruz
Novemmber 23rd 2016
Thiss a program that accepts user input of a word that is supposed to be 10 chars or less and checks that value to make sure it is
the correct number of chars.
*/
#include <iostream>
#include <cstring>
using namespace std;
 
int main()
{
char firststr[10];
int firstname = 0;
char *head = firststr;//create pointer variable *head
char *tail = firststr;//create pointer variable *tail
cout << "Please enter a 10 letter word or less" << endl;
cin >> firststr;
strlen(firststr);//count number of chars in firststr
firstname = strlen(firststr);//firstname stores the number of chars in firststr
cout << "Your word is " << firststr << endl;

//if the number of chars is less than 10 while *head has not reached \0 than it will output firststr stored in *head
if (firstname<10)
{
    while (*head != '\0')
    {
        cout << *head;//firststr is stored in *head
        head++;//adds 1 char
    }
}
else
{
    cout << "WARNING WORD TOO BIG TO DISPLAY!!" << endl;
}

cout << endl;
tail = &firststr[strlen(firststr) - 1];//stored the value of # of chars in firststr -1 into the &firststr and then it was stored in tail.
if (firstname < 10)//if # of chars is less than 10 and while firstname > 0 it will output firststr stored in *tail.
{
    while (*tail>0)
    {
        cout << *tail;//firststr in *tail
        tail--;//subtracts 1 char
    }
    
}
cout << endl;
head = firststr;//firststr stored in head
tail = &firststr[strlen(firststr) - 1];//number of chars in firststr stored in tail
head++;// add 1
tail--;//subtract 1

//if *head and *tail equal eachother than it will output the first quoted otherwise the second one.
if (*head == *tail)
{
    cout << "It is an palindrome!" << endl;
}
else
{
    cout << "It is not an palindrome" << endl;
}
 
return 0;
}