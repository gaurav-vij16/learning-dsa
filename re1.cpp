#include<bits/stdc++.h>
using namespace std;

void print(int n , int i)
{
    if(n<i)
    return;

    else
    print(n,i+1);
    cout<<i<<" ";
}

int main()
{
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    print(n,1);
}