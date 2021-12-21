#include <iostream>

using namespace std;

int main(){
	int pos=0,neg=0,zero=0,a;
	for(int b=0;b<10;b++){
		cin>>a;
		if(a>0)
			pos++;
		if(a<0)
			neg++;
		if(a==0)
			zero++;
	}
	cout<<"pos:"<<pos<<" neg:"<<neg<<" zero:"<<zero;
	return 0;
}
