#include<iostream.h>
#include<conio.h>
class d
{
 public:
 d()
 {
  cout<<"\n This is constructor";
 }
 ~d()
 {
  cout<<"\n This is destructor";
 }
};
 void main()
{
  clrscr();
  d ob1;
  cout<<"\n it is the main function ";
  getch();
}