#include <iostream>
using namespace std;

int main(){
    string pass;
    cout<<"Enter password : ";getline(cin,pass,'\n');
    int security=0;
    const int CharSize = 256;
    char frequency[CharSize]={0};
    int Diversity=0;
    for(int i=0;i<(int)pass.size();i++){
        if(!frequency[(int)pass[i]]){
            Diversity++;
            frequency[(int)pass[i]]=1;
        }
    }
    security = Diversity*(int)pass.size();
    cout<<security<<endl;
    if(security <= 100){
        cout<<"weak"<<endl;
    }
    else if(security < 200){
        cout<<"Normal"<<endl;
    }
    else if(security >= 200){
        cout<<"Strong"<<endl;
    }
    return 0;
}
