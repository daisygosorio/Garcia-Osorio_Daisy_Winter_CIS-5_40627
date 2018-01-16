/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 16, 2016, 10:00 AM
 * Purpose:  Grade with an If statement
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
    if(score<  0||score > 100)grade='I';
    if(score>= 90&&score<=100)grade='A';
    if(score>= 80&&score<  90)grade='B';
    if(score>= 70&&score<  80)grade = 'C';
    if(score>= 60&&score<  70)grade = 'D';
    if(score<  60)            grade ='F';
    
  
    
    //Output Located Here
    cout<<"YOur score = "<<score<<" and your grade = "<<grade<<endl;
    
    //Exit
    return 0;
}

