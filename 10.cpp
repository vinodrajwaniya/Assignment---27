#include<iostream>
using namespace std;

class Matrix 
{
    int a[3][3];
public:
    Matrix ()
    {

    }
    void input()
    {
        cout<<"Enter Matrix Elements : \n";
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++)
            {
                cin>>a[i][j];
            }
        } 
    }

    Matrix operator+(Matrix m)
    {
        //Matrix p;
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++)
            {
                a[i][j]=a[i][j]+m.a[i][j];
            }
        } 
        return *this;
    }


    void display()
    {
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++)
            {
                cout<<" ";
                cout<<a[i][j]<<"\t";
            }
            cout<<"\n";
        } 

    }
};

int main()
{
    Matrix m1,m2,m3;

    m1.input();
    m2.input();

    cout<<"\n\nFirst Matrix : \n\n";
    m1.display();
    cout<<"\nSecond Matrix : \n\n";
    m2.display();

    m3=m1+m2;
    cout<<"\n\nAddition of matrix : \n";
    m3.display();
    return 0;
}