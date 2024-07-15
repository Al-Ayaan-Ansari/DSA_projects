#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;


//this is a number guesssing game that also keep track of no. of tries


int main(){
    srand( (unsigned) time(NULL));

    int guess=0;

    int random=(rand()%100)+1;

    cout<<"guess the no. from 1 to 100"<<endl;

    //it counts the no. of tries.

    int count=0;

    do{
        count++;

        cin>>guess;

        if(random>guess){

            cout<<"guess HIGHER"<<endl;
        }
        else if(random<guess){

            cout<<"guess LOWER"<<endl;
        }
        else{
            
            cout<<"YOU GUESSED CORRECT!! in "<<count<<" no. of tries"<<endl;
        }
        
    }while(guess!=random);
}
