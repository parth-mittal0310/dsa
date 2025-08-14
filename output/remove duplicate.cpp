#include<iostream>
using namespace std;
int main()
{
    int n;
    int arr[50];
    cout<<"enter the value of n::";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int i=0;
    for(int j=0;j<n;j++)
    {
        if(arr[j]!=arr[i])
        {
            arr[i+1]=arr[j];
            i++;
        }
    }
    return (i+1);
}