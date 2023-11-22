#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    int x=0;
	   for(int i=0;i<n;i++)
	   {
	       cin>>a[i];
	       x^=a[i];
	   }
	   int ans=x;
	   for(int i=0;i<n;i++)
	   ans=min(ans,x^a[i]);
	   cout<<(ans)<<endl;
	}
	return 0;
}
