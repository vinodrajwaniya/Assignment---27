#include<iostream>
using namespace std;

class unary
{
    int a;
public:
    unary ()
    {
        cout<<"Default "<<endl;
    }
    unary (int x)
    {   
        cout<<"Perameter "<<endl;
        a=x;
    }
    unary operator++()     // pre increment
    {
        unary temp;
        temp.a = ++a;
        return temp;
    }
    unary operator++(int)   // post increment
    {
        unary temp;
        temp.a = a++;
        return temp;
    }

    unary operator--() // pre decrement
    {
        unary temp;
        temp.a = --a;
        return temp;
    }

    unary operator--(int) //  post decrement
    {
        unary temp;
        temp.a = a--;
        return temp;
    }

    void display()
    {
        cout<<"a is = "<<a<<endl;
    }
};

int main()
{
    unary u1(7);
    unary u2(5);
    u1++;
    --u2;
    u1.display();
    u2.display();
    return 0;
}