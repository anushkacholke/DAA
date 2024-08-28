/*Implement a problem of activity selection problem 
with K persons.
Statement: Given two arrays S[] and E[] of size N denoting starting 
and closing time of the shops and an integer value K denoting the 
number of people, the task is to find out the maximum number of 
shops they can visit in total if they visit each shop optimally based 
on the following conditions:
 A shop can be visited by only one person
 A person cannot visit another shop if its timing collide with it
Input: S[] = {1, 8, 3, 2, 6}, E[] = {5, 10, 6, 5, 9}, K = 2
Output: 4
Input: S[] = {1, 2, 3}, E[] = {3, 4, 5}, K = 2
Output: 3
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int activity_selection(vector<int>S,vector<int>E,int k)
{
    int n=S.size(); 
    vector<pair<int,int>>shops(n);
    for(int i=0;i<n;i++)
    {
        shops[i]={E[i],S[i]};
    }
    sort(shops.begin(),shops.end());  //sort by end time

    vector<int>k_times(k,-1);
    int count=0;
    for(int i=0;i<n;i++)
    {
        int start=shops[i].second;
        int end=shops[i].first;

        for(int j=0;j<k;j++)
        {
            if(k_times[j]==-1 || k_times[j]<=start)
            {
                k_times[j]=end;
                count++;
                break;
            }
        }
    }
    return count;
}
int main()
{
    vector<int>S = {1, 8, 3, 2, 6};
    vector<int>E = {5, 10, 6, 5, 9};
    int k=2;
    int res=activity_selection(S,E,k);
    cout<<"\nMaximum no. of shops visited is: "<<res;
}
