#include<iostream>
using namespace std;

class fraction
{
    long numerator;
    long denominator;
public:
    fraction(long n=0, long d=0)
    {
        numerator=denominator=0;        
    }
    friend void operator>>(istream &cin, fraction &f)
    {   
        cout<<"Numeratot :     ";
        cin>>f.numerator;
        cout<<"\ndenominator  :  ";
        cin>>f.denominator;
    }

    fraction operator++()
    {
        fraction temp;
        temp.numerator=++numerator;
        temp.denominator=++denominator;
        return temp;
    }
    fraction operator ++(int )
    {
        fraction temp;
        temp.numerator=numerator++;
        temp.denominator=denominator++;
        return temp;
    }

    friend void operator<<(ostream &cout, fraction &f)
    {
        cout<<f.numerator<<"/"<<f.denominator<<endl;;
    }
};

int main()
{
    fraction f1,f2;
    cout<<"Enter 1st Fraction Value \n\n";
    cin>>f1;

    f1++;
    cout<<"\nf1++  :  ";
    cout<<f1;
    ++f1;
    cout<<"++f1  :  ";
    cout<<f1;

    cout<<"\n\nEnter 2nd Fraction Valus \n\n";
    cin>>f2;

    cout<<"\nf2 = ++f1\n";
    f2 = ++f1;
    cout<<"\nf1 :   ";
    cout<<f1;
    cout<<"f2 :   ";
    cout<<f2;

    cout<<"\nf2 = f1++\n";
    f2 = f1++;
    cout<<"\nf1 :   ";
    cout<<f1;
    cout<<"f2 :   ";
    cout<<f2;


}

