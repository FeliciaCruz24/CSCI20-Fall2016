/*Felicia Cruz 
September 16th, 2016
This program is going to output a song by Kid Cudi called Mr.Rager
*/

#include<iostream>
#include<string>
using namespace std;

//This is the second part of the song with no parameters in the fucntion
void MrRagerPart2 (){
    cout<<"Birds sing, flyin' around"<<endl;
    cout<<"You never see them too long on the ground"<<endl;
    cout<<"You wanna be one of them, yeah"<<endl;
    cout<<"You wanna be one of them, yeah"<<endl;
    cout<<"You might hear the birds singin', flyin' around"<<endl;
    cout<<"You never see them too long on the ground"<<endl;
    cout<<"You wanna be one of them, yeah"<<endl;
    cout<<"You wanna be one of them, yeah"<<endl;
    cout<<"Whoa now"<<endl;
    cout<<" "<<endl;
}

//This is the fourth part of the song with no parameters
void MrRagerPart4( ){
    cout<<"Knocked down round for round"<<endl;
    cout<<"You're feelin' like you're shot down on the ground"<<endl;
    cout<<"When will the fantasy end?"<<endl;
    cout<<"When will the heaven begin? Yeah"<<endl;
    cout<<"You might be knocked down round for round"<<endl;
    cout<<"You're feelin' like you're shot down on the ground"<<endl;
    cout<<"When will the fantasy end? Yeah"<<endl;
    cout<<"When will the heaven begin? Yeah"<<endl;
    cout<<"Whoa now"<<endl;
    cout<<" "<<endl;
    
    
}
//This is the chorus of the song that has 12 parameters for each line in the paragraph, it will be called three times in the main
void MrRagerChorus(string line1, string line2, string line3, string line4, string line5, string line6, string line7, string line8, string line9, string line10, string line11, string line12){
     cout<<line1<<endl;
    cout<<line2<<endl;
    cout<<line3<<endl;
    cout<<line4<<endl;
    cout<<line5<<endl;
    cout<<line6<<endl;
    cout<<line7<<endl;
    cout<<line8<<endl;
    cout<<line9<<endl;
    cout<<line10<<endl;
    cout<<line11<<endl;
    cout<<line12<<endl;
    cout<<" "<<endl;
    
}
//The main contains all of the functions and also the smaller parts of the song that were not placed into functions
int main(){
    cout<< "MR. RAGER"<<endl; //The title of the song
    cout<<"BY: KID CUDI"<<endl;//The name of the singer
    cout<<" "<<endl;
    
    //The first part of the song
    cout<<"I'm off on an adventure"<<endl;
    cout<<"This song is dedicated to all the kids like me"<<endl;
    cout<<"I'm on my way to heaven"<<endl;
    cout<<"Wherever you are, now"<<endl;
    cout<<" "<<endl;
    
    //The second part of the song 
    MrRagerPart2();
    
    MrRagerChorus("Hey, Mr. Rager, Mr. Rager,","Tell me where you're going","Tell us where you're headed","Off on adventure", "Mr. Rager, tell me some of your stories", "Tell us of your travels", "Hey, Mr. Rager, Mr. Rager,", "Tell me where you're going", "Tell us where you're headed", "I'm on my way to heaven","Mr. Rager, can we tag along","Can we take the journey?");//The chorus
    
    MrRagerPart4();//The fourth part of the song
    
    MrRagerChorus("Hey, Mr. Rager, Mr. Rager,","Tell me where you're going","Tell us where you're headed","Off on adventure", "Mr. Rager, tell me some of your stories", "Tell us of your travels", "Hey, Mr. Rager, Mr. Rager,", "Tell me where you're going", "Tell us where you're headed", "I'm on my way to heaven","Mr. Rager, can we tag along","Can we take the journey?");//The chorus
    
    //The next part of the song after the chorus, this is the 6th part of the song
    cout<<"Oh oh oh oh oh oh oh oh oh oh oh"<<endl;
    cout<<"Oh oh oh oh oh oh oh oh oh oh oh"<<endl;
    cout<<"Can we take that journey?"<<endl;
    cout<<"Oh oh oh oh oh oh oh oh oh oh oh"<<endl;
    cout<<"Oh oh oh oh oh oh"<<endl;
    cout<<" "<<endl;
    
    MrRagerChorus("Hey, Mr. Rager, Mr. Rager,","Tell me where you're going","Tell us where you're headed","Off on adventure", "Mr. Rager, tell me some of your stories", "Tell us of your travels", "Hey, Mr. Rager, Mr. Rager,", "Tell me where you're going", "Tell us where you're headed", "I'm on my way to heaven","Mr. Rager, can we tag along","Can we take the journey?");//The chorus
    
    //This is the last part of the song
    cout<<"Can we take that journey?"<<endl;
    cout<<"I'm off on an adventure"<<endl;
    cout<<"Hey, Mr. Rager"<<endl;
    cout<<"Hey, Mr. Rager"<<endl;
    cout<<"I'm on my way to heaven"<<endl;
    cout<<"(Hey, Mr. Rager)"<<endl;
    cout<<"Hey, Mr. Rager"<<endl;
    cout<<"Hey"<<endl;
}