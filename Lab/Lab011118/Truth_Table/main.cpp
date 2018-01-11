/* 
 * File:   main.cpp
 * Author: Dr Mark E. Lehr
 * Created on January 11, 2018 1:15PM
 * Purpose:  To validate the truth table 
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
    bool x, y;
    
    //Initialize Variables
    //Generate the Heading of the Truth Table
    cout<<"X  Y  !X  !Y  X&&Y   X||Y   X^Y   X^Y^Y   X^Y^X"
            <<" !(x&&Y) !X||!Y  !(X||Y) !x&&!y "<<endl;
    
    //First Row
    x=true;
    y=true;
    cout<<(x ? 'T': 'F')<<"  ";
    cout<<(y ? 'T': 'F')<<"  ";
    cout<<(!x ? 'T' : 'F')<<"    ";
    cout<<(!y ? 'T' : 'F')<<"   ";
    cout<<(x&& y ? 'T' : 'F')<<"     ";
    cout<<( x||y ? 'T' : 'F')<<"      ";
    cout<<(x^y ? 'T': 'F')<<"      ";
    cout<<(x^y^y ? 'T': 'F')<<"       ";
    cout<<(x^y^x ? 'T': 'F')<<"       ";
    cout<<(!(x&&y) ? 'T' : 'F')<<"      ";
    cout<<(! x|| !y ? 'T': 'F')<<"        ";
    cout<<(!(x||y) ? 'T': 'F')<<"        ";
    cout<<(!x&&y ? 'T': 'F')<<" ";
    cout<<endl;
    
    //Second Row
    x=true;
    y=false;
    cout<<(x ? 'T': 'F')<<"  ";
    cout<<(y ? 'T': 'F')<<"  ";
    cout<<(!x ? 'T' : 'F')<<"    ";
    cout<<(!y ? 'T' : 'F')<<"   ";
    cout<<(x&& y ? 'T' : 'F')<<"     ";
    cout<<( x||y ? 'T' : 'F')<<"      ";
    cout<<(x^y ? 'T': 'F')<<"      ";
    cout<<(x^y^y ? 'T': 'F')<<"       ";
    cout<<(x^y^x ? 'T': 'F')<<"       ";
    cout<<(!(x&&y) ? 'T' : 'F')<<"      ";
    cout<<(! x|| !y ? 'T': 'F')<<"        ";
    cout<<(!(x||y) ? 'T': 'F')<<"        ";
    cout<<(!x&&y ? 'T': 'F')<<" ";
    cout<<endl;
    
    //Third Row
    x=false;
    y=true;
    cout<<(x ? 'T': 'F')<<"  ";
    cout<<(y ? 'T': 'F')<<"  ";
    cout<<(!x ? 'T' : 'F')<<"    ";
    cout<<(!y ? 'T' : 'F')<<"   ";
    cout<<(x&& y ? 'T' : 'F')<<"     ";
    cout<<( x||y ? 'T' : 'F')<<"      ";
    cout<<(x^y ? 'T': 'F')<<"      ";
    cout<<(x^y^y ? 'T': 'F')<<"       ";
    cout<<(x^y^x ? 'T': 'F')<<"       ";
    cout<<(!(x&&y) ? 'T' : 'F')<<"      ";
    cout<<(! x||!y ? 'T': 'F')<<"        ";
    cout<<(!(x||y) ? 'T': 'F')<<"        ";
    cout<<(!x&&y ? 'T': 'F')<<" ";
    cout<<endl;
    
    // fourth row 
    x=false;
    y=false;
    cout<<(x ? 'T': 'F')<<"  ";
    cout<<(y ? 'T': 'F')<<"  ";
    cout<<(!x ? 'T' : 'F')<<"    ";
    cout<<(!y ? 'T' : 'F')<<"   ";
    cout<<(x&& y ? 'T' : 'F')<<"     ";
    cout<<( x||y ? 'T' : 'F')<<"      ";
    cout<<(x^y ? 'T': 'F')<<"      ";
    cout<<(x^y^y ? 'T': 'F')<<"       ";
    cout<<(x^y^x ? 'T': 'F')<<"       ";
    cout<<(!(x&&y) ? 'T' : 'F')<<"      ";
    cout<<(! x||!y ? 'T': 'F')<<"        ";
    cout<<(!(x||y) ? 'T': 'F')<<"        ";
    cout<<(!x&&y ? 'T': 'F')<<" ";
    cout<<endl;
    //Output data
    
    //Exit stage right!
    return 0;
}