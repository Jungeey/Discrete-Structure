/*
1. Write a program that takes two or more sets as input and produces set
operations like union, intersection, difference and symmetric difference as
its output.
*/
#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"How many elements are there in Set A?";
    cin>>n;
    cout<<"Enter elements of Set A:"<<endl;
   
    int a[n];
    for(int i=0; i<n;i=i+1){
        cin>>a[i];
    }
   
    cout<<"How many elements are there in Set B?";
    cin>>m;
    cout<<"Enter elements of Set B:"<<endl;
   
    int b[m];
    for(int i=0; i<m;i=i+1){
        cin>>b[i];
    }
    int p;
    p=m+n;
    int inter[p],unioon[p];
    int count=0, counter=0;
    for(int i=0; i<n; i=i+1){
        for(int j=0; j<m; j=j+1){
            if(a[i]==b[j]){
                inter[count]=a[i];
                unioon[counter]=a[i];
                counter=counter+1;
                count=count+1;
            }
        }
    }
    int d_A,d_B;
    d_A=n-count;
    d_B=m-count;
    int diff_a[d_A],diff_b[d_B];
   
   int counter_diffa=0;
   int counter_diffb=0;
    for(int i=0;i<n;i=i+1){
         int check=0;
         
        for(int j=0;j<count;j=j+1){
            if(a[i]==inter[j]){
                check=check+1;
            }
        }
        if(check==0){
            diff_a[counter_diffa]=a[i];
            counter_diffa=counter_diffa+1;
            unioon[counter]=a[i];
            counter=counter+1;
        }
    }
   
    for(int i=0;i<m;i=i+1){
         int check=0;
        for(int j=0;j<count;j=j+1){
            if(b[i]==inter[j]){
                check=check+1;
            }
        }
        if(check==0){
            diff_b[counter_diffb]=b[i];
            counter_diffb=counter_diffb+1;
            unioon[counter]=b[i];
            counter=counter+1;
        }
    }
   
   
   int symm=counter_diffa+counter_diffb;
   int sym[symm];
   int counter_sym=0;
   for(int i=0;i<counter_diffa;i=i+1){
       sym[counter_sym]=diff_a[i];
       counter_sym=counter_sym+1;
   }
    for(int i=0;i<counter_diffb;i=i+1){
       sym[counter_sym]=diff_b[i];
       counter_sym=counter_sym+1;
   }

    cout<<endl;
    cout<<"Intersection: ";
    for(int i=0; i<count; i=i+1){
        cout<<inter[i]<<" ";
    }
   
    cout<<endl;

    cout<<"Union: ";
    for(int i=0; i<counter; i=i+1){
        cout<<unioon[i]<<" ";
    }
   
   
       cout<<endl;

    cout<<"Difference between A and B: ";
    for(int i=0; i<counter_diffa; i=i+1){
        cout<<diff_a[i]<<" ";
    }
   
    cout<<endl;
   
    cout<<"Difference between B and A: ";
    for(int i=0; i<counter_diffb; i=i+1){
        cout<<diff_b[i]<<" ";
    }
   
    cout<<endl;
   
    cout<<"Symmetric Difference: ";
    for(int i=0; i<counter_sym; i=i+1){
        cout<<sym[i]<<" ";
    }
   
    return 0;
}
