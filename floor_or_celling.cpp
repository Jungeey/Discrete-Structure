/*
Write a program that takes a real number and produces is ceiling and floor
integers as output.
*/

#include<iostream>
using namespace std;
int main(){
    float n;
    int c,f;
    cout<<"Enter a number: ";
    cin>>n;
   
    if(n>0){
        c=n+0.999999;
        f=n;
    }
    else{
        f=n+0.999999;
        c=n;
    }
    cout<<"Celling: "<<c<<endl;
    cout<<"Floor: "<<f;
    return 0;
}
