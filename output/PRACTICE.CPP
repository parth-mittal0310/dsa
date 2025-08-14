#include<iostream>
using namespace std;
int main()
{
    int n,ld,count;
    cout<< "enter the number::";
    cin >> n;
    count = 0;
    while(n>0)
    {
        ld = n%10;
        count+=1;
        n = n/10;
    }
    cout << ld << count;
}
