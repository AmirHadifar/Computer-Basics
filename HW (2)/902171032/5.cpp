#include <iostream>
using namespace std;
////////////////////////////////////////////////////////////////////////////////
struct  ComplexNum
{
        int x,y;
};
////////////////////////////////////////////////////////////////////////////////
ComplexNum addcom(ComplexNum,ComplexNum);
ComplexNum minuscom(ComplexNum,ComplexNum);
ComplexNum muliplycom(ComplexNum,ComplexNum);
void display(ComplexNum);
int main()
{
    int n;
    ComplexNum A,B,add,minus,muliply;
    cout<<"Menu:\n\t1.Add\n\t2.Minus\n\t3.Muliply\nChoose Your Number :";cin>>n;//choose operator
    cout<<"Enter x1 :";cin>>A.x;
    cout<<"Enter y1 :";cin>>A.y;                //define the x,y
    cout<<"\nEnter x2 :";cin>>B.x;           
    cout<<"Enter y2 :";cin>>B.y;
    
    
    switch(n)
    {
             case 1:
                  add=addcom(A,B);
                  display(add);                 //for add
                  break;
             case 2:
                  minus=minuscom(A,B);
                  display(minus);               // for minus
                  break;
             case 3:
                  muliply=muliplycom(A,B);
                  display(muliply);             // for muliply
                  break;
             default:
             cout<<"Try Again Baby !\n";
    }
    system("pause");
    return 0;
}
////////////////////////////////////////////////////////////////////////////////
ComplexNum addcom(ComplexNum A1,ComplexNum B1)//function for add 2 complex number 
{
           ComplexNum ComplexNumAdd;
           ComplexNumAdd.x = A1.x + B1.x;
           ComplexNumAdd.y = A1.y + B1.y;
           return  ComplexNumAdd;
}
////////////////////////////////////////////////////////////////////////////////
ComplexNum minuscom(ComplexNum A1,ComplexNum B1)//function for minus 2 complex number
{
           ComplexNum ComplexNumMinus;
           ComplexNumMinus.x = A1.x - B1.x;
           ComplexNumMinus.y = A1.y - B1.y;
           return ComplexNumMinus;
}
////////////////////////////////////////////////////////////////////////////////
ComplexNum muliplycom(ComplexNum A3,ComplexNum B3)//function for muliply 2 complex number
{
           ComplexNum ComplexNumMuliply;
           ComplexNumMuliply.x = A3.x*B3.x - A3.y*B3.y;
           ComplexNumMuliply.y = A3.x*B3.y + B3.x*A3.y;
           return ComplexNumMuliply;
}
////////////////////////////////////////////////////////////////////////////////
void display(ComplexNum answer)// display the complex number >>> A + iB
{
     cout<<"Answer is : "<<answer.x<<" + i("<<answer.y<<")"<<endl;
}
////////////////////////////////////////////////////////////////////////////////






