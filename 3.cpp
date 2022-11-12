#include<iostream>
using namespace std;

class Complex
{
    int a;
public:
    Complex()
    {

    }
    Complex(int x)
    {   
        a=x;
    }
    
    friend Complex operator+ (Complex, Complex);
    void display()
    {
        cout<<"Result is "<<a<<endl;
    }
};

Complex operator+(Complex k, Complex p)
    {
        Complex temp;
        temp.a = k.a + p.a;
        return temp;
    }

int main()
{
    Complex c1(5),c2(3);
    Complex c3 = c1 + c2;

    c3.display();
    return 0;
}