/*Implement a problem of smallest number with at 
least n trailing zeroes in factorial.
Statement: Given a number n. The task is to find the 
smallest number whose factorial contains at least n 
trailing zeroes.
Input : n = 1 Output : 5 
Input : n = 6 Output : 25*/
#include<iostream>
using namespace std;
int trailing_zero(int num)
{
    int count=0;
    for(int i=5;i<num;i=i*5)
    {
        count+=num/i;
    }
    return count;
}
int find_small_number(int n)
{
    if(n==0)
    {
        return 0; //no trailing zero
    }
    int low=0;
    int high=5*n;  //upper bound trailing 0 must <= 5*n
    while (low<high)
    {
        int mid=(low+high)/2;
        //check how many trailing 0 in mid
        if(trailing_zero(mid)>=n)
        {
            high=mid;//if it has enough 0 try for smaller num
        }
        else{
            low=mid+1;//otherwise inc lower bound
        }
    }
    return low;//lowest num with atleast n trailing 0
}
int main()
{
    int n;
    cout<<"\nEnter num of trailing zero: ";
    cin>>n;
    int res=find_small_number(n);
    cout<<"\nSamllest num whose factorial has at least "<<n<<" trailing zero is: "<<res;   
}
