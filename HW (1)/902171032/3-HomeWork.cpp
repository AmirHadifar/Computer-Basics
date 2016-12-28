#include <iostream>
using namespace std;
int main()
{
    int x;
    int i=0,sum=0,k=0;
    cout<<"please Enter Num\t";
    cin>>x;
    while(i<99){
              if(x>0){
                      sum+=x;
                      ++k;}
              ++i;
              cout<<"Enter Another number\t";
              cin>>x;
              }
              float AVERAGE;
              AVERAGE=sum/k;
              cout<<"AVERAGE = "<<AVERAGE<<endl;
              
              
              
              system("pause");
              return 0;
              }
              
                      
                      
