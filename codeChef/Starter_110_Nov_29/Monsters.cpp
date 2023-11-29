#include <iostream>
#include<bits/stdc++.h>
using namespace std;

// vector<bool>isPrime(1000001 + 1, true);
int isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            return 0; 
        }
    }
    return 1; 
}
 
int main() {
	// your code goes here
	
 
    int t;
    cin>>t;
    while(t--)
    {
        int h;
        cin>>h;
        int p=1;
        int step=0;
        while(p<=h)
        {
            if(isPrime(h)==1 or p==h)
            {
                cout<<step+1<<endl;
                break;
            }
            h-=p;
            p=p*2;
            step++;
            if(isPrime(h))
            {
                cout<<step+1<<endl;
               
                break;
            }
            if(h<p)
            cout<<"-1"<<endl;
            
        }
    }
	return 0;
}
