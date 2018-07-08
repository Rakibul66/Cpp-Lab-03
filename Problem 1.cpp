#include<iostream>
using namespace std;
class info
{
    public:
    string name,dept;
    int id,mark,a,b,c,temp,avg;
    int getinfo()
    {
        cout<<"enter name:"<<endl;
        cin>>name;
        cout<<"enter dept:"<<endl;
        cin>>dept;
        cout<<"enter id:"<<endl;
        cin>>id;
        cout<<"enter 1st marks:"<<endl;
        cin>>a;
        cout<<"enter 2nd marks:"<<endl;
        cin>>b;
        cout<<"enter 3rd marks:"<<endl;
        cin>>c;
        temp=a+b+c;
        avg=(temp/3);
        return avg;
    }
    void setinfo()
    {
        cout<<"name :"<<name<<endl;
        cout<<"dept :"<<dept<<endl;
        cout<<"id :"<<id<<endl;
        cout<<"avg :"<<avg<<endl;
    }

};
int main()
{
    info ob;
    ob.getinfo();
  ob.setinfo();

}
