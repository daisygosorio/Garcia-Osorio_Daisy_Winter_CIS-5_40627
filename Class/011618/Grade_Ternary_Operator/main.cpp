/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 16, 2016, 10:32 AM
 * Purpose:  Grade with an Terminary Operator 
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
    grade=(score<0)     ?'I':
          (score>100)   ?'I':
          (score>=90)   ?'A':
          (score>=80)   ?'B':
          (score>=70)   ?'C':
          (score>=60)   ?'D': 'F';
    
  
    
    //Output Located Here
    cout<<"YOur score = "<<score<<" and your grade = "<<grade<<endl;
    
    //Exit
    return 0;
}

