#include <iostream>
#include <math.h>

using namespace std;

int main(){
	double a,b,c,ans1,ans2,check;
	cin>>a>>b>>c;
	check=b*b-4*a*c;
	if(check>0){
		ans1=(-b+sqrt(b*b-4*a*c))/a/2;
		ans2=(-b-sqrt(b*b-4*a*c))/a/2;
		cout<<"Two different roots x1="<<ans1<<" , x2="<<ans2<<endl;
	}
	else if(check==0){
		ans1=(-b+sqrt(b*b-4*a*c))/a/2;
		cout<<"Two same roots x="<<ans1<<endl;
	}
	else
		cout<<"No real root"<<endl;
	return 0;
}
