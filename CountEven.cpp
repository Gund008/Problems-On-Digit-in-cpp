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
      int CountEven()
      {
         int iDigit,iCnt=0;

         while(iNo!=0)
         {
            iDigit=iNo % 10;
            if((iDigit % 2)==0)
            {
                iCnt=iCnt + 1;
            }
            iNo=iNo / 10;
         }
         return iCnt;
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

    iRet=obj.CountEven();

    cout<<"Count of even Digit:"<<iRet<<"\n";

    return 0;

}