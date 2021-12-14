#include <iostream>

using namespace std;

int main(){
    int a,b,c,d,ans;
    cin>>a>>b>>c>>d;
    ans=a;
    if(b>ans)
        ans=b;
    if(c>ans)
        ans=c;
    if(d>ans)
        ans=d;
    cout<<"最大的數是:"<<ans<<endl;
	return 0;
}
