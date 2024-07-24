#include <iostream>
#include <string>
//#include<utility>
#include <vector>
using namespace std;

void inputTask(vector<pair<string,bool>>&tasks){
    cout<<"enter task\n";
    string task;
    getline (cin, task);
    tasks.push_back({task,0});

    cout<<"task added succesfully\n";
}

void viewtask(vector<pair<string,bool>>&tasks){
    cout<<"Sno.          status             tasks\n";
    for(int i=0;i<tasks.size();i++){
        string status;
        if(tasks[i].second)
            status="completed";
        else{
            status="pending";
        }
        cout<<i+1<<"             "<<status<<"             "<<tasks[i].first<<endl;
    }
}
int main(){
    vector<pair<string,bool>> tasks;
    inputTask(tasks);
    viewtask(tasks);
    
}