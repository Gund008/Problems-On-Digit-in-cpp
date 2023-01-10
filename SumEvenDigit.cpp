#include<iostream>
using namespace std;

class DigitX
{
    public:
        int iNo;  //characteristics

        DigitX(int i)
        {
           iNo=i;
        }
        int SumEvenDigit()
        {
            int iDigit=0;
            int iSum=0;

            while(iNo!=0)
            {
                iDigit=iNo % 10;
                if(iDigit % 2==0)
                {
                    iSum=iSum +  iDigit;
                }
                iNo=iNo / 10;
            }
            if(iSum==-1)
            {
                return -1;
            }
            else 
            {
                return iSum;
            }
        }
};


int main()
{
    int iValue=0;
    cout<<"Please Enter Number:"<<endl;
    cin>>iValue;

    DigitX dobj(iValue);
    int iRet=dobj.SumEvenDigit();
    cout<<"Sum of EvenDigit:"<<iRet<<endl;
    
    return 0;
}