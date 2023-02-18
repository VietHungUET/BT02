#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
for(int i=1;i<=n;i++)
{
  for(int j=i;j<=n+i-1;j++)
    {
       if(j>n)
       {
        cout<<j-n<<" ";
       }
       else cout<<j<<" ";

    }
cout<<endl;
}

}
