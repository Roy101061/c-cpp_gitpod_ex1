#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	int a,b,c,d,e;
	cin>>a>>b;
	if (a%2!=0)
		a++;
	if (b%2!=0)
		b--; 
	e=(b-a)/2+1;
	cout<<e<<endl;
    return 0;
}