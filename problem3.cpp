#include<iostream>
#include<string.h>
using namespace std;
class bank
{
int acno;
char nm[100], acctype[100];
float bal;
public:
bank(int acc_no, char *name,char*acc_type,float
balance)
{
acno=acc_no;
strcpy(nm, name);
strcpy(acctype, acc_type);
bal=balance;
}
void deposit();
void withdraw();
void display();
};
void bank::deposit()
{
        int damt1;
cout<<"\n Enter Deposit Amount = ";
cin>>damt1;
bal=bal+damt1;
}
void bank::withdraw()
{
        int wamt1;
cout<<"\n Enter Withdraw Amount = ";
cin>>wamt1;
if(wamt1>bal)
cout<<"\n Cannot Withdraw Amount";
bal=bal-wamt1;
}
void bank::display()
{
cout<<"\t**sonali bank**\n";
cout<<"\n----------------";
cout<<"\n Accout No. : "<<acno;
cout<<"\n\n Your Name : "<<nm;
cout<<"\n Account Type : "<<acctype;
cout<<"\n Balance : "<<bal;
}
int main()
{
        int acc_no;
char name[100], acc_type[100];
float balance;
cout<<"\n Accout No. ";
cin>>acc_no;
cout<<"\n Name : ";
cin>>name;
cout<<"\n Account Type : ";
cin>>acc_type;
cout<<"\n Balance : ";
cin>>balance;
bank ob(acc_no, name, acc_type,balance);
ob.deposit();
ob.withdraw();
ob.display();
return 0;}

