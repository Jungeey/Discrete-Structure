/*
Write a program that takes two or more sets as input and produces their
Cartesian product as output.
*/

#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"How many elements are there in Set A?";
    cin>>n;
    int a[n];
    for(int i=0; i<n;i=i+1){
        cin>>a[i];
    }
   
    cout<<"How many elements are there in Set B?";
    cin>>m;
    int b[m];
    for(int i=0; i<m;i=i+1){
        cin>>b[i];
    }
   
    for(int i=0;i<n;i=i+1){
        for(int j=0;j<m;j=j+1){
            cout<<"("<<a[i]<<","<<b[j]<<")"<<" , ";
        }
    }
    return 0;
}
