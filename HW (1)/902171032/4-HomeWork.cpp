#include <iostream>
using namespace std;
int main()
{
    int N; int i=2,F1=1,F2=1,F3=0;
    cout<<"Enter number of series";
    cin>>N;
    while(N>i){
              F3=F1+F2;
              F1=F2;
              F2=F3;
              ++i;}
       cout<<"Fn ="<<F3<<endl;
       system("pause");
       return 0;
       }     
                     
