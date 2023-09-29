#include<iostream>
using namespace std;
int npower(int b,int n,int m){
    if(n==0){
        return 1;
    }
    else if(n%2==0){
        return (npower(b,n/2,m)*npower(b,n/2,m))%m;
    }
    else{
        return (npower(b,n/2,m)*npower(b,n/2,m)%m*b%m)%m;
    }
}

int main(){
    int b,n,m;
    cout<<"Enter Base: ";
    cin>>b;
    cout<<"Enter Power: ";
    cin>>n;
    cout<<"Enter Mod: ";
    cin>>m;
    int result=npower(b,n,m);
    cout<<b<<"^"<<n<<" mod "<<m <<" = "<<result;
    
    return 0;
}
