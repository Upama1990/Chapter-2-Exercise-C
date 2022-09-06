#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<endl<<"Enter year ";
    cin>>n;
    
    if (n%4==0)
       cout<<endl<<n<<"IS LEAP YEAR" ;
    else
        cout<<endl<<n<<"IS NOT LEAP YEAR";

     return 0;      
}