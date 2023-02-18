#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int before=n;

  while(cin>>n)
  {
   if(n!=before)
   {
    cout<<before<<" ";
    before=n;
   }
   if(n<0) {cout<<n;break;}
  }


}
