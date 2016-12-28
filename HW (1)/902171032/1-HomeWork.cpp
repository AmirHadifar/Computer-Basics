#include <iostream>
#include <cmath>
using namespace std;
int main()                   // A function thtat calculate roots of aX^2+bX+C //
{
    float a,b,c,Delta;
    cout<<"please Enter a,b,c"<<endl;
    cin>>a>>b>>c;
    Delta=pow(b,2)-4*a*c;
    if(Delta>=0){
             cout<<"X1 :"<<(-b)+sqrt(Delta)/(2*a)<<endl;
             cout<<"X2 :"<<(-b)-sqrt(Delta)/(2*a)<<endl;
             }
             else if(Delta<0){
                  cout<<"this function has no root";}
    system("pause");
    return 0;
}
