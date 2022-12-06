//write a program which accept number from user and Count Frequency of 2 in it.

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
      void DisplayDigitReverse()
      {
         int iDigit=0;

         while(iNo!=0)
         {
            iDigit=iNo % 10;
            cout<<iDigit<<"\n";
            iNo=iNo / 10;
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

    obj.DisplayDigitReverse();

    return 0;

}