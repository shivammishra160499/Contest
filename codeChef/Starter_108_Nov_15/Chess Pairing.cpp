#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x;
	    cin>>n>>x;
	    if(x<=n)
	    cout<<0<<endl;
	    else
	    cout<<2*(x-n)<<endl;
	}
	return 0;
}
