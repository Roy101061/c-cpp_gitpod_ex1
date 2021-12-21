#include <iostream>

using namespace std;

int main(){
	int list[5];
	int t;
	for(int a=0;a<5;a++)
		cin>>list[a];
	for(int a=0;a<5;a++)
		t+=list[a];
	cout<<"average:"<<(t/5);
	return 0;
}
