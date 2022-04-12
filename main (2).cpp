#include<iostream>
#include<stdio.h>
#include<limits.h>
using namespace std;
int max(int a, int b) { return (a > b)? a : b;}
int cutRod(int price[], int n)
{
int val[n+1];
val[0] = 0;
int i, j;
for (i = 1; i<=n; i++)
{
int max_val = INT_MIN;
for (j = 0; j < i; j++)
max_val = max(max_val, price[j] + val[i-j-1]);
val[i] = max_val;
}
return val[n];
}
int main()
{
int arr[20], n;
cout<<"Enter the number of rods\n";
cin>>n;
cout<<endl;
cout<<"Enter the prices of the rods\n";
for(int i = 0; i < n; i++)
cin>>arr[i];
cout<<"Maximum Obtainable Value is "<<cutRod(arr, n);
return 0;
} 