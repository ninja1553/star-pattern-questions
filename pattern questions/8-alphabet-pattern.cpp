/*
a
ab
abc
abcd
*/
#include<iostream>
using namespace std;
main()
{
    int i,j,n=5;
    
    for(i=1;i<n;i++){
        char a=64;
        for(j=1;j<=i;j++)
        {   a++ ;
            cout<<a;
        }
        cout<<endl;
    }
    return 0;
}