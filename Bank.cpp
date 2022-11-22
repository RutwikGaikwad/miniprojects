#include<iostream>
#include<unistd.h>
using namespace std;
class Bank
{
  protected:
  double balance;

  public:
  void widrow();
  void deposite();
  void check_balance();

  Bank()
  {
    balance=0.0;
  }
};

void Bank::widrow()
{
  double wamount;
  cout<<"Enter the amount you want to widrow : ";
  cin>>wamount;
  
  if(wamount<=balance)
  {
    cout<<"Please wait!!\nProcessing......."<<endl;
    usleep(3000000);
    cout<<"Your transaction is sussessful"<<endl;
    balance=balance-wamount;
  }

  else
  {
    cout<<"You dont have sufficient amount for this transaction"<<endl;
  }
}

void Bank::deposite()
{
  double damount;
  cout<<"Enter the amount you want to deposite : ";
  cin>>damount;

  balance=balance+damount;
  cout<<"Please wait!!\nProcessing......"<<endl;
  usleep(3000000);
  cout<<"Your money has successfully deposited"<<endl;
}

void Bank::check_balance()
{
  cout<<"Your bank balance is : "<<balance<<"Rs"<<endl;
}

int main()
{
    Bank B1;
  while(true)
  {
    int choice;
    cout<<"******MENU******"<<endl;
    cout<<"1.Widrow money\n2.Deposite money\n3.Check bank balance\n4.Exit"<<endl;
    cout<<"Enter your choice : ";
    cin>>choice;

    if(choice==1)
    {
      B1.widrow();
    }

    else if(choice==2)
    {
      B1.deposite();
    }

    else if(choice==3)
    {
      B1.check_balance();
    }

    else if(choice==4)
    {
      break;
    }

    else{
      cout<<"Your choice is not valid\nPlease enter a valid choice";
    }
  }
}