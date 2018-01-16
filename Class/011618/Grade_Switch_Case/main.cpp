/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 16, 2016, 10:38 AM
 * Purpose:  Grade with a Switch Case
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    short score;
    char grade;
    
    
    //Input or initialize values Here
    cout<<"This program gives a grade"<<endl;
    cout<<"Typesin an integer score from 0 to 100 "<<endl;
    cin>>score;
    
    
    //Process/Calculations Here
  
    switch (score/10) {
        case 10: score ==100?grade='A' : grade = 'I'; break;
        case 9:  grade='A'; break;
        case 8 : grade='B'; break;
        case 7 : grade='C'; break;
        case 6 : grade='D'; break;
        case 5 : case 4: case 3: case 2: case 1: grade='F'; break;
        case 0 : score <0?grade='I':grade= 'F';
        deafulat: grade='I';
                     }
                     
    
    //Output Located Here
    cout<<"YOur score = "<<score<<" and your grade = "<<grade<<endl;
    
    //Exit
    return 0;
}

