#include <iostream>

using namespace std;

int main(){
    int me,other;
    cin>>me>>other;
    if(me>other)
        cout<<"自己比較大 "<<me<<"歲"<<endl;
    else if(me==other)
        cout<<"一樣大 "<<me<<"歲"<<endl;
    else
        cout<<"朋友比較大 "<<other<<"歲"<<endl;
    return 0;
}
