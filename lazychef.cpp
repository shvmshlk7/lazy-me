#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        int m,x,d;
        cin>>m>>x>>d;
        if(m*x>m+d)
        cout<<m+d<<endl;
        else 
        cout<<m*x<<endl;
    }
	return 0;
}
