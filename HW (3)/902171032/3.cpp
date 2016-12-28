#include <iostream>
using namespace std;
void getarray(int[],int);
void ARRANGE(int[],int);
void Display(int[],int);
int main()
{
    int num;
    cout<<"Enter number of arrays you would like to create :";cin>>num;
    int GETarray[num];
    getarray(GETarray,num);
    ARRANGE(GETarray,num);
    Display(GETarray,num);
    
    system("pause");
    return 0;
}
//--------------
void getarray(int get[],int number)
{   
    for(int i=0;i<number;i++)
    { 
    cout<<"Enter number:";cin>>get[i];
    }
}
//-------------
void ARRANGE(int ARNG[],int number)
{
         int i,j,temp;
     for(i=number-1;i>0;i--)
        for(j=0;j<i;j++)
        if(ARNG[j]>ARNG[j+1])
        {
        temp=ARNG[j];
        ARNG[j]=ARNG[j+1];
        ARNG[j+1]=temp;
        }
}
//-------------
void Display(int Dis[],int number)
{
     
     for(int i=0;i<number;i++)
     cout<<Dis[i]<<" ,";
     cout<<endl;
}
