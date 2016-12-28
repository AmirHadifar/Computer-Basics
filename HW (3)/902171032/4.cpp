#include <iostream>
#include <cmath>
using namespace std;
class Point 
{
      protected:
                double x,y;
      public:
             Point():x(0),y(0){}
                double Getx(){cout<<"Enter X:";cin>>x;return x;}
                double Gety(){cout<<"Enter Y:";cin>>y;return y;}
                void Show(){cout<<"("<<x<<","<<y<<")";}
                void Distance(Point p)
                {
                     x=pow(x-p.Getx(),2);
                     y=pow(y-p.Gety(),2);
                     cout<<"Distance :"<<sqrt(x+y)<<endl;
                }
                void Display()
                {cout<<"\n("<<x<<","<<y<<")"<<endl<<"Width:"<<x<<"\t"<<"Length:"<<y<<endl;}
                
                void NewSYS(Point p)
                {
                     x=x-p.Getx();
                     y=y-p.Gety();
                }
                     
};
//--------
int main()
{
    int number;
    Point p1,p2;
    cout<<"MENU:\n  1.Distination between two Point\n" 
          <<"  2.Show the Coordinate of a point\n" 
          <<"  3.go into another Coordinate System\n"
          <<"choose one of the above number :";cin>>number;
          
          switch(number){
                         case 1:
                              cout<<"Enter first Coordinate :"<<endl; 
                              p1.Getx();
                              p1.Gety();
                              cout<<"Enter second Coordinate :"<<endl;
                              p1.Distance(p2);
                              break;
                         case 2:
                              cout<<"Enter Coordinate of a point :"<<endl;
                              p1.Getx();
                              p1.Gety();
                              p1.Display();
                              break;
                         case 3:
                              cout<<"Enter Coordinates of a point in Initial SYSTEM "<<endl;
                              p1.Getx();
                              p1.Gety();
                              cout<<"Enter Origin of the new Coordinat system:"<<endl;
                              p1.NewSYS(p2);
                              p1.Display();
}                              
                              system("pause");
                              return 0;
                              }                              
                               
