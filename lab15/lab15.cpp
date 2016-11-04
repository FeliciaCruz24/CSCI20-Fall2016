#include<iostream>
#include<string>
using namespace std;

int main(){
    int MENU_ITEMS;//numbers of meals
    int i = 0;
    int menuChoices[MENU_ITEMS];//user inputs order number they want
    char endMenu = '#';
    cout<<"Menu Items:"<<endl;
    
    //menu
    cout<<"1. Garlic Fries"<<endl;
    cout<<"2. Chili Cheese Fries"<<endl;
    cout<<"3. Chili Cheese Nachos"<<endl;
    cout<<"4. Regular Nachos"<<endl;
    cout<<"5. Pepperoni Pizza"<<endl;
    cout<<"6. Cheese Pizza" <<endl;
    cout<<"7. Bacon Cheeseburger"<<endl;
    cout<<"8. Soda" <<endl;
    cout<<"9. Lemonade"<<endl;
    cout<<"10. Water"<<endl;
    cout<<endl;
    
    cout<<"What would you like to order? Type the number of the item you want. When you are done type '#'."<<endl;//directions
    cout<<"Items:"<<endl;
    //as long as the user doesnt type # they can order
        for(i = 0; i <20; i++){
            cin>>menuChoices[i];//user's menu choices
            if(menuChoices[i] == endMenu){
            cout<<"Thankyou for your order.";//when user types # this happens
            }
        }
        
}
