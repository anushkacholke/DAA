#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>& arr,int low,int mid,int high)
{
    vector<int>temp;
    //for left half
    for(int i=low;i<=mid;i++)
    {
        if(arr[i]!=0)
        {
            temp.push_back(arr[i]);
        }
    }
    //for right high
    for(int i=mid+1;i<=high;i++)
    {
        if(arr[i]!=0)
        {
            temp.push_back(arr[i]);
        }
    }
    //cal no. of zeroes
    int count_zero=(high-low+1)-temp.size();

    //add zero at the end
    for(int i=0;i<count_zero;i++)
    {
        temp.push_back(0);
    }
    //copy sort ele backto orignal arr
    for(int i=low;i<=high;i++)
    {
        arr[i]=temp[i-low];
    }
}
void divideRecursionFun(vector<int>& arr,int low,int high)
{
    //base case
    if(low>=high)
    {
        return;
    }
    //mid to divide arr
    int mid=low+(high-low)/2;
    //recursion for left half
    divideRecursionFun(arr,low,mid);
    //recursion foe right half
    divideRecursionFun(arr,mid+1,high);
    //merge
    merge(arr,low,mid,high);
}
int main()
{
    vector<int>arr={1,2,0,4,3,0,5,0};
    int n=arr.size();
    divideRecursionFun(arr,0,n-1);
    cout<<"\nArray after moving all zero to end of the array: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}
