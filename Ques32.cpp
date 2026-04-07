/*A stock market app tracks first and second highest stock values. Implement a solution to find the largest
and second largest number in an array of size 5.*/

#include<iostream>
using namespace std;

int main()
{
    int arr[5];
    int max1, max2;

    cout<<"Enter 5 numbers:\n";

    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }

    max1 = max2 = arr[0];

    for(int i=1;i<5;i++)
    {
        if(arr[i] > max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if(arr[i] > max2 && arr[i] != max1)
        {
            max2 = arr[i];
        }
    }

    cout<<"Largest number = "<<max1<<endl;
    cout<<"Second largest number = "<<max2<<endl;

    return 0;
}