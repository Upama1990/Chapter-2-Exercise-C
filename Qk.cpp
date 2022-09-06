#include <iostream>
#include <math.h>
using namespace std;
int main()
{

    int x1,y1,x2,y2,m,n,radius, distance ;
    cout<<endl<<"Enter the value of x1 ";
    cin>>x1;
    cout<<endl<<"Enter the value of y1 ";
    cin>>y1;
    cout<<endl<<"Enter the value of x2 ";
    cin>>x2;
    cout<<endl<<"Enter the value of y2 ";
    cin>>y2;
    radius=65;
    m=pow((x2-x1),2);
    n=pow((y2-y1),2);
    distance=sqrt(m+n);

    cout<<endl<<"DISTANCE"<<distance ;
    if (distance==radius)
       cout<<endl<<"THE POINT LIES ON THE CIRCLE ";
    else
       {
        if (distance<radius)
           cout<<endl<<"THE POINT WILL BE INSIDE THE CIRCLE ";

        else
           cout<<endl<<"THE POINT WILL BE OUTSIDE THE CIRCLE ";

       
       }   

    return 0;   

}