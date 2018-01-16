/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 11th, 2018, 1:15 PM
 * Purpose:  Menu
 */

//System Libraries Here
#include <iostream>
#include <cstdlib> 
#include <ctime>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare variables
    int probNum;
    
    //Menu with input of choice
    cout<<"Choose from the following Menu"<<endl;
    cout<<"Problem 1 -> Gaddis_9Ed_Chapter4_Problem11_Math Tutor"<<endl;
    cout<<"Problem 2 -> Savtich_9Ed_Chapter3_Problem6_Fibonacci"<<endl;
    cout<<"Problem 3 -> Savtich_9Ed_Chapter3_Problem7_e to the x"<<endl;
    cout<<"Problem 4 -> Author_Edition_Chapter_Problem_Description 4"<<endl;
    cout<<"Problem 5 -> Author_Edition_Chapter_Problem_Description 5"<<endl;
    cout<<"Problem 6 -> Author_Edition_Chapter_Problem_Description 6"<<endl;
    cout<<"Problem 7 -> Author_Edition_Chapter_Problem_Description 7"<<endl;
    cout<<"Problem 8 -> Author_Edition_Chapter_Problem_Description 8"<<endl;
    cout<<"Problem 9 -> Author_Edition_Chapter_Problem_Description 9"<<endl;
    cout<<"Type 1 to 9 only"<<endl;
    cin>>probNum;
    
    //Output the results
    switch(probNum){
        case 1: {
                    //Set the random number 
                    srand(static_cast<unsigned int>(time(0) ) );

                    //Declare Variables
                    unsigned short op1, op2,result, answer;

                    //Initialize Variables
                    op1=rand()& 900+100;//There digit number
                    op2=rand()& 1000;// Any 1 to 3 Digit number

                    //Process/Map inputs to outputs
                    result=op1+op2;


                    //Output data
                    cout<<"Test your addition skills, solve the following"<<endl;
                    cout<<setw(5)<<op1<<endl;
                    cout<<" +"<<setw(3)<<op2<<endl;
                    cout<<"--------"<<endl<<" ";
                    cin>>answer;
                    cout<<(result==answer?"Correct":"Incorrect")<<endl;
                    break;
        }    
        case 2: {
                    //Declare Variables
                    unsigned int fi, fim1, fim2;

                    //Initialize Variables
                    fim1=1;
                    fim2=1;
                    cout<<fim2<<" , "<<fim1;

                    //Process/Map inputs to outputs
                    fi=fi+fim2;
                    cout<<", "<<fi;
                    fim2=fim1;
                    fim1=fi;

                    //Process/Map inputs to outputs 
                    fi=fi+fim2;
                    cout<<", "<<fi;
                    fim2=fim1;
                    fim1=fi;

                    //Process/Map inputs to outputs 
                    fi=fi+fim2;
                    cout<<", "<<fi;
                    fim2=fim1;
                    fim1=fi;

                    //Process/Map inputs to outputs 
                    fi=fi+fim2;
                    cout<<", "<<fi;
                    fim2=fim1;
                    fim1=fi;

                    //Process/Map inputs to outputs 
                    fi=fi+fim2;
                    cout<<", "<<fi;
                    fim2=fim1;
                    fim1=fi;


                    //Comparison of the ratio of Fibonacci to the Golden Ratio
                    cout<<endl<<endl<<"Ratio = "<<1.0f*fim1/fim2<<endl;
                    //Output data
                    ;break;
        }
        case 3: {
                    //Declare Variables
                    float aproxE, term, x;
                    int counter;

                    //Initialize Variables
                    aproxE=1.0f;
                    counter=1;
                    x=1.0f;
                    term=x/counter++;

                    //Process/Map inputs to outputs
                    aproxE+=term;
                    cout<<"e^"<<x<<" approximately = "<<aproxE<<endl; 
                    term*=x/counter++;

                    //Process/Map inputs to outputs
                    aproxE+=term;
                    cout<<"e^"<<x<<" approximately = "<<aproxE<<endl; 
                    term*=x/counter++;

                    //Process/Map inputs to outputs
                    aproxE+=term;
                    cout<<"e^"<<x<<" approximately = "<<aproxE<<endl; 
                    term*=x/counter++;

                    //Process/Map inputs to outputs
                    aproxE+=term;
                    cout<<"e^"<<x<<" approximately = "<<aproxE<<endl; 
                    term*=x/counter++;

                    //Process/Map inputs to outputs
                    aproxE+=term;
                    cout<<"e^"<<x<<" approximately = "<<aproxE<<endl; 
                    term*=x/counter++;

                    //Output data
                    cout<<"e^ "<<x<<"      exactly = "<<exp(x)<<endl;
                            break;
        }
        case 4: {
            cout<<"Put problem 4 here "<<endl;break;
        }
        case 5: {
            cout<<"Put problem 5 here "<<endl;break;
        }
        case 6: {
            cout<<"Put problem 6 here "<<endl;break;
        }
        case 7: {
            cout<<"Put problem 7 here "<<endl;break;
        }
        case 8: {
            cout<<"Put problem 8 here "<<endl;break;
        }
        case 9: {
            cout<<"Put problem 9 here "<<endl;break;
        }
        default:cout<<"You choose to exit"<<endl;
    }
   
    //Exit
    return 0;
}

