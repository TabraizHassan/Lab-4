#include<iostream>
using namespace std;
class TollBooth{
public:
TollBooth()
{
number_of_cars=0;
money_collected=0;

}
double payingCar()
{
int paying_car=0;
number_of_cars++;
money_collected+=100.50;
return paying_car;
}

double nopayCar()
{
int non_paying_car=0;
number_of_cars++;
return non_paying_car;
}
void display()
{
double total=number_of_cars*100.50;
//double total_of_paying_car=money_collected;
//double total_of_nonpaying_car=0;
double loss=total- money_collected;
cout<<"Total money: "<<total<<endl;
cout<<"Loss: "<<loss<<endl;
cout<<"Actual money: "<<money_collected<<endl;
}









private:
unsigned int number_of_cars;
double money_collected;
};

int main(int argc, char const *argv[])
{
  TollBooth t1;
  char choice;
  int pay_car=0;
  int nopay_car=0;
cout<<"Enter 'p' for paying car, 'n' for non-paying car, 'q' for total"<<endl;
cin>>choice;
while(choice!='q')
{
if(choice=='p')
{
  pay_car+=t1.payingCar();

}
if(choice=='n')
{
  nopay_car+=t1.nopayCar();
}

cin>>choice;
}
  t1.display();
  return 0;

}
