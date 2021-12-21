#include <iostream>

using namespace std;

int main(){
	int a,b;
	cin>>a;
	while(a>=0){
		if(a<=1000)
			b=0;
		else if(a<=2000)
			b=a*0.05;
		else if(a<=3000)
			b=a*0.1;
		else if(a<=6000)
			b=a*0.15;
		else
			b=a*0.2;
		a=a-b;
		cout<<"Tax:"<<b<<" Left:"<<a<<endl;
		cin>>a;
	}
	return 0;
}
