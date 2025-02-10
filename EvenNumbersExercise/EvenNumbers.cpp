#include "EvenNumber.h"
#include <iostream>
using namespace std;
/*
Name:Henry He
Date:2/9
CSCI 2312
 */
//reminder bool only takes true (1) or false
 void generateNums(int maxNum ,bool evenOrOdds){
    //start at 1 because 0 isn't a odd number1
    for (int i = 1 ; i <= maxNum ; i++){
        if (evenOrOdds){ //if true then print evens
            if (i % 2 == 0){
                cout<<i<<" ";
            }
        }
        else{ //if false then print odds
            if (i % 2 != 0){
                cout<<i<<" ";
            }
        }
    }
    
}

 int main(){
    cout<<"Hello this program prints out in a range."<<endl;
    cout<<"Would you like your number to be odds or even?"<<endl;
    cout<<"type '0' for odds and '1' for evens"<<endl;
    bool evenOrOdds;
    cin>>evenOrOdds;
    cout<<"What is the max num?"<<endl;
    int maxNum;
    cin>>maxNum;
    cout << "Generated numbers: ";
    generateNums(maxNum,evenOrOdds);


 }