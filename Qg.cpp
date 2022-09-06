#include <iostream>
using namespace std;
int main()
{
    int a,b,c,sum;
    cout<<endl<<"The first angle of the traingle ";
    cin>>a;
    cout<<endl<<"The second angle of the traingle ";
    cin>>b;
    cout<<endl<<"The third angle of the traingle ";
    cin>>c;
    sum=a+b+c;
    if (sum==180)
       cout<<endl<<"THE TRAINGLE IS VALID";
    else
        cout<<endl<<"THE TRAINGLE IS NOT VALID" ;  

    return 0;

}