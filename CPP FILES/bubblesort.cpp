#include<iostream>
using namespace std;

main()
{
    int arr[20],temp;
    cout<<"\nEnter the numbers: \n";
    for(int i=0;i<10;i++)
    {
        cin>>arr[i];
    }
    cout<<endl<<endl;
    for(int j=10-1;j>=0;j--)
    {
        for(int k=0;k<=j;k++)
        {

            if(arr[k]>arr[k+1])
            {   temp=arr[k+1];
                arr[k+1]=arr[k];
                arr[k]=temp;
            }
        }
    }

    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";
    }


}
