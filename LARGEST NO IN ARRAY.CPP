#include<iostream>
using namespace std;
int main()
{
    int arr[100];
    int n;
    cin>>n;
    for(int j=0 ; j<n;j++)
    {
        cin>>arr[j];
    }
    int largest = arr[0];
    for(int i=0 ; i < 4;i++)
    {
        if(arr[i]>largest)
        {
            largest=arr[i];
        }
        
    }
     cout<<"largest number is::"<<largest;

}