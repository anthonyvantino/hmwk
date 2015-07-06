/* 
 * File:   main.cpp
 * Author: Anthony Vantino
 * Created on July 2, 2015, 12:10 AM
 * Purpose: What band is the EMS
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins here!
int main(int argc, char** argv) {
 //Declare Variables
    float wavL; //Wave length in meters
    
    //Loop
    do{
        //Prompt for input
        cout<<"Input the wave length in meters"<<endl;
        cin>>wavL;
        //Output the spectrum band
        if      (wavL>1e-2 )cout<<wavL<<"(mtrs)Radiowave band "<<endl;
        else if (wavL>1e-3 )cout<<wavL<<"(mtrs)Microwave band "<<endl;
        else if (wavL>7e-7 )cout<<wavL<<"(mtrs)Infared band "<<endl;
        else if (wavL>4e-7 )cout<<wavL<<"(mtrs)Visible Light band "<<endl;
        else if (wavL>1e-8 )cout<<wavL<<"(mtrs)Ultraviolet band "<<endl;
        else if (wavL>1e-11)cout<<wavL<<"(mtrs)X Rays band "<<endl;
        else                cout<<wavL<<"(mtrs)Gamma Rays band "<<endl;
        
    }while(wavL!=1);
    
    //Winter is Coming!
    return 0;
}

