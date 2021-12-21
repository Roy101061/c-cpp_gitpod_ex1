#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	int n,a=1,b=0;
	cin>>n;
	++n;
	while(n>a){
		while(a>b){
			cout<<"*";
			b++;
		}
		cout<<endl;
		a++;
		b=0;
	}
	return 0;
}
