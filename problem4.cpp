#include<iostream>
using namespace std;
class university
{
public:
    int a;
    university()
    {
        cout<<"Time spends in university:";
        cin>>a;
    }
};
class classes
{
public:
    int b;
    classes()
    {
        cout<<"\tTime spends in class:";
        cin>>b;
    }
};
class lab
{
public:
    int c;
    lab()
    {
        cout<<"\tTime spends in lab:";
        cin>>c;
    }
};
int main()
{
    university obj;
    classes obj2;
    lab obj3;
    cout<<"\nTotal spending time:"<<(obj.a+obj2.b+obj3.c)<<endl<<endl;
    return 0;
}

