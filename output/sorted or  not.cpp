#include<iostream>
using namespace std;
int main()
{
    int n;
    int arr[3];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    bool issorted =true;
    for(int j=1;j<n;j++)
    {
        if(arr[j]<arr[j-1])
        {
            issorted = false;
            break;
        }}
    if(issorted)
    {
        cout<<"true";

    }   
    else{
        cout<<false;
    } 
}