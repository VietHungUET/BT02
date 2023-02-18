#include<bits/stdc++.h>
using namespace std;
bool kt(int n)
{
 if(n<2) {return 0;}
 else
 for(int i=2;i<=sqrt(n);i++)
 {
  if(n%i==0) return 0;
 }
return 1;
}
int main()
{

int n;
cin>>n;
if(kt(n)) cout<<"YES";
else cout<<"NO";
}
