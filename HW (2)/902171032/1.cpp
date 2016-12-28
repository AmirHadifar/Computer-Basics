#include <iostream>
#include <conio.h>
using namespace std;
////////////////////////////////////////////////////////////////////////////////
enum Boolean{False=0,True=1};
////////////////////////////////////////////////////////////////////////////////
int main()
{
    char answer;  int n;
    do{
         Boolean prime=True;
         cout<<"PLEASE ENTER A NUMBER :";cin>>n;
         for(int i=2;i<=n/2;i++){
                                if(n%i==0)
                                prime=False;
                                }
         if(n==2)
         prime=True;
         switch(prime){
                       case 0:
         cout<<"is prime : False"<<endl;
         break;
                       case 1:    
         cout<<"is prime : True"<<endl;
         break;
         }
                                 
                                
         cout<<"do u want to continue ?(y/n)";
         cin>>answer;
                 
    }while(answer!='n');
                 
                  system("pause");
                  return 0;
}
                   
    
