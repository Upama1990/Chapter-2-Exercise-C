#include <iostream>
using namespace std;
int main()
{
    int x1,y1,x2,y2,x3,y3,m,n ;
    cout<<endl<<"Enter the value of x1 :" ;
    cin>>x1;
     cout<<endl<<"Enter the value of y1 :" ;
    cin>>y1;
     cout<<endl<<"Enter the value of x2 :" ;
    cin>>x2;
     cout<<endl<<"Enter the value of y2 :" ;
    cin>>y2;
     cout<<endl<<"Enter the value of x3 :" ;
    cin>>x3;
     cout<<endl<<"Enter the value of y3 :" ;
    cin>>y3;
    m=(y2-y1) / (x2-x1);
    n=(y3-y2)/ (x3-x2) ;
    if (m==n)
       cout<<endl<<" THE THREE POINTS FAll ON ONE STRAIGHT LINE ";
    else
        cout<<endl<<"IT IS NOT A STRAIGHT LINE ";
        
       

    return 0;   

}