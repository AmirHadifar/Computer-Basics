#include <iostream>
#include <cmath>
#include <conio.h>
using namespace std;
int power(int,int);
int factorial(int);
float compound(int ,int);
float sin(float);
int main()
{
    char answer;
     do{    
         int n,fact,pow;
         float C;
         double sum;
              cout<<"Menu:"<<endl
                  <<"    1:power(x,y)"<<endl
                  <<"    2:factorial(n)"<<endl
                  <<"    3:c(m,n) ||  m!/(n!*(m-n)!)"<<endl
                  <<"    4:sin(x)"<<endl;
              cout<<"Enter 1 , 2 , 3 or 4  to calculate :";cin>>n;
    
            switch(n){
                   case 1:
                          int x,y;
                          cout<<"Enter x :";cin>>x;
                          cout<<"Enter y :";cin>>y;
                          cout<<x<<"^"<<y<<" = "<<power(x,y)<<endl;
                          break;
                   case 2:
                          int number;
                          cout<<"Enter number to calculate n! :";cin>>number;
                          cout<<number<<"! :"<<factorial(number)<<endl;
                          break;
                   case 3:
                          int m,n;
                          cout<<"Enter m (m is more than n) :";cin>>m;
                          cout<<"Enter n (n is lesser than m) :";cin>>n;
                          cout<<"C("<<m<<","<<n<<") :"<<compound(m,n)<<endl;
                          break;
                   case 4:
                          int X;
                          cout<<"Enter X :";cin>>X;
                          cout<<"Sin("<<X<<")"<<sin(sum)<<endl;
                          break;
                   default:
                          cout<<"Try again Baby ! "<<endl;
                   }
                   cout<<"do u wish to continue ?(y/n)";
                   cin>>answer;
    }while(answer!='n');
    system("pause");
    return 0;
}
////////////////////////////////////////////////////////////////////////////////
int power(int x,int y)
{
    int pow=1;
    for(int i=1;i<=y;i++)
    pow*=x;
    return pow;                   
}
////////////////////////////////////////////////////////////////////////////////
int factorial(int number)
{
    int fact=1;
    for(int i=1;i<=number;i++)
    fact*=i;
return fact;
}
////////////////////////////////////////////////////////////////////////////////
float compound(int m, int n)
{
      float C=static_cast<float>(factorial(m)/(factorial(n)*factorial(m-n)));
      return C;
}
////////////////////////////////////////////////////////////////////////////////            
float sin(float X)
{
      float sum=0;int sign=1;
      for(int i=0;i<100;i++){
                         sum+=sign*(pow(X,(2*i+1)))/factorial(2*i+1);
                         sign*=-1;
                         }
                         return sum;
}
////////////////////////////////////////////////////////////////////////////////                   
                         
              
