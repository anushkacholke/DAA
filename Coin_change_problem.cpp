/*Implement Coin Change problem. 
Statement :Given an integer array of coins[ ] of size N representing different types of currency and an 
integer sum, The task is to find the number of ways to make sum by using different combinations from coins[].   
Note: Assume that you have an infinite supply of each type of coin.  
Input: sum = 4, coins[] = {1,2,3},                  Output: 4 
Input: sum = 10, coins[] = {2, 5, 3, 6}           Output: 5*/
#include<iostream>
#include<vector>
using namespace  std;
int coinChange(int coins[],int sum,int n)
{
    vector<int>dp(sum+1,0);
    dp[0]=1;
    //update dp[] array for each coin
    for(int i=0;i<n;i++)
    {
        for(int j=coins[i];j<=sum;j++)
        {
            dp[j]+=dp[j-coins[i]];
        }
    }
    return dp[sum];
}
int main()
{
    //for 1st input
    int coins[]={1,2,3};
    int n=3;
    int sum=4;
    cout<<"\nNumber of ways to make sum "<<sum<<" is "<<coinChange(coins,sum,n);

    //for 2nd input
    int coins1[]={2,5,3,6};
    int n1=4;
    int sum1=10;
    cout<<"\nNumber of ways to make sum "<<sum1<<" is "<<coinChange(coins1,sum1,n1);
}