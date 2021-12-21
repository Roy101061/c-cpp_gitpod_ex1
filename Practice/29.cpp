#include <iostream>

using namespace std;

int main(){
	int list[10];
	int tran;
	for(int a=0;a<10;a++)
		cin>>list[a];
	for(int b=0;b<10;b++){
		for(int c=0;c<b;c++){
			if(list[b]<list[c]){
				tran=list[b];
				list[b]=list[c];
				list[c]=tran;
			}
		}
	}
	for(int d=0;d<10;d++)
		cin>>list[d];
	return 0;
}
