#include <iostream>
using namespace std;
const int Member = 2;
int loan;
//---------------------
class Student
{
      private:
              int Semester;
              float Ave;
      public:
             int Id;
             void IDENTITY()
             {
             cout<<"Enter Student ID :";cin>>Id;
             cout<<"Enter Student Semester :";cin>>Semester;
             cout<<"Enter Student Average :";cin>>Ave;
             }
};
//------------------
class AccountID
{
      private:
              int AccID;
              double Cash;
      public:
             int money;
             void GetACCID(){cout<<"Enter Student Account ID :";cin>>AccID;}
             void GetCash(){cout<<"Enter Student Cash:";cin>>Cash;cout<<endl;}
             double CASH(){return Cash;}
             void Deposit()
             {
             cout<<"Enter the money u want to Deposit :";cin>>money;
             Cash+=money;
             cout<<"Now your Cash is :"<<Cash<<endl;
             }
             
             void Take()
             {
             cout<<"Enter the money u want to take out from your Account: ";cin>>money;cout<<"$";
             Cash-=money;
             cout<<"You take "<<money<<"$ Now Your Cash is :"<<Cash<<endl;
             }
                  
                   
      };
//--------------------------
int main()
{
    int number,i,SID,SID2,count[100]={0}; Student S[Member]; AccountID SS[Member];
    char answer;double temp[100];
    
         for(i=0;i<Member;i++)
         {
         cout<<"Enter Identity of Student "<<i+1<<":"<<endl;
         S[i].IDENTITY();                                   // idnetity of [member] student !
         SS[i].GetACCID();
         SS[i].GetCash();
         }
         
  do{     
Again:   cout<<"Enter Student's ID,to login :";cin>>SID;
          for(i=0;i<Member;i++)
         {
         if(SID==S[i].Id)
         break;
         }
         if(SID!=S[i].Id){
         cout<<"It's wrong ID ! Try Again"<<endl;
         goto Again;}
         
         cout<<"\nMENU:\n"
             <<" 1.Deposits to the account\n"
             <<" 2.take from your account\n"
             <<" 3.Move money to another account\n"
             <<" 4.requst for a loan\n"
             <<"choose of the number of above :";cin>>number;
             cout<<endl;
             
             switch(number)
             {
             case 1:
                    SS[SID].Deposit();
                    break;
             case 2:
                    SS[SID].Take();
                    break;
             case 3:
                    cout<<"Enter ID of Student u want to move your money to his/her account :";
                    cin>>SID2;
                    SS[SID].Take();
                   temp[SID2]=SS[SID2].CASH();
                   temp[SID2]+=SS[SID].money;
                    cout<<"The account has been charged now!\n "
                        <<"Student ID:"<<SID2<<" have "
                        <<temp[SID2]<<"$"<<endl;
                        
                    break;            
             case 4:
                  if(count[SID]>2)
                  {cout<<"It's not possible for us to take a loan to You "<<endl;break;}
                  count[SID]++;
                  cout<<"You GET loan "<<count[SID]<<" times"<<endl;
                  temp[SID]=SS[SID].CASH();
                  temp[SID]+=100000;
                  cout<<"Your Account Charged now u have "<<temp[SID]<<endl;
                  break;
             
             default:
                     cout<<"It's not Correct try again !"<<endl;
                  }
         
         
         cout<<"do u want to continue !?(y/n)";cin>>answer;
         cout<<endl;
         }while(answer!='n');
    
    
    system("pause");
    return 0;
}
