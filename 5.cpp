#include<iostream>
using namespace std;

class Numbers 
{
    int x,y,z;
public:
    void accept ()
    {
        cout<<"\nEnter Three number ";
        cout<<"\n------------------------";
        cout<<"\nFirst Number : ";
        cin>>x;
        cout<<"\nSecond Number : ";
        cin>>y;
        cout<<"\nThird Number : ";
        cin>>z;
        cout<<"\n--------------------";
    }
    void Display()
    {
        cout<<" "<<x<<"\t"<<y<<"\t"<<z;
    }

    void operator-()
    {
        x = -x;
        y = -y;
        z = -z;
    }
};

int main()
{
    Numbers n1;
    n1.accept();
    cout<<"\n\nNumber are :\n\n";
    n1.Display();
    -n1;       //Overload Unary Operator
    cout<<"\n\nNegate Number are : \n\n";
    n1.Display();
    return 0;
}