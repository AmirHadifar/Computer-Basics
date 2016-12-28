#include <iostream>
#include <cmath>
using namespace std;
struct point
{
       float x,y;
};
float AbsoluteValue(point,point);
float Distance(point,point);
void displayAbVa(float);
void displayDis(float);
int main()
{
    int n;
    float AbVa,Dis;
    point A,B;
    cout<<"Enter First Coordinate\n";
    cout<<"Enter X (x1) :";cin>>A.x;
    cout<<"Enter Y (y1) :";cin>>A.y;
    cout<<"\nEnter Second Coordinate\n";
    cout<<"Enter second point X(x2) :";cin>>B.x;
    cout<<"Enter second point Y(y2) :";cin>>B.y;
    cout<<"\nChoose your number of your program :\n\t1.Absolute value(|X1-X2|+|Y1-Y2|)\n\t2.Distance (sqrt(X1-X2)^2 + (Y1-Y2)^2)\nYour Number is :";
    cin>>n;
    switch(n){
              case 1:
                   AbVa=AbsoluteValue(A,B);
                   displayAbVa(AbVa);
                   break;
              case 2:
                   Dis=Distance(A,B);
                   displayDis(Dis);
                   break;
              default :
              cout<<"Try again Baby !"<<endl;
              }
              
              system("pause");
              return 0;
}
////////////////////////////////////////////////////////////////////////////////
float AbsoluteValue(point A1 ,point B1)
{
    float AbVa;
    point point3;
    point3.x = A1.x - B1.x;
    point3.y = A1.y - B1.y;
    if(point3.x<0)
    point3.x*=-1;
    if(point3.y<0)
    point3.y*=-1;
    
    AbVa=point3.x + point3.y;
    
    return AbVa;
}
////////////////////////////////////////////////////////////////////////////////
float Distance(point A1 , point B1)
{
      float Dis;
      point point3;
      point3.x = A1.x - B1.x;
      point3.y = A1.y - B1.y;
      Dis=sqrt(pow(point3.x,2)+pow(point3.y,2));
      return Dis;
}
////////////////////////////////////////////////////////////////////////////////  
void displayAbVa(float answer)
{
     cout<<"|X1-X2|+|Y1-Y2| = "<<answer<<endl;
}
////////////////////////////////////////////////////////////////////////////////
void displayDis(float answer)
{
     cout<<"SQRT(  (x1-x2)^2  +  (y1-y2)^2  ) = "<<answer<<endl;
}
////////////////////////////////////////////////////////////////////////////////  
