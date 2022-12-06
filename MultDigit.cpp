//write a program which accept number from user and return the count Even.
#include<iostream>
using namespace std;

class DigitX
{
    public:
      int iNo;

      DigitX()
      {
        iNo=0;
      }
      DigitX(int i)
      {
        iNo=i;
      }
      int MultDigit()
      {
         int iDigit,iCnt=0;
         int iMult=1;

         while(iNo!=0)
         {
            iDigit=iNo % 10;
            iMult=iMult * iDigit;
            iNo=iNo / 10;
         }
         return iMult;
      }
};
////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue=0;
    int iRet=0;
    
    cout<<"Enter the Number:\n";
    cin>>iValue;

    DigitX obj(iValue);

    iRet=obj.MultDigit();

    cout<<"Multiplication of  Digit:"<<iRet<<"\n";

    return 0;

}