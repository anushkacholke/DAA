#include<iostream>
using namespace std;
int countZero(int arr[],int low,int high)
{
    if(low==high)
    {
        if(arr[low]==0)
        {
            return 1;
        }
        else{
            return 0;
        }
    }
    else{
        int mid=low+(high-low)/2;  //divide
        int left_count=countZero(arr,low,mid);  //conqure
        int right_count=countZero(arr,mid+1,high); //combine
        return left_count+right_count;
    }
}
int main()
{
    int arr[]={1,1,1,1,0,0};
    int arr1[]={1, 0, 0, 0, 0};
    int n=6;
    int n1=5;
    int res=countZero(arr,0,n-1);
    int res1=countZero(arr1,0,n1-1);
    cout<<"\nNo. of zeroesin arr: "<<res;
    cout<<"\nNo. of zeros in arr1: "<<res1;

}