/*
input: 7985674
Output:Maximum times occured digit is 7 and its frequency is 4
*/


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
      void MaxFrequency()
      {
         int Temp=iNo;
         int iDigit=0;
         int Frequency[10]={0};

         while(Temp!=0)
         {
            iDigit=Temp % 10;
            Frequency[iDigit]++;
            Temp=Temp / 10;
         }
         
         int iMaxFrequency=0;
         int iMaxDigit=0;

         for(int iCnt=0;iCnt<10;iCnt++)
         {
            if(Frequency[iCnt]>iMaxFrequency)
            {
              iMaxFrequency=Frequency[iCnt];
              iMaxDigit=iCnt;
            }
         }
         cout<<"Maximum times occured digit is "<<iMaxDigit<<" and its frequency is"<<iMaxFrequency<<"\n";
      }
};
////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue=0;
    
    cout<<"Enter the Number:\n";
    cin>>iValue;

    DigitX obj(iValue);

    obj.MaxFrequency();
    return 0;

}

