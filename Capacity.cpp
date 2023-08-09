#include<iostream>
using namespace std;
int main()
{
    int t,s,b;
    cin>>t>>s>>b;
    int c;
    c=(2*t*s*b*512)/1024;
    cout<<c<< " " <<"KB";
}