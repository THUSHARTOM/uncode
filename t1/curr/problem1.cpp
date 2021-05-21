#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    long long var;
    if(n%2==0){
        var =0;
        var = (n*(n+1))/2;
        cout<<"Even, Sum till n = "<<var;
    }
    else{
        var=1;
        for(int i=n; i>0;i--){
            var=var*i;
        }
        cout<<"Odd, factorial of n = "<<var;

    }
    return 0;
}