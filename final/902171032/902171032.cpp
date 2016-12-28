

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <ctime>
using namespace std;
int EMPmem=0;// initial number of EMP
int CTRmem=0;// initial number of CTR
int CTRfive=0;// for the last five working account
int EMPcounter=1000; // baraee dastresi b EMP >>>> taqriban kare shomare karmandie
int CTRcounter=2000; // baraee dastresi b CTR >>>> taqriaban kare shomare hessab
//*****************************
inline void Goodbye() { cout<<"\t\t***Good bye dear user***"<<endl<<endl;}
//=============================
class CHAIRMAN
{
      protected:
                string CHMname;
                string CHMfamily;
                double CHMpass;
                bool CHManswer;
      public:
             CHAIRMAN(): CHMpass(0) {}
             
             void CHMset()
             {    CHMname="Amir";
                  CHMfamily="Hadifar";
                  CHMpass=1234;
             }
             
             double CHMpword(){return CHMpass;}
             
             bool CHMuser(string username,double password)
             {
                  if(username==CHMfamily&&password==CHMpass)
                  CHManswer=true;
                  else
                  CHManswer=false;
                  return CHManswer;
             }
};             
//------------------------------
class EMPLOYEE
{
      protected:
                char EMPname[25];
                char EMPfamily[25];
                double EMPpass;
                double EMPcID;
                bool EMPanswer;
      public:
             EMPLOYEE(): EMPpass(0),EMPcID(1000) {}
             void EMPget()
             {    
                  cout<<"Employee:"<<endl;
                  cout<<" Enter Employee name :";cin>>EMPname;
                  cout<<" Enter Employee family :";cin>>EMPfamily;
                  cout<<" Enter Employee password :";cin>>EMPpass;
				  cout<<" EMPLOYEE ID :"<<EMPcID<<endl;
              }

			 void EMPcounter(int EMPcounter){ EMPcID=EMPcounter; }
			 
			 double EMPretID(){return EMPcID;}

			 void EMPshow(){ cout<<"\nName:"<<EMPname<<" ,"<<EMPfamily<<" ID:"<<EMPcID; }
             
             double EMPpword(){ return EMPpass; }
             
             bool EMPuser(string user,double pword){
             if(user==EMPname&&pword==EMPpass)
             EMPanswer=true;
             else
             EMPanswer=false;
             return EMPanswer;
             }
};
//-----------------------------
class CUSTOMER
{
      protected:
                char CTRname[25];
                char CTRfamily[25];
                double CTRpass;
                double CTRcash;
                bool CTRanswer;
                double CTRcID;
                char CTRphone[25];
                double CTRcycle[5];
      public:
             CUSTOMER(): CTRpass(0),CTRcash(0),CTRcID(2000) {}
             void CTRget()
             {   
                 cout<<"Customer:"<<endl;
                 cout<<" Enter Customer name :";cin>>CTRname;
                 cout<<" Enter Customer family :";cin>>CTRfamily;
                 cout<<" Enter Customer pass :";cin>>CTRpass;
                 cout<<" Enter Customer Phone number :";cin>>CTRphone;
                 cout<<" Enter Customer cash :";cin>>CTRcash;
				 cout<<" Coustmer ID :"<<CTRcID<<endl;
				 for(int k=0;k<5;k++)
				 CTRcycle[k]=0;// for five last working
				 CTRcycle[CTRfive++]=CTRcash;
             }
             void CTRshowCash()
             { cout<<"Your Cash is :"<<CTRcash<<" $"<<endl; }
             
             void CTRinquire()
             { cout<<"Your Current Cash :"<<CTRcash<<"$"<<endl; } 
             void CTRshow()
			 { cout<<"Name:"<<CTRname<<" , "<<CTRfamily<<" ID :"<<CTRcID<<endl; }
             
             bool CTRuser(string user,double pword){
             if(user==CTRfamily&&pword==CTRpass)
             CTRanswer=true;
             else
             CTRanswer=false;
             return CTRanswer;
             }
             
			 void CTRcounter(int CTRnumber){ CTRcID=CTRnumber; }
			 

             double CTRretID(){ return CTRcID; }
             
             void CTRdeposit(int money,CUSTOMER customer[],int i)
             {
                  if(money>CTRcash)
                  cout<<"Your Cash isn't Enough !"<<endl;
                  else if(money<=CTRcash)
                  {
                  CTRcash-=money;
                  customer[i].CTRcash+=money;
                  CTRcycle[CTRfive++]=CTRcash;// for five last working
                  cout<<"Deposit is Done !"<<"Your Cash is :"<<CTRcash<<" $"<<endl;
                  }
             }
             
             void CTRwithdraw(int money)
             {
                  if(money>CTRcash)
                  cout<<"Your Cash isn't Enough !"<<endl;
                  else
                  {
                      CTRcash-=money;
                      CTRcycle[CTRfive++]=CTRcash;// for five last working
                      cout<<"Withdraw is done ! Now Your Cash is :"<<CTRcash<<endl;
                  }
             }
             
             void CTRincrease(int money)
             {
                  CTRcash+=money;
                  CTRcycle[CTRfive++]=CTRcash;// for five last working
                  cout<<"Increament is Done ! Now Your Cash is :"<<CTRcash<<endl;
                  
             }
             
             void CTRcyc()
             {
                  for(int i=0;i<5;i++){
                  if(i==0)
                  cout<<"Your Cash increase "<<CTRcycle[0]<<" $"<<" Cash:"<<CTRcycle[0]<<endl;
                  else if(CTRcycle[i]>CTRcycle[i-1])
                  cout<<"Your Cash increase "<<CTRcycle[i]-CTRcycle[i-1]<<" $"<<" Cash:"<<CTRcycle[i]<<endl;
                  else
                  cout<<"Your Take "<<CTRcycle[i]-CTRcycle[i-1]<<" $"<<" Cash:"<<CTRcycle[i]<<endl;
                  }
                  
             }    
             
                  
};
//--------------------------------
int main()
{
    string name;
    int EMPomit,CTRomit,var,EMPaccID,position,CTRnumber;          
    double password;                         
    CHAIRMAN chairman;                       
    EMPLOYEE emp;
    CUSTOMER cus;
    EMPLOYEE employee[10];                  // all the variables are here 
    CUSTOMER customer[100];                   
    bool ans;
	char answer;                                                                      
    
	fstream EMPLOYEE;
    fstream CUSTOMER;
	fstream EMPlogin;
	fstream CTRlogin;
//***********************************************************************************************************end of variable

	EMPLOYEE.open("EMP.txt",ios::binary |ios::in |ios::out |ios::app);
    CUSTOMER.open("CUS.txt",ios::binary |ios::in |ios::out |ios::app);
	EMPlogin.open("EMPlogin.txt",ios::binary | ios::in |ios::out);
	CTRlogin.open("CTRlogin.txt",ios::binary | ios::in |ios::out);
	chairman.CHMset();                                         // get info of chairman
	
	
	EMPLOYEE.seekg(0,ios::end);     
    position=EMPLOYEE.tellg();	
	if(position==0){
       do{
                                //get information of some employee 
         // baraee shomare karmandi
		  emp.EMPcounter(EMPcounter++); // be tore atoumatic shomare karmandi nafare badi ro hesab mikone
		  emp.EMPget();
          EMPLOYEE.write(reinterpret_cast<char*>(&emp),sizeof(emp));
          cout<<"Another Employee ?(y/n)";cin>>answer;
          }while(answer!='n');
          cout<<endl;
                }// end of if position
  
  
      EMPLOYEE.seekg(0);  
      EMPLOYEE.read(reinterpret_cast<char*>(&emp),sizeof(emp));
      emp.EMPcounter(EMPcounter++);
	  employee[EMPmem]=emp;
	  while(!EMPLOYEE.eof())
      {
      EMPLOYEE.read(reinterpret_cast<char*>(&emp),sizeof(emp));
      emp.EMPcounter(EMPcounter++);
	  employee[++EMPmem]=emp;
      
	  }// end of read EmP from file;
      
	
	CUSTOMER.seekg(0,ios::end); 
    position=CUSTOMER.tellg();
  if(position==0){
    do{
       cus.CTRcounter(CTRcounter++);// baraee shomare hesab
       cus.CTRget();                         //*******get info of some custoemer dont forget
       CUSTOMER.write(reinterpret_cast<char*>(&cus),sizeof(cus));
       cout<<"Another Customer ?(y/n)";cin>>answer;
       }while(answer!='n');
       cout<<endl;                                            
                  }// end of if for postion of customer  
  
  
	  CUSTOMER.seekg(0);
	  CUSTOMER.read(reinterpret_cast<char*>(&cus),sizeof(cus));
	  cus.CTRcounter(CTRcounter++);
	  customer[CTRmem]=cus;
	  while(!CUSTOMER.eof())
	  {
		  CUSTOMER.read(reinterpret_cast<char*>(&cus),sizeof(cus));
		  cus.CTRcounter(CTRcounter++);
		  customer[CTRmem++]=cus;
	  }
  //end of rad cus from file
	  


	 system("color 09");

	  //***********************************************************************************************************end of initials                                                             
for(int i=0;i<4;i++){ //for 3 times wrong password
	system("cls");
    cout<<"\t\t\t ***ATM SYSTEM***\n\n"<<endl;
    cout<<"Please Enter Your family name :";cin>>name;       // this is for Entering to system
    cout<<"Please Enter Your Password :";cin>>password;
    cout<<endl;

    if(chairman.CHMuser(name,password)==true){ // agar true bood mire b menu raeese 
do{
    cout<<"\nMenu of Chairman:\n\t [1]: Create new Employee\n\t [2]: Omit an Employee \n\t "
        <<"[3]: show a list of Employee with their Account ID \n\t [4]: Quit";cin>>var;
    switch(var)        // swtich for Chairman to create or omit employee 
     {
             case 1:
                  cout<<"\n\t\t***Creating new EMPLOYEE*** "<<endl;
                  EMPLOYEE.seekg(0,ios::end);
				  emp.EMPcounter(EMPcounter++);
				  emp.EMPget();
                  EMPLOYEE.write(reinterpret_cast<char*>(&emp),sizeof(emp));
                  employee[EMPmem++]=emp;
                 
				  break;
                  
             case 2:
                  cout<<"\n\t\t***Omit an EMPLOYEE*** "<<endl;
                  
                  cout<<"Enter ID of Employees :";cin>>EMPaccID;         //     
                  
                  for(int i=0;i<EMPmem;i++){
                  if(employee[i].EMPretID()==EMPaccID){
				  ans=true;
                  employee[i].EMPshow();
                  cout<<endl<<"You removed This person !"<<endl;
                  EMPomit=i;
                  break;} // end of if
                  }
                  if(ans==false)          // agar chairman shomare ehstebeha vared konad gir mide besh !
                  {
                  cout<<"\nYour entry ID is wrong ! TRY AGAIN !"<<endl;
                  continue;
                  }     
                  
                  
                  for(int j=EMPomit;j<EMPmem;j++)
				  { employee[j]=employee[j+1]; }                        // this is for arrangeing EMP members
                  EMPmem--;
                  break;
                  
             case 3:
                  cout<<"List of All Employee & their Account ID :"<<endl;
                  for(int i=0;i<EMPmem;i++){
                  employee[i].EMPshow();}
                  break;
             
             case 4:
                  Goodbye();
				  break;

             default:
                     cout<<"Try again ! choose number of above !"<<endl;
                     continue;
					
    }
	
 
}while(var!=4);

} // end of if use for chairman                                  
     /////////////////////////////////////////////////////////////// payane menue chairman
    for(int i=0;i<EMPmem;i++){ 
    if(employee[i].EMPuser(name,password)==true){
do{
    cout<<"\nMenu of Employee:\n\t [1]: Add new Customer"
		<<"\n\t [2]: Remove an Customer \n\t [3]: List of all Customers! \n\t [4]: Quit";cin>>var;
    switch(var)
    {
             case 1:
                  cout<<"\n\t\t***Creating new CUSTOMER*** "<<endl;
				  
				  CUSTOMER.seekg(0,ios::end);
				  cus.CTRcounter(CTRcounter++);
				  cus.CTRget();
                  CUSTOMER.write(reinterpret_cast<char*>(&cus),sizeof(cus));
                  customer[CTRmem++]=cus;			  
				  break;
             case 2:
                   cout<<"\n\t\t***Omit an CUSTOMER*** "<<endl;
                   cout<<"Enter ID of Customer :";cin>>CTRnumber;
                   
                   for(int i=0;i<=CTRmem;i++){
                  if(customer[i].CTRretID()==CTRnumber){
                  cout<<"That's correct !"<<endl<<endl;           // find the customer that want to remove
                  cout<<"This person Omit :\n";customer[i].CTRshow();
                  CTRomit=i;
                  break;}
                  }
                  cout<<endl<<endl;
    
                  for(int j=CTRomit;j<CTRmem;j++)
				  { customer[j]=customer[j+1];}   // Arrange customers  
                  CTRmem--;
                  break;

			 case 3:
				  cout<<"List of All Customer & their Account ID :"<<endl;
                  for(int i=0;i<CTRmem;i++)
                  customer[i].CTRshow();
                  break;
             
             case 4:
                  Goodbye();
				  break;
             default:
                     cout<<"Try again ! choose number of above !"<<endl;
                     continue;
    }
       
}while(var!=4);                         
}// end of if EMP
}
////////////////////////////////    /////////////////// end of EMP
      for(int j=0;j<CTRmem;j++){ 
         if(customer[j].CTRuser(name,password)==true){
           do{
           CTRnumber=j;
           cout<<"\nMenu of Customer:\n\t [1]: Inquire balance  \n\t [2]: Deposit \n\t [3]: Withdraw \n\t "
               <<"[4]: Increament of your Cash \n\t [5]: The last five working account \n\t [6]: Quit";cin>>var;
               switch(var)
               {
                        case 1:
                             customer[CTRnumber].CTRinquire();
                             break;
                        case 2:
                             cout<<"Enter the Account ID of the person that you want to Deposit :";cin>>var;
                             for(int i=0;i<CTRmem;i++)
                             if(customer[i].CTRretID()==var)
                             {cout<<"That person "; customer[i].CTRshow();
                              cout<<"Enter amount of money you want to Deposit $:";cin>>var;
                              customer[CTRnumber].CTRdeposit(var,customer,i);
                              }
                              else
                              continue;
                        
                              break;
                        case 3:
                             cout<<"Enter amount of money you want to Withdraw $:";cin>>var;
                             customer[CTRnumber].CTRwithdraw(var);
                             break;
                        case 4:
                             cout<<"Enter amount of money you want to add to your Cash $:";cin>>var;
                             customer[CTRnumber].CTRincrease(var);
                             break;
                        case 5:
                             customer[CTRnumber].CTRcyc();
                             break;
                             
                        case 6:
							Goodbye();
                            break;
							
                        default:  
                                cout<<"Try again Choose number of above ";
                                continue;
               
			   
			   
			   
			   
			   
			   
			   
			   
			   
			   
			   
			   
			   }//end of swtich
               cout<<endl;         
               }while(var!=6);
               
}//end of if 
}// end of for
	  
}// end of first for it for more than 3 time wrong password
    
    
     
    




system("pause");
    return 0;
}
                  
                  
            
    
    
    
    
    
    
    
    
    
    
    
    
    
             
