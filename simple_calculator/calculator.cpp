#include<iostream>
using namespace std;

int main(){

    bool start=true;
    cout<<"welcome to a simple calculator"<<endl<<endl<<endl;
    cout<<"you can use like a sentence with only 2 number like (34*34),45-23,etc"<<endl<<endl<<endl;

    while(start){
        int no1;
        int no2;
        char op;
        int ans;
        cout << "enter number 1 "<<endl;
        cin >> no1;
        cout << "enter the operation you want to do "<<endl;
        cin >> op;
        cout << "enter number 2 "<<endl;
        cin >> no2;
        if(op=='+'){

            ans=no1+no2;
            
        }
        else if(op=='-'){

            ans=no1-no2;

        }
        else if(op=='/'){

            if(no2==0){
                cout<<"Cannot divide by 0 "<<endl;
            }

            ans=no1/no2;

        }
        else if(op=='%'){

            if(no2==0){

                cout<<"Cannot divide by 0 "<<endl;

            }
            
            ans=no1%no2;

        }
        else if(op=='p'){

            if(no2==0){

                ans=1;

            }
            for(int i=0;i<no2;i++){

                ans*=no1;

            }
                }
        else if(op=='*'){

            ans=no1*no2;
        }
        else{

            cout<<"enter valid input please"<<endl;

        }
        cout<<"the ans is "<<ans<<" "<<endl;

        cout<<"want to use again ? 1 or 0"<<endl;

        cin>>start;



    }
    cout<<"Thank you for using";
}