#include<iostream>
using namespace std;
int main()
{
    int arr[100];
    int n;
    cin>>n;
    for( int i=0 ; i<n ; i++)
    {
        cin>>arr[i];
    }
    int largest = arr[0];
    for( int j = 0;j<n; j++)
    {
        if(arr[j]>largest)
        {
            largest = arr[j];
        }
    }
    cout<<"largest number is::"<<largest;
}

int function (int a , int b){
    return a+b ;
}
