/* 
 * File:   main.cpp
 * Author: Anthony Vantino
 * Created on July 1, 2015, 11:02 AM
 * Purpose: Find your monthly payment on loan
 */


#include <iostream>
#include <iomanip>
using namespace std;
//User Libraries
 
//Global Constants
 
//Function Prototypes
 
//Execution Begins!
int main(int argc, char** argv) {
    //Declare variable
    unsigned short loan = 10000; //Loan Amount
    float intrst = 0.01f;        //Interest Rate
    unsigned char  numPay = 36;  //Number of Payments
    float monPay;                //How much the monthly payment is
    float temp = 1.0f;           //Intermediate vale found in Monthly Payment equation
    float cstLoan;               //Cost of the loan in $'s
    float totCost;               //Total paid back to lender
    
    //Calculate the intermediate value
    float onePlsi = (1+intrst);
    for(int months=1; months<=numPay;months++){
        temp*=(1+intrst);
    }
    
    //Calculate the monthly payment
    monPay = intrst * temp * loan / (temp-1);
    monPay = static_cast<int>(monPay * 100) / 100.0f; //Exact amount in pennies
    totCost = numPay * monPay;
    cstLoan = totCost - loan;
    
    //Output Results
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout<<"Loan Amount:          $"<<setw(8)<<loan*1.0f<<endl;
    cout<<"Monthly Interest Rate: "<<setw(8)<<intrst*100<<"%"<<endl;
    cout<<"Number of Payments     "<<setw(8)<<static_cast<int>(numPay)<<endl;
    cout<<"Monthly Payment       $"<<setw(8)<<monPay<<endl;
    cout<<"Amount Paid Back:     $"<<setw(8)<<totCost<<endl;
    cout<<"Interest Paid:        $"<<setw(8)<<cstLoan<<endl;
    
    //Winter is Coming!
    return 0;
}

