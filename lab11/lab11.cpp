/*Felicia Cruz
October 6th 2016
I am creating a program that will calculate the income tax, and amount owed or to be refunded for a person (or couple). 
The user will input their name, filing status (single or married), gross wages, salaries and tips, and the amount of tax withheld. then the program will calculate
their tax.
*/

#include<iostream>
#include<string>
using namespace std;

//Taxes for Individuals

float Single0_8925(int grossWage, int Withheld, string nameFirst, string nameLast){//Calculate the Invidual Tax $0 - $8925 
    grossWage = grossWage - 10000;//Calculate gross income
    float tax0_8925 = 0.0;//Tax
    float finalTax = 0.0;//Tax paid
    float finalRefund = 0.0;//Refund
    tax0_8925= grossWage* 0.1;//calculate the tax
    //This will calculate if the user has to pay taxes or if they are entitled to a refund
    if (Withheld < tax0_8925){
        finalTax = tax0_8925 - Withheld;
        cout<<"Total Tax Owed: $"<< finalTax<<endl;
        return finalTax;
    }
    else if (Withheld > tax0_8925){
        finalRefund = Withheld - tax0_8925;
        cout<<nameFirst<<" "<<nameLast<<" is entitled to a REFUND of $"<<finalRefund <<endl;
        return finalRefund;
        
    }
    return tax0_8925;
}
float Single8926_36250(int grossWage, int Withheld, string nameFirst, string nameLast){//Calculate the Invidual Tax $8926 - $36250
    grossWage = grossWage - 10000;//calculate gross income
    float tax8926_36250 = 0.0;//tax
    float finalTax = 0.0;//tax paid
    float finalRefund = 0.0;//refund
    tax8926_36250 = 892.50 +((grossWage - 8926)*.15);//calculate tax
    //This will calculate if the user has to pay taxes or if they are entitled to a refund
    if (Withheld < tax8926_36250){
        finalTax = tax8926_36250 - Withheld;
        cout<<"Total Tax Owed: $"<< finalTax<<endl;
        return finalTax;
    }
    else if (Withheld > tax8926_36250){
        finalRefund = Withheld - tax8926_36250;
        cout<<nameFirst<<" "<<nameLast<<" is entitled to a REFUND of $"<<finalRefund <<endl;
        return finalRefund;
        
    }
    return tax8926_36250;
}
float Single36251_87850(int grossWage, int Withheld, string nameFirst, string nameLast){//Calculate indivual tax $36251 - $87850
    grossWage = grossWage - 10000;//calculate gross income
    float tax36251_87850 = 0.0;//tax
    float finalTax = 0.0;//tax paid
    float finalRefund = 0.0;//refund
    tax36251_87850 = 4991.25 +((grossWage - 36250)*.25);//calculate tax
    //This will calculate if the user has to pay taxes or if they are entitled to a refund
    if (Withheld < tax36251_87850){
        finalTax = tax36251_87850 - Withheld;
        cout<<"Total Tax Owed: $"<< finalTax<<endl;
        return finalTax;
    }
    else if (Withheld > tax36251_87850){
        finalRefund = Withheld - tax36251_87850;
        cout<<nameFirst<<" "<<nameLast<<" is entitled to a REFUND of $"<<finalRefund <<endl;
        return finalRefund;
        
    }
    
    return tax36251_87850;
}
float Single87851_Above(int grossWage, int Withheld, string nameFirst, string nameLast){//Calculate Indivual Tax $87851 and Above
    grossWage = grossWage - 10000;//calcute gross income
    float tax87851_Above = 0.0;//tax
    float finalTax = 0.0;//tax paid
    float finalRefund = 0.0;// refund
    tax87851_Above = 17891.25 + ((grossWage - 87850)*.28);//calculate tax
    //This will calculate if the user has to pay taxes or if they are entitled to a refund
    if (Withheld < tax87851_Above){
        finalTax = tax87851_Above - Withheld;
        cout<<"Total Tax Owed: $"<< finalTax<<endl;
        return finalTax;
    }
    else if (Withheld > tax87851_Above){
        finalRefund = Withheld - tax87851_Above;
        cout<<nameFirst<<" "<<nameLast<<" is entitled to a REFUND of $"<<finalRefund <<endl;
        return finalRefund;
        
    }
    return tax87851_Above;
}
//Taxes for Married Couples
float Married0_17850(int grossWage, int Withheld, string nameFirst, string nameLast){// Calculate Married Tax $0 - $17850
    grossWage = grossWage - 20000;//calculate gross income
    float tax0_17850 = 0.0;//tax
    float finalTax = 0.0;//tax paid
    float finalRefund = 0.0;//refund
    tax0_17850 = grossWage*0.1;//calculate tax
    //This will calculate if the user has to pay taxes or if they are entitled to a refund
    if (Withheld < tax0_17850){
        finalTax = tax0_17850 - Withheld;
        cout<<"Total Tax Owed: $"<< finalTax<<endl;
        return finalTax;
    }
    else if (Withheld > tax0_17850){
        finalRefund = Withheld - tax0_17850;
        cout<<nameFirst<<" "<<nameLast<<" is entitled to a REFUND of $"<<finalRefund <<endl;
        return finalRefund;
        
    }
    return tax0_17850;
}
float Married17851_72500(int grossWage, int Withheld, string nameFirst, string nameLast){//Calculate Married $17851 - $72500
    grossWage = grossWage - 20000;//calculate gross income
    float tax17851_72500 = 0.0;//tax
    float finalTax = 0.0;//tax paid
    float finalRefund = 0.0;//refund
    tax17851_72500 = 1785 + ((grossWage - 17850)*.15);//calculate tax
    //This will calculate if the user has to pay taxes or if they are entitled to a refund
    if (Withheld < tax17851_72500){
        finalTax = tax17851_72500 - Withheld;
        cout<<"Total Tax Owed: $"<< finalTax<<endl;
        return finalTax;
    }
    else if (Withheld > tax17851_72500){
        finalRefund = Withheld - tax17851_72500;
        cout<<nameFirst<<" "<<nameLast<<" is entitled to a REFUND of $"<<finalRefund <<endl;
        return finalRefund;
        
    }
    return tax17851_72500;
}
float Married72501_Above(int grossWage, int Withheld, string nameFirst, string nameLast){//Calculate Married Tax $72501 and Above
    grossWage = grossWage - 20000;//calculate gross incomce
    float tax72501_Above = 0.0;//tax
    float finalTax = 0.0;//tax paid
    float finalRefund = 0.0;//refund
    tax72501_Above = 9982.50 + ((grossWage - 72500)*.28);//calculate tax
    //This will calculate if the user has to pay taxes or if they are entitled to a refund
    if (Withheld < tax72501_Above){
        finalTax = tax72501_Above - Withheld;
        cout<<"Total Tax Owed: $"<< finalTax<<endl;
        return finalTax;
    }
    else if (Withheld > tax72501_Above){
        finalRefund = Withheld - tax72501_Above;
        cout<<nameFirst<<" "<<nameLast<<" is entitled to a REFUND of $"<<finalRefund <<endl;
        return finalRefund;
        
    }
    return tax72501_Above;
}
int main(){
    string firstName; //user first name
    string lastName;//user last name
    string status;// user status
    int wage = 0;// user salary
    int taxWitheld = 0; //the tax withheld
    
    //The user enters their info and it is used to calculate the tax
    cout<<"Name: ";
    cin>>firstName>>lastName;
    cout<<"Filing Status: ";
    cin>>status;
    cout<<"Wage: $";
    cin>>wage;
    cout<<"Tax Witheld: $";
    cin>>taxWitheld;
    
    //This tells the user if they get a refund or have to pay tax. Also outputs their name and Adjusted gross income. For Individual Salary $0 - $8925
    if ((status == "Single" || status =="single") && (wage>=0 && wage<=8925)){
        cout<<" "<<endl;
        cout<<"Name: "<< firstName<<" "<<lastName<<endl; 
        cout<<"Total Gross Adjusted Income: $"<<wage<<endl;
        Single0_8925(wage, taxWitheld, firstName, lastName);//calls function for individual tax $0 -$8925
    }
    //This tells the user if they get a refund or have to pay tax. Also outputs their name and Adjusted gross income. For Individual Salary $8926 - $36250
    else if ((status == "Single" || status =="single") && (wage>=8926 && wage<=36250)){
        cout<<" "<<endl;
        cout<<"Name: "<< firstName<<" "<<lastName<<endl;
        cout<<"Total Gross Adjusted Income: $"<<wage<<endl;
        Single8926_36250(wage, taxWitheld, firstName, lastName);//calls funciton for individual tax $8926-$36250    
    }
    //This tells the user if they get a refund or have to pay tax. Also outputs their name and Adjusted gross income. For Individual Salary $36251 - $87850
    else if ((status == "Single" || status =="single") && (wage>=36251 && wage<=87850)){
        cout<<" "<<endl;
        cout<<"Name: "<< firstName<<" "<<lastName<<endl;
        cout<<"Total Gross Adjusted Income: $"<<wage<<endl;
        Single36251_87850(wage, taxWitheld, firstName, lastName);// calls function for individual tax $36251 -$87850
    }
    //This tells the user if they get a refund or have to pay tax. Also outputs their name and Adjusted gross income. For Individual Salary $87851 and above
    else if ((status == "Single" || status =="single") && (wage>=87851)){
        cout<<" "<<endl;
        cout<<"Name: "<< firstName<<" "<<lastName<<endl;
        cout<<"Total Gross Adjusted Income: $"<<wage<<endl;
        Single87851_Above(wage, taxWitheld, firstName, lastName);//calls function for individual tax $87851 and Above
    }
    //This tells the user if they get a refund or have to pay tax. Also outputs their name and Adjusted gross income. For Married Salary $0 - $17850
    else if ((status == "Married" || status =="married") && (wage>=0 && wage<=17850)){
        cout<<" "<<endl;
        cout<<"Name: "<< firstName<<" "<<lastName<<endl;
        cout<<"Total Gross Adjusted Income: $"<<wage<<endl;
        Married0_17850(wage, taxWitheld, firstName, lastName);//calls function for married tax $0 - $17850
    }
    //This tells the user if they get a refund or have to pay tax. Also outputs their name and Adjusted gross income. For Married Salary $17851- $72500
    else if ((status == "Married" || status =="married") && (wage>=17851 && wage<=72500)){
        cout<<" "<<endl;
        cout<<"Name: "<<firstName<<" "<<lastName<<endl;
        cout<<"Total Gross Adjusted Income: $"<<wage<<endl;
        Married17851_72500(wage, taxWitheld, firstName, lastName);//calls function for married salary $17851 - $72500
    }
    //This tells the user if they get a refund or have to pay tax. Also outputs their name and Adjusted gross income. For Married Salary $72501 above
    else if ((status == "Married" || status =="married") && (wage>=72501)){
        cout<<" "<<endl;
        cout<<"Name: "<< firstName<<" "<<lastName<<endl;
        cout<<"Total Gross Adjusted Income: $"<<wage<<endl;
        Married72501_Above(wage, taxWitheld, firstName, lastName);//calls function for married tax 72501 and above
    }
    
    
    
    
    
    
}