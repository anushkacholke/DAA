#include<iostream>
#include<vector>
using namespace std;
bool subsetSum(vector<int>arr, int n,int sum, vector<vector<int>>&dp)
    {
        if(dp[n][sum]!=-1)     return dp[n][sum];
        if(arr[n-1] <= sum) //check last ele which is less than or equal to sum
        {
            return dp[n][sum]=subsetSum(arr,n-1,sum-arr[n-1],dp) || subsetSum(arr,n-1,sum,dp); //1.reduce sum by n-1 || 2.no changes in sum
        }
        else{
            return dp[n][sum]=subsetSum(arr,n-1,sum,dp);
        }
    }
    bool isSubsetSum(vector<int>arr, int sum)
    {
        int n=arr.size();
        vector<vector<int>>dp(n+1, vector<int>(sum+1,-1));
        for(int i=0;i <=sum;i++)
        {
            dp[0][i]=false;
        }
        for(int i=0;i<=n;i++)
        {
            dp[i][0]=true;
        }
        return subsetSum(arr,n,sum,dp);
    }
int main()
{
    vector<int>set1 = {3, 34, 4, 12, 5, 2};
    int sum1 = 9 ;
    vector<int>set2 = {3, 34, 4, 12, 5, 2};
    int sum2 = 30; 
    if(isSubsetSum(set2,sum2)==true)
    {
        cout<<"\nTrue";
    }
    else{
        cout<<"\nFalse";
    }
}