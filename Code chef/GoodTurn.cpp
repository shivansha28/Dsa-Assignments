#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int X,Y;
	    cin>>X>>Y;
	    if((X+Y)>6){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
