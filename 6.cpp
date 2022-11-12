#include<iostream>
#include<cstring>
using namespace std;

class CString
{
    char str[200];
public:
    void get_string()
    {
        cout<<"\nEnter String   :   ";
        cin>>str;
    }

    void display()
    {
        cout<<str<<endl;
    }
    CString operator+(CString x)
    {   
        CString s;
        strcpy(s.str, str);
        strcat(s.str, x.str);
        return s;
    }
    int operator==(CString &t);
        
};

int CString :: operator==(CString &t)
{
    for(int i=0; str[i]!='\0'; i++)
    {
        for(int j=0; t.str[j]!='\0'; j++)
        {
            if(str[i] == t.str[j])
            {
                return 0;
            }
            else
            {
                return 1;
            }
        }
    }
}

int main()
{
    CString str1,str2,str3;
    int result=0;

    str1.get_string();
    str2.get_string();

    cout<<"\n------------------------------------";
    cout<<"\n\nFirst String is         :    ";
    str1.display();

    cout<<"\n------------------------------------";
    cout<<"\n\nSecond String is         :    ";
    str2.display();


    cout<<"\n------------------------------------";
    str3 = str1+str2;
    cout<<"\n\nConcatenated String is  : ";
    str3.display();

    result = str1 == str2;
    if(result == 0)
    {
        cout<<"\n\nBoth string are equal";
    }
    else   
    {
        cout<<"\n\nBoth string are not equal";
    }
    return 0;
}