#include <iostream>
using namespace std;
int main()
{
         int x;
         int i=0,j=0;
         cout<<"please Enter a Num = ";
         cin>>x;
         while(x!=0){     
              if(x>0){
                      cout<<"i = "<<++i<<endl;}
                      
              else if(x<0){
                   cout<<"j = "<<++j<<endl;}
                   cout<<"if u want to continiue enter another Num "<<endl;
                   cin>>x;} 
         if(x==0)
               cout<<"i= "<<i<<endl;
               cout<<"j= "<<j<<endl;
                   
system("pause");
return 0;
}
                               
                  
