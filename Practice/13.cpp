#include <iostream>

using namespace std;

int main(){
	int a,b;
	char c;
	cin>>a>>b>>c;
	if(c='+')
		cout<<a<<c<<b<<"="<<(a+b);
	else if(c='-')
		cout<<a<<c<<b<<"="<<(a-b);
	else if(c='*')
		cout<<a<<c<<b<<"="<<(a*b);
	else if(c='/')
		cout<<a<<c<<b<<"="<<(a/b);
	else
		cout<<"Please enter + or - or * or /";
	return 0;
}
