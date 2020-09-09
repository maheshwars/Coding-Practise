#include<iostream>
using namespace std;

main()
{
    int arr[10],temp;
    cout<<"Enter the array elements\n";
    for(int i=0;i<=10-1;i++)
    {
        cin>>arr[i];
    }
    cout<<endl<<endl;
    for(int j=0;j<10-1;j++)
    {
        for(int k=j+1;k<10;k++)
        {
            if(arr[j]>arr[k])
			{
				temp=arr[j];
				arr[j]=arr[k];
				arr[k]=temp;
			}
        }

    }
    for(int i=0;i<=10-1;i++)
    {
        cout<<arr[i];

}}


