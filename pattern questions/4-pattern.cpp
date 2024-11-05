/*
print pattern
    *
   **
  ***
 ****
   */
   #include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"enter n:"<<ends;
    cin>>n;
    for(i=0;i<n;i++){
       
    for(j=0;j<n;j++)
    {
        if(j<n-i)
        cout<<" "<<ends;
        else
        cout<<"*"<<ends;

    }
    cout<<endl;}
    return 0;
}