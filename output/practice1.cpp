#include<iostream>
using namespace std;
int main()
{
    int n,rev,ld;
    cin>>n;
    if(n<0)
    {
        n = -n;
    }
    rev = 0;
    while(n>0)
    {
        ld = n%10;
        n = n/10;
        rev = (rev * 10)+ld;
    }
    cout<<rev;
}