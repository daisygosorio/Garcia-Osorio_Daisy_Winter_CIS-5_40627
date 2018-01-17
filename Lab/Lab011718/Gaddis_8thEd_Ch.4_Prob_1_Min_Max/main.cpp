/* 
 * File:   main.cpp
 * Author: Daisy Garcia-Osorio
 * Created on January 17, 2018, 1:30 PM
 * Purpose: Minimum and Maximum Program 
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float nmb1, nmb2, max, min, small, big;
    
    //Initialize Variables
    
    //Process/Map inputs to outputs
    
   
        
    //Output data
    cout<<"Enter first number"<<endl;
    cin>>nmb1;
    cout<<"Enter second number"<<endl;
    cin>>nmb2;
    //Calculate which of the two numbers is the Minimum and the Maximum 
    max = (nmb1>=nmb2) ? nmb1 : nmb2;
    cout<<"Maximum ="<<max<<endl;
    min= (nmb1>=nmb2) ? nmb2 :nmb1;
    cout<<"Minimum = "<<min<<endl;
    
    //Exit stage right!
    return 0;
}