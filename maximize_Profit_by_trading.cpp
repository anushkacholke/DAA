/*Implement a problem of maximize Profit by trading 
stocks based on given rate per day. 
Statement: Given an array arr[] of N positive integers 
which denotes the cost of selling and buying a stock on 
each of the N days. The task is to find the maximum 
profit that can be earned by buying a stock on or selling 
all previously bought stocks on a particular day. 
Input: arr[] = {2, 3, 5}                      Output: 5  
Input: arr[] = {8, 5, 1}                      Output: 0  */
#include<iostream>
#include<vector>
using namespace std;
int max_profit(vector<int>arr)
{
    int max_price=arr[0];
    int n=arr.size();
    for(int i=0;i<n;i++)
    {
       if(arr[i]>max_price)
       {
            max_price=arr[i];
            if(max_price>=arr[n-1])
            {
                return max_price-arr[0];
            }
       }
    }
    return 0;
}
int main()
{
    vector<int>arr={1,2,3,4,5};
    vector<int>arr1={8, 5, 1};
    cout<<max_profit(arr);
}