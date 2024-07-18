#include<iostream>
using namespace std;

void board( char arr[9] ){
    cout<<"     "<<"|"<<"     "<<"|"<<"     "<<endl;
    cout<<"  "<<arr[0]<<"  "<<"|"<<"  "<<arr[1]<<"  "<<"|"<<"  "<<arr[2]<<"  "<<endl;
    cout<<"_____"<<"|"<<"_____"<<"|"<<"_____"<<endl;
    cout<<"     "<<"|"<<"     "<<"|"<<"     "<<endl;
    cout<<"  "<<arr[3]<<"  "<<"|"<<"  "<<arr[4]<<"  "<<"|"<<"  "<<arr[5]<<"  "<<endl;
    cout<<"_____"<<"|"<<"_____"<<"|"<<"_____"<<endl;
    cout<<"     "<<"|"<<"     "<<"|"<<"     "<<endl;
    cout<<"  "<<arr[6]<<"  "<<"|"<<"  "<<arr[7]<<"  "<<"|"<<"  "<<arr[8]<<"  "<<endl;
    cout<<"     "<<"|"<<"     "<<"|"<<"     "<<endl;
    
}

void playermove(char arr[9],char player1){
    int number;
    do{
        cout<<"Enter the spot to place the marker (1-9): "<<endl;
        cin>>number;
        number--;
        if(arr[number]==' '){
            arr[number]=player1;
            break;
        }
    }while( !number > 0 || !number < 8);
}



bool playerwin(char arr[9],char player1,char player2){
    if((arr[0]!=' ')&& (arr[0]==arr[1])&&(arr[1]==arr[2])){
        arr[0]== player1 ? cout<<"PLAYER 1 WIN !!\n" : cout<<"PLAYER 2 WIN !!\n"; 
    }
    else if((arr[3]!=' ')&& (arr[3]==arr[4])&&(arr[4]==arr[5])){
        arr[3]== player1 ? cout<<"PLAYER 1 WIN !!\n" : cout<<"PLAYER 2 WIN !!\n"; 
    }
    else if((arr[6]!=' ')&& (arr[6]==arr[7])&&(arr[7]==arr[8])){
        arr[6]== player1 ? cout<<"PLAYER 1 WIN !!\n" : cout<<"PLAYER 2 WIN !!\n"; 
    }
    else if((arr[0]!=' ')&& (arr[0]==arr[3])&&(arr[3]==arr[6])){
        arr[0]== player1 ? cout<<"PLAYER 1 WIN !!\n" : cout<<"PLAYER 2 WIN !!\n"; 
    }
    else if((arr[1]!=' ')&& (arr[1]==arr[4])&&(arr[4]==arr[7])){
        arr[1]== player1 ? cout<<"PLAYER 1 WIN !!\n" : cout<<"PLAYER 2 WIN !!\n"; 
    }
    else if((arr[2]!=' ')&& (arr[2]==arr[5])&&(arr[5]==arr[8])){
        arr[2]== player1 ? cout<<"PLAYER 1 WIN !!\n" : cout<<"PLAYER 2 WIN !!\n"; 
    }
    else if((arr[0]!=' ')&& (arr[0]==arr[5])&&(arr[5]==arr[8])){
        arr[0]== player1 ? cout<<"PLAYER 1 WIN !!\n" : cout<<"PLAYER 2 WIN !!\n"; 
    }
    else if((arr[2]!=' ')&& (arr[2]==arr[5])&&(arr[5]==arr[6])){
        arr[2]== player1 ? cout<<"PLAYER 1 WIN !!\n" : cout<<"PLAYER 2 WIN !!\n"; 
    }
    else{
        return false;
    }
    return true;
}

bool tie(char arr[9]){
    for(int i=0;i<9;i++){
        if(arr[i]==' '){
            return false;
        }
    }
    cout<<"DRAW\n";
    return true;
}


int main(){
    cout<<"WELCOME TO A SIMPLE TIC_TAC_TOE GAME\n";
    cout<<"        by - Al Ayaan Ansari\n";
    bool again=true;

    while(again){
    char arr[9]={' ',' ',' ',' ',' ',' ',' ',' ',' '};
    char player1='X';
    char player2='O';
    bool start=true;
        board(arr);
        while(start){
            playermove(arr,player1);
            board(arr);
            if(playerwin(arr,player1,player2)){
                start=false;
                break;
            }
            if(tie(arr)){
                start=false;
                break;
            }            

            playermove(arr,player2);
            board(arr);
            if(playerwin(arr,player1,player2)){
                start=false;
                break;
            }
            if(tie(arr)){
                start=false;
                break;
            }

        }
        cout<<"play again ? 1 or 0\n";
        cin>>again;

    }
    cout<<"THANKS FOR PLAYING";
}