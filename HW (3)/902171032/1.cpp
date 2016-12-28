#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;
double get(double[11]);
//------------------
int main()
{
    double number1,number2;
    double char1[11],char2[11];
    cout<<"Enter first number as Character then press Enter :";
    number1=get(char1);
    cout<<"\nEnter second number as Character then press Enter :";
    number2=get(char2);
    cout<<"\nSum is :"<<number1+number2<<endl;
    cout<<"Substraction is :"<<number1-number2<<endl;
    
    system("pause");
    return 0;
}
//-------------------
//function for change character to binary code then change binary code to number !
double get(double character[])
{
Fstloop:
    int i;double k,j=0;
    double ch[11];double sum=0; 
    for(i=0;i<11;i++)
    {
    ch[i]=getche();//put character into arrays !
    
    if(ch[i]=='\r'){    // if user press enter it means that number is finished !
    break; }
    if(ch[i]>57||ch[i]<48)    // if user enter character apart from the digit ,  program 
                             //tell to user it's not 
    {                       //correct !
    cout<<"\nYour input Isn't Correct, Enter another number : ";
    goto Fstloop;
    }
    j++;
    }
    k=j;
    for(i=0;i<=j-1;i++){
    k--;
    sum+=(ch[i]-48)*(pow(10,k));
    }
    return sum;
}                       
        
        
        
                
                        
    
    
    
