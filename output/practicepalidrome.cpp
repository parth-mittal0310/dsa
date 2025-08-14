#include<iostream>
using namespace std;
int main()
{
    int n,dup,rev,ld;
    rev = 0;
    cout<<"enter the number:";
    cin>>n;
    dup = n;
    while(n>0)
    {
        ld = n % 10;
        n = n/10;
        rev = (rev * 10) + ld;
    }
    if (rev == dup)
    {
        cout<< "number is palindrome"<< endl;
    }
    else{
        cout<<"this is not palindrome";
    }
    return dup;
}