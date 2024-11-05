/* 
print pattern:  1
                23
                456
                78910
*/
#include<iostream>
using namespace std;
int main()
{
    int i,j,n=5,num=1;
    for(i=0;i<n;i++){
        for(j=0;j<i;j++)
        {
            cout<<i<<" "<<ends;
        }
        cout<<endl;
    }
    for(i=0;i<n;i++){
        for(j=0;j<i;j++)
        {
            cout<<num<<ends;
            num++;
        }
        cout<<endl;
    }
    return 0;
}