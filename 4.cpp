#include<iostream>
using namespace std;

class Time 
{
    int hours, minutes, seconds;
public: 
    friend int operator >>(istream &cin, Time &t)
    {
        cout<<"----------------"<<endl;
        cout<<"Enter Hours : ";
        cin>>t.hours;
        cout<<endl<<"Enter Mintes : ";
        cin>>t.minutes;
        cout<<endl<<"Enter Seconds : ";
        cin>>t.seconds;
        t.minutes = t.minutes + t.seconds / 60;
        t.seconds = t.seconds % 60;
        t.hours = t.hours + t.minutes / 60;
        t.minutes = t.minutes % 60;

        if(t.hours >=25)
            return 1;
        else
            return 0;
    }
    friend void operator<<(ostream &cout, Time &t)
    {
        cout<<"\nHours   : "<<t.hours<<endl;
        cout<<"Mintes  : "<<t.minutes<<endl;
        cout<<"Seconds : "<<t.seconds<<endl; 
    }
    int operator==(Time t1)
    {
        int tot = hours * 3600 + minutes * 60 + seconds;
        int tot1 = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;

        if(tot == tot1)
            return 1;
        else
            return 0;
    }
    Time()
    {
        hours=minutes=seconds=0;
    }
    ~Time () {}

};

int main()
{
    Time t,t1;
    cout<<"Entet First Time ";
    cout<<endl<<"----------------";
    if(cin>>t)
    {
        cout<<"\n Invalid Time ";
        return 0;
    }
    cout<<"First Time ";
    cout<<t;
    cout<<"\n\nEnter Second Time ";
    cout<<"\n---------------------";
    if(cin>>t1)
    {
        cout<<"\nInvalid Time ";
        return 0;
    }
    cout<<"\nSecond Time";
    cout<<t1;
    if(t==t1)
        cout<<"\n\nTimes are same";
    else    
        cout<<"\n\nTimes are Different ";
    return 0;
}