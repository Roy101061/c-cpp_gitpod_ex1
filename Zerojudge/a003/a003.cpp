#include <iostream>
using namespace std;
int main(){
	int a,b,c;
	cin>>a>>b;
	c=(a*2+b)%3;
	switch (c){
		case 0:{
			cout<<"普通";
			break;
		}
		case 1:{
			cout<<"吉";
			break;
		}
		default:
			cout<<"大吉";
	}
}