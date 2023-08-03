/*
4. Write a program that takes name and age of a 5 persons as an input and
gives the degree of membership of the person as its output according to
following membership functions.
a. Degree of membership = 1 if age<=20
   Degree of membership = (30-age)/10 if age>20 and age<=30
   Degree of membership = 0 if age>30
b. Degree of membership = 1 if age<=15
   Degree of membership = (35-age)/20 if age>15 and age<=35
   Degree of membership = 0 if age>35
Perform set operations according to rules of fuzzy sets, on these
two sets.
*/

#include<iostream>
using namespace std;
int main(){
    int age[5];
    string name[5];
    for(int i=0;i<5;i=i+1){
        cout<<"Age of person no "<<i+1<<": ";
        cin>>age[i];
        
        cout<<"Name of person no "<<i+1<<": ";
        cin>>name[i];
    }
    
    float a;
    cout<<endl<<"According to Condition A"<<endl;
    for(int i=0; i<5;i=i+1){
        if(age[i]<=20){
        	a=1;
            cout<<"Degree of membership of "<<name[i]<<" is : "<<a<<endl;
        }
        else if(age[i]>20 && age[i]<=30){
        	a=(30.0-float(age[i]))/10.0;
            cout<<"Degree of membership of "<<name[i]<<" is : "<<a<<endl;
        }
        else{
        	a=0;
            cout<<"Degree of membership of "<<name[i]<<" is : "<<a<<endl;
        }
    }
    
    
    cout<<endl<<"According to Condition B"<<endl;
    for(int i=0; i<5;i=i+1){
        if(age[i]<=15){
        	a=1;
            cout<<"Degree of membership of "<<name[i]<<" is : "<<a<<endl;
        }
        else if(age[i]>15 && age[i]<=35){
        	a=(35.0-float(age[i]))/20.0;
            cout<<"Degree of membership of "<<name[i]<<" is : "<<a<<endl;
        }
        else{
        	a=0;
            cout<<"Degree of membership of "<<name[i]<<" is : "<<a<<endl;
        }
    }
    return 0;
}

