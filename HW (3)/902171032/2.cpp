#include <iostream>
using namespace std;
//------------------
void Build(int[],int);
void Arrange(int[],int);
void Display(int [],int);
int main()
{
    int number1,number2,i;
    cout<<"Enter number of array you like to build for ASCENDANT ARRAY :";cin>>number1;
    int ASCarray[number1];
    Build(ASCarray,number1);
      //end of first function !
    cout<<"Enter number of array you like to build for FALLING ARRAY :";cin>>number2;
    int FALarray[number2];
    Build(FALarray,number2);
      // end of second function !
     system("cls");
     
     cout<<"The stored Data are :"<<endl;
     int TEMP[number1+number2];
     
     for(i=0;i<number1;i++)
     TEMP[i]=ASCarray[i];
     
     for(i=number1;i<number1+number2;i++)
     TEMP[i]=FALarray[i-number1];
     Arrange(TEMP,number1+number2);
     Display(TEMP,number1+number2);
      
    
    
    
system("pause");
return 0;
}
/////////////////////
void Build(int Builder[],int number)
{
    for(int i=0;i<number;i++)
    {
    cout<<"Enter a number :";         // for creating arrays !
    cin>>Builder[i];
    }
}    
//////////////////////////
void Arrange(int ARN[],int number)
{
     int i,j,temp;
     for(i=number-1;i>0;i--)
        for(j=0;j<i;j++)
        if(ARN[j]>ARN[j+1])
        {                                // this is for Arrange data 
        temp=ARN[j];
        ARN[j]=ARN[j+1];
        ARN[j+1]=temp;
        }
}
/////////////////////////
void Display(int Dis[],int number)
{
     for(int i=0;i<number;i++)
     cout<<Dis[i]<<" ,";                // this is for display of final output
     cout<<endl;
}        









