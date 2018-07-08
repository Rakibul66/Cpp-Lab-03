#include<iostream>
using namespace std;
class A
{
private:
    int a,b,c,d,e;
public:
    void data(int m,int n)
    {

        a=m;
        b=n;

    }
    void data(int x,int y,int z)
    {

        c=x;
        d=y;
        e=z;

    }
    void call()
    {
        cout<<"result:"<<(a+b+c+d+e)/5;
    }
};
int main()
{
    A ob;
    ob.data(10,5);
    ob.data(5,5,5);
    ob.call();
    return 0;
}


