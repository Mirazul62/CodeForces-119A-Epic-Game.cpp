#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,n,c1=0,c2=0;
    cin>>a>>b>>n;
    while(n>0)
    {
          if(n==0)
                break;
        n-=__gcd(a,n);
        if(n>=0)
            c1++;
          ///  cout<<n<<endl;
             if(n==0)
                break;

        n-=__gcd(b,n);
        if(n>=0)
            c2++;
         ///   cout<<n<<endl;

           if(n==0)
                break;
    }
   /// cout<<c1<<" "<<c2;
    if(c1>c2)
        cout<<"0";
    else
        cout<<"1";
}
