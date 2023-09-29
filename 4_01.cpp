#include<iostream>
using namespace std;

int power(int x,int y){
	int result;
	if(y==0){
		return 1;
	}
	else{
	y=y-1;
	result=x*power(x,y);
	return result;
	}
}

int main(){
	int a,n;
	cout<<"Enter a base:";
	cin>>a;
	cout<<"Enter a power:";
	cin>>n;
	cout<<a<<"^"<<n<<" is: "<<power(a,n);
	return 0;
}
