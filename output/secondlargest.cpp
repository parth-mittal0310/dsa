#include<iostream>
#include<climits>
using namespace std;
int main()
{
     int n,largest,second;
     int arr[50];
     cin>>n;
     for(int j=0;j<n;j++)
     {
        cin>>arr[j];
     }
     largest = arr[0];
     for(int i=0 ; i<n ; i++)
     {
        if(arr[i]>largest)
        {
            largest = arr[i];
        }
     }
    cout<<"largest number is::"<<largest<<endl;
    second = INT_MIN;
    for(int j=0 ; j<n ; j++)
    {
        if(arr[j]<largest && arr[j]>second)
        {
            second= arr[j];
            
        }
    }
        if(second == INT_MIN)
        {
            cout<<"their is no valid output:"<<endl;
        }
        else

        {
            cout<<"second largest number is ::"<<second;
        }
        
    }


