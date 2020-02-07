#include<iostream.h>
#include<conio.h>
class Test
{
  private:
  int x,y;

  public:
  Test()
 {
   x=10;
   y=20;
 }
  Test(int p,int q)
 {
  x=p;
  y=q;
 }
 Test(Test &z)
 {
  x=z.x;
  y=z.y;
 }
 void show()
 {
  cout<<"\n The value of x is:"<<x;
  cout<<"\n The value of y is:"<<y;
 }

};
void main()
{
 Test ob1,ob2(30,40),ob3(ob1);
 clrscr();
 cout<<"\n value of x and y using ob1 is: ";
 ob1.show();
 cout<<"\n value of x and y using ob2 is: ";
 ob2.show();
 cout<<"\n value of x and y using ob3 is: ";
 ob3.show();
 getch();

}
