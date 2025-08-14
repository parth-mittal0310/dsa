#include<iostream>
using namespace std;
int main()
{
    int n,rev,sum,ld,dup;
    sum = 0;
    cout<<"enter the number:";
    cin>>n;
    dup = n;
    while(n>0)
    {
        ld = n%10;
        sum = sum +(ld*ld*ld);
        n = n/10;
        rev = (rev * 10)+ld;
    }
    if (sum == dup)
    {
        cout<<"this is armstrong number";
    }
    else 
    {
        cout<<"this is not armstrong number";
    }

}