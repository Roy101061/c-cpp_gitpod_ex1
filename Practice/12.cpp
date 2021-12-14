#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	int a;
	cin>>a;
	if(a>=90)
	cout<<"A\n";
	else if(a>=80)
	cout<<"B\n";
	else if(a>=70)
	cout<<"C\n";
	else if(a>=60)
	cout<<"D\n";
	else
	cout<<"E\n";
    return 0;
}