#include<iostream>
using namespace std;

class mystring 
{
    char str[100];
public:
    mystring()
    {
        
    }
    void accept ()
    {
        cout<<"\nEnter string  : ";
        cin>>str;
    }
    void display()
    {
        cout<<str;
    }
    void operator!()
    {
        for(int i=0; str[i]!='\0'; i++)
        {
            if(str[i]>=65&&str[i]<=96)
            {
                str[i] = str[i]+32;
            }
            else if(str[i]>=97&&str[i]<=122)
            {
                str[i] = str[i]-32;
                
            }
        }
        cout<<"\n\nReverse Case string is :  " <<str<<endl;

}
    
        
};

//void mystring::operator!()


int main()
{
    mystring m1,m2;
    m1.accept();
    cout<<"\nString is    :  ";
    m1.display();
    !m1;
    //m1.display
    return 0;

}