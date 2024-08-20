/*Implement a problem of move all zeroes to end of 
array.
Statement: Given an array of random numbers, Push all the zero’s 
of a given array to the end of the array. For example, if the given 
arrays is {1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0}, it should be changed to {1, 9, 
8, 4, 2, 7, 6, 0, 0, 0, 0}. The order of all other elements should be 
same.
Input : arr[] = {1, 2, 0, 4, 3, 0, 5, 0};
Output : arr[] = {1, 2, 4, 3, 5, 0, 0, 0};*/
#include<iostream>
using namespace std;
int push_zero(int a[],int n)
{
    int i=0;
    for(int j=0;j<n;j++)
    {
        if(a[j]!=0)
        {
            swap(a[j],a[i]);
            i++;
        }
    }
    for(int k=0;k<n;k++)
    {
        cout<<a[k]<<" ";
    } 
    cout<<"\n";
}
int main()
{
    int arr[] = {1, 2, 0, 4, 3, 0, 5, 0};
    int n=sizeof(arr)/sizeof(int);
    push_zero(arr,n);
    int num;
    cout<<"\nEnter num to find square root of rhat no. :";
    cin>>num;
    int sq=num*num;
    cout<<sq;
}