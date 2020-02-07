#include<iostream.h>
#include<conio.h>

class demo
{
  int x;
  public:
  demo()
  {  x=1;
    cout<<"\n this is default constructor";
  }
  demo(int m)
  {
   cout<<"\n this is paramerterized constructor";
  }
  demo(demo &p)
  {
    x=p.x;
    cout<<"\n this is copy constructor";

  }

};
 void main()
 {
   demo ob1(33),ob2,ob3(ob2);
   clrscr();
   getch();

 }