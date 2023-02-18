#include<bits/stdc++.h>
using namespace std;
int secretnumber()
{
    int n;
    srand((int)time(0));
    n=rand()%100;
    return n;
}
int nhapconsonguoichoi()
{
    int a;
    cout<<" Nhap mot con so"<<":"<<" ";
    cin>>a;
    return a;
}
void printanswer(int a, int b)
{
    if(a<b)
        cout<<"Too small"<<endl;
    else if(a>b)
        cout<<"Too big"<<endl;
    else
        cout<< "Correct"<<endl;
}
int main()
{
    int guess;
    int socandoan= secretnumber();
    do
    {

        guess=nhapconsonguoichoi();
        printanswer(guess,socandoan);
    }
    while(guess!=socandoan);



}
