#include<iostream>
using namespace std;
class TollBooth{
public:
TollBooth()
{
number_of_cars=0;
money_collected=0;

}
void payingCar()
{

number_of_cars++;
money_collected+=100.50;

}

void nopayCar()
{

number_of_cars++;

}
void display()
{
double total=number_of_cars*100.50;
//double total_of_paying_car=money_collected;
//double total_of_nonpaying_car=0;
double loss=total- money_collected;
cout<<"Total cars: "<<number_of_cars<<endl;
cout<<"Total money: "<<total<<endl;
cout<<"Actual money recieved: "<<money_collected<<endl;
cout<<"Loss: "<<loss<<endl;

}









private:
unsigned int number_of_cars;
double money_collected;
};

int main(int argc, char const *argv[])
{
  TollBooth t1;
  char choice;

cout<<"Enter 'p' for paying car, 'n' for non-paying car, 'q' for total"<<endl;
cin>>choice;
while(choice!='q')
{
if(choice=='p')
{
  t1.payingCar();

}
if(choice=='n')
{
  t1.nopayCar();
}
if(choice!='p' and choice!='n')
cout<<"Invalid choice... Enter again"<<endl;
cin>>choice;
}


if(choice=='q')
{
    t1.display();
}

  return 0;

}
