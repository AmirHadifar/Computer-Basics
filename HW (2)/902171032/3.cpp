#include <iostream>             
#include <conio.h>
using namespace std;
///////////////////
char Email(char);
int main()
{
    bool ismail;
    do{
       char mail;
       cout<<"Enter your Email :";
       Email(mail);
       }while(ismail!=true);
    
                         
                         

    
    
    system("pause");
    return 0;
}
char Email(char mail1){ 
    int i=0;
    bool ismail;
    char phrase;
    cout<<"Enter your Email and press Enter(2times):\n";
    do{
                 phrase=getche();
                 if(phrase=='@'){i++;
                                 do{
                                 phrase=getche();
                                 if(phrase=='@')
                                 i++;
                                 if(phrase=='\r')
                                 break;
                                 }while(phrase!='.');
                                 
                                                 phrase=getche();
                                                 if(phrase=='c'){
                                                                 phrase=getche();
                                                                 if(phrase=='o'){
                                                                                 phrase=getche();
                                                                                 if(phrase=='m'){
                                                                                                 phrase=getche();
                                                                                                 if(i==1)
                                                                                                 ismail=true;
                                                                                                 else
                                                                                                 ismail=false;
                                                                                                 }
                                                                                }
                                                                 }
                                                 
                                 }
                                 else
                                 ismail=false;
               phrase=getche();                                                                 
    }while(phrase!='\r');
    cout<<"\nis it correct : "<<boolalpha<<ismail<<endl;

}
