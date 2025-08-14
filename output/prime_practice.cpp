#include<iostream>
using namespace std;
int main()
{
    int n;
    int count = 0;
    cout<<"enter the number::";
    cin>>n;
    if(n<0)
    {
        n= -n;
    }
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        cout<<"this is prime number::";
    }
    else{
        cout<<"this is not prime number::";
    }
}