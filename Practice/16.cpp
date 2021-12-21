#include <iostream>

using namespace std;

int main(){
	int a,t;
	for(int b=0;b<10;b++){
		cin>>a;
		t+=a;	
	}
	cout<<"average:"<<(t*1.0/10); 
	return 0;
}
