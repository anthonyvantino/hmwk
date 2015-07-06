/* 
 * File:   main.cpp
 * Author: Anthony Vantino
 * Created on July 5, 2015, 12:43 PM
 * Purpose: Convert numbers into Roman Numeral
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
    int num;
    
    cout<<"Enter a number 1 - 10"<<endl;
    cin>>num;
    switch(num){
        case 1: cout<<"Roman Numeral: I"<<endl;
                break;
        case 2: cout<<"Roman Numeral: II"<<endl;
                break;
        case 3: cout<<"Roman Numeral: III"<<endl;
                break;
        case 4: cout<<"Roman Numeral: IV"<<endl;
                break;
        case 5: cout<<"Roman Numeral: V"<<endl;
                break;
        case 6: cout<<"Roman Numeral: VI"<<endl;
                break;
        case 7: cout<<"Roman Numeral: VII"<<endl;
                break;
        case 8: cout<<"Roman Numeral: VIII"<<endl;
                break;
        case 9: cout<<"Roman Numeral: IX"<<endl;
                break;
        case 10: cout<<"Roman Numeral: X"<<endl;
                break;
        default: cout<<"You did not enter a number 1 - 10"<<endl;        
    }
    //Winter is Coming!
    return 0;
}

