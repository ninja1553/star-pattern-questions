/*
print pattern       or      ****
*                           ***
**                          **
***                         *        
****
*/
#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for(i=0;i<5;i++){
    for(j=0;j<=i;j++)
    {
        cout<<"*"<<ends;

    }
    cout<<endl;}
    cout<<endl;
    cout<<endl;
    cout<<endl;
    for(i=4;i>=0;i--)
    {
        for(j=0;j<=i;j++)
        {
             cout<<"*"<<ends;
        }
         cout<<endl;
    }
    return 0;
}