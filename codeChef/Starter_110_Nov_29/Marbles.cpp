#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
            int a, b;
            cin >> a >> b;
            int n = max(a, b);
            if (a % b == 0)
                {
                    cout<<0;
                }
            else {
                int i=0;
                int m1=INT_MAX,m2=INT_MAX;
                for (i = 1; i < b; i++) {
                    if ((a+i)%(b-i)==0) {
                         m1=i;
                        break;
                    }
                }
                for (i = 1; i < a; i++) {
                    if ((a-i)%(b+i)==0) {
                         m2=i;
                        break;
                    }
                   
                
                }
              cout<<min(m1,m2);
            }
            cout<<endl;
        }
         return 0;
    }
   

