#include <iostream>
#include<vector>
using namespace std;
class Stack {
public:

bool empty()
{
if (v.empty() == false)
  {return 1;}
else
  return 0;
}
  
  
void push(string item)
{
v.push_back(item);
}
  
void top()
{
cout<<v.back()<<endl;
}
  
void pop()
{
v.pop_back();
}
  
private:
vector<string>v;

};
int main()
{
  Stack t;
char choice;
string element;
char q='y';
while(q=='y')
{
cout<<endl<<"Enter what you want to do with an array "<<endl;
cout<<endl<<"Press 'c' to check whether the array is empty, 'p' to add item to the stack, 'v'  returns the most-recently added item, 'r' removes the most-recetnly added item"<<endl;
cin>>choice;

if(choice=='c')
{
int result= t.empty();
if(result==0)
{
  cout<<"Vector is empty"<<endl;
}
if(result==1)
{
  cout<<"Vector is not empty"<<endl;
}
}


if(choice=='p')
{
  cout<<"Enter your element"<<endl;
  cin>>element;
 t.push(element);
}

if(choice=='v')
{
 t.top();
}

if(choice=='r')
{
t.pop();
}


cout<<endl<<"Do you want to continue? if yes press 'y' else press anyother key"<<endl;
cin>>q;
cout<<endl;
}

}
