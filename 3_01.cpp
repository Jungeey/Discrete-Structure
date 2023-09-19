#include<iostream>
using namespace std;

bool logicaland(bool x, bool y) {
    bool result = x && y;
    return result;
}

bool logicalor(bool x, bool y) {
    bool result = x || y;
    return result;
}

bool cond(bool x, bool y){
	if(y || !x){
		bool result=true;
		return result;
	}
	else{
		bool result=false;
		return result;
	}
}

bool bicond(bool x, bool y){
	if(x==y){
		bool result=true;
		return result;
	}
	else{
		bool result=false;
		return result;
	}
}


int main() {
    bool a[8] = {true, true, true, true, false, false, false, false};
    bool b[8] = {true, true, false, false, true, true, false, false};
    bool c[8] = {true, false, true, false, true, false, true, false};
	bool x1[8],x[8],y[8],result1[8],result2[8];
	
	cout<<"p\tq\tr\tp^!q\tp^!qvr\t!pvr\tp^!qvr -> !pvr\tp^!qvr <-> !pvr";
	
	for (int i = 0; i < 8; i++) {
		cout<<endl;
		cout<<a[i]<<"\t"<<b[i]<<"\t"<<c[i]<<"\t";
        
		x1[i] = logicaland(a[i], !b[i]);
        cout<<x1[i]<<"\t";
        
        x[i] = logicalor(x1[i], c[i]);
        cout<<x[i]<<"\t";
        
        y[i] = logicalor(!a[i],c[i]);
        cout<<y[i]<<"\t";
        
        result1[i]= cond(x[i],y[i]);
        cout<<result1[i]<<"\t\t";
        
        result2[i]= bicond(x[i],y[i]);
        cout<<result2[i]<<"\t";
    }
    
    return 0;
}
