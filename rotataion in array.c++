#include<iostream>
using namespace std;
int main()
{int n,i;//n represent the size of an array
cout<<"enter the size of array"<<"\n";
cin>>n;
int arr[n];
for(i=0;i<n;i++)
{
    cin>>arr[i];
}

    int j,arr1,r;//r denotes the rotation of an array element
    cout<<"enter the rotation of an array element"<<"\n";
    cin>>r;
    for(j=0;j<r;j++)//this loop test the condition for rotation
    {
        arr1=arr[0];
        for(i=0;i<5;i++)
        {
            if(i==(n-1))
            {
                arr[i]=arr1;
            }
            else
            {

        arr[i]=arr[i+1];
            }


        }
        }
for(i=0;i<n;i++)//this loop is used for ascess the element of an array
{cout<<"after two rotation="<<arr[i]<<"\n";
}
    }

