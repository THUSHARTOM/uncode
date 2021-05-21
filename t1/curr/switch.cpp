#include<iostream>
using namespace std;

int main(){
    char input;
    cin>>input;
    switch(input){
        case "a":
            cout<<"Im A"<<endl;
        case "b":
            cout<<"Im B"<<endl;
        case "c":
            cout<<"Im C"<<endl;
        default:
            cout<<"I have no name"<<endl;
    }
}