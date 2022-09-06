#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<endl<<"Enter the value of x";
    cin>>x;
    cout<<endl<<"Enter the value of y";
    cin>>y;
    if ((x==0) && (y==0))
       cout<<endl<<"THE POINT LIES AT THE ORIGIN" ;
    else if ((x!=0) && (y==0))
         cout<<endl<<"THE POINT LIES ON X AXIS ";
    else if ((y!=0) && (x==0))
         cout<<endl<<"THE POINT LIES ON Y AXIS ";
    else
        cout<<endl<<"THE POINT IS NEITHER ON ORIGIN OR IN X OR Y AXIS ";
        
    return 0;             

}