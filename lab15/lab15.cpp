/*Felicia Cruz
October 25th
This is a program that is a menu and the user chooses the items they want
*/
#include<iostream>
#include<string>
using namespace std;

int main(){
    int numberItems = 10;
    int i = 0;
    int orderAmount = 0;
    string menuItems[10] = {"Garlic Fries","Chili Cheese Fries", "Chili Cheese Nachos","Regular Nachos", "Pepperoni Pizza","Cheese Pizza", "Bacon Cheeseburger", "Soda", "Lemonade","Water"};
    string done;
    cout<<"Menu Items:"<<endl;
    
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
    
    cout<<"What would you like to order?"<<endl;
    for(i = 0; i <= numberItems; i++){
        orderAmount =0;
        while(orderAmount < 30){
            orderAmount++;
            cout<<"Item "<< orderAmount<<":";
            cin>>menuItems[i];
            if(menuItems[i] == "done"){
                cout<<"Thankyou for your order"<<endl;
                i = 12;
            }
        }
    }
    
    
}