#include<iostream>
using namespace std;

class Complex
{
    int a,b;
public:
    Complex()
    {
        cout<<"Default Constructor"<<endl;
    }
    Complex(int x, int y)
    {
        cout<<"Peramerter Constructor"<<endl;
        a = x;
        b = y;
    }

    Complex operator+(const Complex c)
    {
        cout<<"Operator Constructor "<<endl;
        Complex temp;
        temp.a = a + c.a;
        temp.b = b + c.b;
        return temp;
    }
    Complex operator-(const Complex c)
    {
        cout<<"Operator Constructor "<<endl;
        Complex temp;
        temp.a = a - c.a;
        temp.b = b - c.b;
        return temp;
    }
    Complex operator*(const Complex c)
    {
        cout<<"Operator Constructor "<<endl;
        Complex temp;
        temp.a = a * c.a;
        temp.b = b * c.b;
        return temp;
    }
    Complex operator==(const Complex c)
    {
        Complex temp;
        temp.a = a == c.a;
        temp.b = b == c.b;
        return temp; 
    }
    Complex(const Complex &p)
        {
            cout<<"Copy Constructor "<<endl;
            a = p.a;
            b = p.b;
        }

    void display()
    {
        cout<<"real "<<a<<" img " <<b<<endl;
    }
};

int main()
{
    Complex c1(2, 5);
    Complex c2(5, 8);
    Complex c3 = c1 + c2;
    Complex c4 = c2 - c1;
    Complex c5;
    c5 = c3 * c4;
    c3 == c1;
    c3.display();
    c4.display();
    c5.display();
    return 0;
}