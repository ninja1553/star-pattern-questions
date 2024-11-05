//print diamond pattern
#include<iostream>
using namespace std;
int main()
{
    int i,j,row=5,k,space;
    for(i=1;i<row;i++){
        for(space=1;space<=(row-i);space++){
            cout<<" "<<ends;

        }
        for(j=1;j<=i;j++)
        {
            cout<<"*"<<" "<<ends;
        }
        cout<<endl;}
        for(i=1;i<=row-2;i++){
        for(space=1;space<=i;space++){
            cout<<" "<<ends;

        }
        for(j=0;j<row-1-i;j++)
        {
            cout<<" "<<"*"<<ends;
        }
        cout<<endl;
    }
    return 0;
}