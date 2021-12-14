#include <iostream>

using namespace std;

int main(){
    float r;
    cin>>r;
    if(r>=0){
        cout<<"面積 = "<<r*r<<"π\n";
        cout<<"周長 = "<<2*r<<"π\n";
    }
    else
        cout<<"半徑需大於等於0";
	return 0;
}
