#include <iostream>
using namespace std;
int main()
{
    int n,a,b,c,d,e,reverse_number;
    cout<<endl<<"Enter a five-digit number ";
    cin>>n;
    e=(n%10);
    d=(n/10)%10;
    c=(n/100)%10;
    b=(n/1000)%10;
    a=(n/10000);
    reverse_number=(e*10000)+(d*1000)+(c*100)+(b*10)+(a);
    cout<<endl<<"REVERSE NUMBER ="<<reverse_number ;

    if (n!=reverse_number)
       cout<<endl<<"THE ANS IS RIGHT" ;
    else
        cout<<endl<<"THE ANS IS WRONG" ;

        return 0;   


}