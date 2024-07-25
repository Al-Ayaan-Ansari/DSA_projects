#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define UNDERLINE "\033[4m"
#define CLOSEUNDERLINE "\033[0m"

void inputTask(vector<pair<string,bool>>&tasks){
    cout<<"enter task\n";
    string task;
    cin.ignore();
    getline (cin, task);
    tasks.push_back({task,0});

    cout<<"task added succesfully\n";
}

void viewtask(vector<pair<string,bool>>&tasks){
    cout<<UNDERLINE<<"Sno.           |status             |tasks\n"<<CLOSEUNDERLINE;
    for(int i=0;i<tasks.size();i++){
        if(tasks[i].second)
            cout<<i+1<<".             "<<"|completed"<<"          |"<<tasks[i].first<<endl;
        else{
            cout<<i+1<<".             "<<"|pending"<<"            |"<<tasks[i].first<<endl;
        }
    }
}

void marktask(vector<pair<string,bool>> &tasks){
    int mark;
    cout<<"mark the task that is completed\n";
    cin>>mark;
    tasks[mark-1].second =true;
}

void Removetask(vector<pair<string,bool>> &tasks){
    int mark;
    cout<<"enter the index of the task to be removed\n";
    cin>>mark;
    tasks.erase(tasks.begin()+mark-1);
}   



int main(){
    vector<pair<string,bool>> tasks;
    bool start=true;

    while(start){
        int input;
        cout<<"1.  Input a task\n";
        cout<<"2.  View the tasks\n";
        cout<<"3.  mark to be complete\n";
        cout<<"4.  Remove a task\n";
        cout<<"enter -1 to close the program\n";
        cout<<"enter option: \n";
        cin>>input;
        switch (input)
        {
        case  1:
            inputTask(tasks);
            viewtask(tasks);
            break;
        
        case  2:
            viewtask(tasks);
            break;
        
        case  3:
            marktask(tasks);
            viewtask(tasks);
            break;

        case  4:
            Removetask(tasks);
            viewtask(tasks);
            break;

        case -1:
            start = false;
            break;
        default:
            cout<<"please enter carefully\n";
            break;
        }
    }
}