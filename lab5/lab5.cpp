/* Felicia Cruz
September 6th, 2016
This program will have 5 monster objects and one of them will have to be inputed by the user. The other 4 objects will be hard coded.
*/

#include <iostream>
#include <string>
using namespace std;

 struct MonsterStruct {
        string head;
        string eyes;
        string ears;
        string nose;
        string mouth;
    };
int main () {
    
    MonsterStruct monster1;
    MonsterStruct monster2;
    MonsterStruct monster3;
    MonsterStruct monster4;
    MonsterStruct monster5;
    
    //Monster 1's characteristics
    monster1.head = "Franken";
    monster1.eyes = "Vegitas";
    monster1.ears = "Spritem";
    monster1.nose = "Wackus";
    monster1.mouth = "Vegitas";
    
    cout<<"MONSTERS AND THEIR CHARACTERISTICS:"<<endl; // Title at the top of the screen
    cout<< " "<<endl;
    
    //Calling the characteristics
    cout<< "Name: Crazy Eyes"<< endl;
    cout<< "Head: "<< monster1.head<<endl;
    cout<< "Eyes: "<<monster1.eyes<<endl;
    cout<< "Ears: "<<monster1.ears<<endl;
    cout<< "Nose: "<<monster1.nose<<endl;
    cout<< "Mouth: "<<monster1.mouth<<endl;
    cout<< " "<<endl;
    
    //Monster 2's characteristics
    monster2.head = "Zombus";
    monster2.eyes = "Wackus";
    monster2.ears = "Vegitas";
    monster2.nose = "Spritem";
    monster2.mouth = "Vegitas";
    
    //Calling the characteristics
    cout<< "Name: Bruiser"<< endl;
    cout<< "Head: "<< monster2.head<<endl;
    cout<< "Eyes: "<<monster2.eyes<<endl;
    cout<< "Ears: "<<monster2.ears<<endl;
    cout<< "Nose: "<<monster2.nose<<endl;
    cout<< "Mouth: "<<monster2.mouth<<endl;
    cout<< " "<<endl;
    
    //Monster 3's characteristics
    monster3.head = "Happy";
    monster3.eyes = "None";
    monster3.ears = "Wackus";
    monster3.nose = "Vegitas";
    monster3.mouth = "Vegitas";
    
    //Plugging in the characteristics
    cout<< "Name: No Eyes"<< endl;
    cout<< "Head: "<< monster3.head<<endl;
    cout<< "Eyes: "<<monster3.eyes<<endl;
    cout<< "Ears: "<<monster3.ears<<endl;
    cout<< "Nose: "<<monster3.nose<<endl;
    cout<< "Mouth: "<<monster3.mouth<<endl;
    cout<< " "<<endl;
    
    //Monster 4's characteristics
    monster4.head = "Franken";
    monster4.eyes = "Spritem";
    monster4.ears = "None";
    monster4.nose = "Spritem";
    monster4.mouth = "Wackus";
    
    //Plugging in the attributes
    cout<< "Name: Sam"<< endl;
    cout<< "Head: "<< monster4.head<<endl;
    cout<< "Eyes: "<<monster4.eyes<<endl;
    cout<< "Ears: "<<monster4.ears<<endl;
    cout<< "Nose: "<<monster4.nose<<endl;
    cout<< "Mouth: "<<monster4.mouth<<endl;
    cout<<" "<<endl;
    
    //Monster 5's attributes will be plugged in by the user
    string monsterName5;
    string monsterHead5;
    string monsterEyes5;
    string monsterEars5;
    string monsterNose5;
    string monsterMouth5;
    
    //Explaining to the user what they will have to do
    cout<<"Create your own monster by filling in each category with no spaces and then press ENTER."<<endl;
    cout<<"Choose from the following attributes for the head :Zombus, Franken, or Happy."<<endl;
    cout<<"For all the other characteristics choose between Vegitas, Spritem, Wackus or None."<<endl;
    cout<< " "<<endl;
    
    //This will be what is inputed by the user
    cout<< "Name: ";
    cin>> monsterName5;
    cout<< endl;
    cout<< "Head: ";
    cin>> monsterHead5;
    cout<<endl;
    cout<< "Eyes: ";
    cin>> monsterEyes5;
    cout<< endl;
    cout<< "Ears: "; 
    cin>> monsterEars5;
    cout<< endl;
    cout<< "Nose: "; 
    cin>>monsterNose5;
    cout<< endl;
    cout<< "Mouth: ";
    cin>>monsterMouth5;
    cout<<endl;
    
    
}