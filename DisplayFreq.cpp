/*
input: 7985674
Output: 4 Occures 1 times 
        5  Occures 1 times
        6 Occures 1 times 
        7  Occures 1 times
        8 Occures 1 times 
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
      void DispalyFrequency()
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
         
         for(int iCnt=0;iCnt<10;iCnt++)
         {
            if(Frequency>0)
            {
              cout<<iCnt<<"occrs at"<<Frequency[iCnt]<<"times"<<"\n";
            }
         }
      }
};
////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue=0;
    
    cout<<"Enter the Number:\n";
    cin>>iValue;

    DigitX obj(iValue);

    obj.DispalyFrequency();
    return 0;

}

