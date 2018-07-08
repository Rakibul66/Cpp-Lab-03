#include<iostream>
using namespace std;
class large
{
public:
    large(int a,int b)
    {
        if(a>b)
        {
            cout<<endl<<a<<"is largest"<<endl;
        }
        else
        {
            cout<<endl<<b<<"is largest"<<endl;
        }
    }
};
int main()
{
    int a,b;
    cout<<"Enter a number:";
    cin>>a;
    cout<<"Enter another number:";
    cin>>b;
    large(a,b);
return 0;
}
