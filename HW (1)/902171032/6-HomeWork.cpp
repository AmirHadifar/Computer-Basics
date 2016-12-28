#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a,b;      //Bases//
    cout<<"Please Enter Base of a = ";
    cin>>a;
    cout<<"please Enter Base of b = ";
    cin>>b;
    if(a<=10&&a>=2&&b<=10&&b>=2){
             if(a==10){ 
                              int x;
                              cout<<"please Enter a Number in Base of "<<a<<" = ";
                              cin>>x;
                              int s=0; int i=0;
                              while(x!=0){
                                          int r; int q;
                                          r=x%b;
                                          s+=r*((long int)pow((float)a,i));
                                          q=(x-r)/b;
                                          x=q;
                                          ++i;
                                          }
                         cout<<"The Number in base  "<<b<<" = "<<s<<endl;
                         }  
              else  {//adade morede nazar dar mabnae qeyre 10 bud tabdil be 10 mishe//
                 int x;
                 cout<<"please Enter a Number in Base of "<<a<<" = ";
                 cin>>x;
                    int sum1=0;
                     while(x!=0){
                              int i=0;  int r,q;          
                                 r=x%10;
                                sum1+=r*((long int)pow((float)a,i));
                                q=(x-r)/a;
                                x=q;
                                 i++;
                                 }
                                 
                                int sum2=0;
                                while(sum1!=0){
                                      int i=0;   int r; int q;
                                          r=sum1%b;
                                          sum2+=r*((long int)pow((float)10,i));
                                          q=(sum1-r)/b;
                                          sum1=q;
                                          i++;
                                           }
                             cout<<"The Number in base "<<b<<" = "<<sum2<<endl;}
                     }
    else {
                      cout << " It's too difficult to calculate the number in this Base ! so enter the number \nbetween 2-10 :) TanQ"<<endl;
                      }         
system ("pause");
return 0;
}            
                             
                          
                         
            

