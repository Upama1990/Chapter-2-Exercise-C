#include <iostream>
using namespace std;
int main()
{
int a,b,area,perimeter;
cout<<endl<<"Enter the length ";
cin>>a;

cout<<endl<<"Enter the breadth ";
cin>>b;
area=(a*b);
perimeter=2*(a+b);
if (area>perimeter)
    cout<<endl<<"AREA IS GREATER" ;
 else
    cout<<endl<<"PERMETER IS GREATER" ;

    return 0; 
    
}

