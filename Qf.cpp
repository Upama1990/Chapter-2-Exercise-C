#include <iostream>
using namespace std;
int main()
{
    int n1,n2,n3;
    cout<<endl<<"Age of Ram" ;
    cin>>n1;
    cout<<endl<<"Age of Shyam" ;
    cin>>n2;
    cout<<endl<<"Age of Ajay" ;
    cin>>n3;

    if(n1<n2)
    {
        if(n1<n3)
        {
            cout<<endl<<"RAM IS YOUNGEST";
        }
        else
        {
            cout<<endl<<"AJAY IS YOUNGEST";
        }
    }
    else
    {
        if(n2<n3)
        {
            cout<<endl<<"SHYAM IS YOUNGEST";
        }
        else
        {
            cout<<endl<<"AJAY IS YOUNGEST";
        }
    }

    return 0;
}