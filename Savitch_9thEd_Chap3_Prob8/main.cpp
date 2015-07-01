/* 
 * File:   main.cpp
 * Author: Anthony Vantino
 * Created on July 1, 2015, 11:02 AM
 * Purpose: Find pie
 */


#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
//User Libraries
 
//Global Constants
const float PI=4*atan(1);

//Function Prototypes
 
//Execution Begins!
int main(int argc, char** argv) {
    //Declare and initialize variables
    int nTerms = 2000000000;
    float apprxPI = 1;
    
    //Now calculate PI with a for-loop
    for(int i = 3, nTerm = 1; nTerm <= nTerms; i+=4, nTerm+=2){
        apprxPI+=(-1.0f/i+1.0f/(i+2));
    }
    apprxPI*=4;
    
    //Output the results and compare
    cout<<fixed<<showpoint<<setprecision(15);
    cout<<"Exact Value of PI = "<<PI<<endl;
    cout<<"The approvimate value of PI = "<<apprxPI<<endl;
    
    //Winter is Coming!
    return 0;
}

