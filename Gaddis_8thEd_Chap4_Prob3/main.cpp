/* 
 * File:   main.cpp
 * Author: Anthony Vantino
 * Created on July 5, 2015, 12:43 PM
 * Purpose: Find Magic Dates
 */
 
//System Libraries
#include <iostream>
using namespace std;
 
//User Libraries
 
//Global Constants
 
//Function Prototypes
 
//Execution begins here!
int main(int argc, char** argv) {
    //Declare Variables
    int mnth;
    int day;
    int yr;
    int magic;
    
    //Loop
    do{
        //Prompt user for inputs
        cout<<"Enter in a month (numerically)"<<endl;
        cin>>mnth;
        cout<<"Enter in a day"<<endl;
        cin>>day;
        cout<<"Enter in a yr (two digit)"<<endl;
        cin>>yr;
        
        //Output the Magic Date
        if      (magic=mnth*day )cout<<magic<<" this date is magic!"<<endl;
        else if (magic!=mnth*day )cout<<magic<<" this date is not magic!"<<endl;
        else{
            cout<<magic<<" this date is not magic"<<endl;
        }
    }while(magic!=0);
    
    //Winter is Coming!
    return 0;
}

