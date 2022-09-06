#include <iostream>
using namespace std;
int main()
{
    int n1,n2,profit,loss;
    cout<<endl<<"Enter the cost price:";
    cin>>n1;
    cout<<endl<<"Enter the selling price:";
    cin>>n2;
    profit=n2-n1;
    loss=n1-n2;
    cout<<endl<<"PROFIT="<<profit;
    cout<<endl<<"LOSS="<<loss;

    if(n1>n2);
    {
        if(n2>n1)
        {
            cout<<endl<<"IT IS PROFIT";
        }
        else
        {
            cout<<endl<<"IT IS LOSS";
        }
    
    }

    return 0;
}