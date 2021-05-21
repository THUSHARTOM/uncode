#include<iostream>
using namespace std;

int main(){
    long long int n, newnum;
    int sum=0;
    cin>>n;
    newnum = n;
    while(newnum!=0){
        sum = int(sum) + int(newnum%10);
        newnum = newnum/10;
    }
    cout<<sum<<endl;
    return 0;
}