#include<iostream>
using namespace std;

int main(){
    string S;
    int length;
    cin>>S;
    length = S.length();
    for(int i=0; i<S.length(); i++){
        for(int j=1; j<=length; j++) {
            if(length!=0) {
                cout << S.substr(i, j) <<endl;
            }
        }
        length--;
    }
    return 0;
}