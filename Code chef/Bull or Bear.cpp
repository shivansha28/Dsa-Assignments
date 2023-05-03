#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int X,Y;
        cin>>X>>Y;
        if(X<Y){
            cout<<"PROFIT"<<endl;
        }
        else if(X==Y){
            cout<<"NEUTRAL"<<endl;
        }
        else{
            cout<<"LOSS"<<endl;
        }
    }
	return 0;
}
