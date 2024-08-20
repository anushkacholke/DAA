/*Implement a problem of smallest number with at 
least n trailing zeroes in factorial.
Statement: Given a number n. The task is to find the 
smallest number whose factorial contains at least n 
trailing zeroes.
Input : n = 1 Output : 5 
Input : n = 6 Output : 25*/
#include<iostream>
using namespace std;
int trailing_zeroes(int num)
{
    int count=0;
    for(int i=5;i<=num;i=i*5)
    {
        count=count+num/i;
    }
    cout<<"No. of trailing zeroes: "<<count;
}
int main()
{
    int num;
    cout<<"\nEnter number: ";
    cin>>num;
    trailing_zeroes(num);
}