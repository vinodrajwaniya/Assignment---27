#include<iostream>
using namespace std;

class Matrix
{
    int m[3][3];
public:
    Matrix()
    {

    }
    void input()
    {
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++)
            {
                cout<<" ";
                cin>>m[i][j];
            }
        }
    }

    void operator-()
    {
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++)
            {
                m[i][j]=-m[i][j];
            }
            cout<<"\n";
        }

    }
    void display()
    {
        cout<<"Matrix is :  \n";
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++)
            {
                cout<<" ";
                cout<<m[i][j]<<"\t";
            }
            cout<<"\n";
        }
    }

};

int main()
{
    Matrix m;
    cout<<"\nEnter Matrix Elements (3*3)  : \n";
    m.input();

    m.display();
    -m;
    m.display();
    return 0;
}