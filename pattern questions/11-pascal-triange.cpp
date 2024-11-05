/*
1
11
121
1331
14641

*/
#include<iostream>
using namespace std;
 int fact(int n){
    int ans=1;
    for(int i=2;i<=n;i++)
    {
        ans=ans*i;
    }
    return ans;
 }
int main()
{
    int i,j;
    int n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
        }
        cout<<endl;
    }
    return 0;
}