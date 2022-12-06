/*
input: 789567    597768
Output:Number are anagram
*/


#include<iostream>
using namespace std;

bool CheckAnagram(int iNo1,int iNo2)
{
    int Frequency1[10]={0};
    int Frequency2[10]={0};

    bool Flag=true;

    while(iNo1!=0)
    {
        int iDigit=0;
        iDigit=iNo1 % 10;
        Frequency1[iDigit]++;  
        iNo1=iNo1 / 10;
    }

    while(iNo2!=0)
    {
        int iDigit=0;
        iDigit=iNo2 % 10;
        Frequency2[iDigit]++;
        iNo2=iNo2 / 10;
    }

    for(int iCnt=0;iCnt<10;iCnt++)
    {
        if(Frequency1[iCnt]!=Frequency2[iCnt])
        {
            Flag=false;
            break;
        }
        else
        {
            return Flag;
        }
    }
}

////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue1=0;
    int iValue2=0;
    bool bret=false;
    
    cout<<"Enter the first  Number:\n";
    cin>>iValue1;

    cout<<"Enter the second  Number:\n";
    cin>>iValue2;

    bret=CheckAnagram(iValue1,iValue2);

    if(bret==true)
    {
       cout<<"Number are anagram:"<<"\n";
    }
    else
    {
        cout<<"Number are Not anagram:"<<"\n";
    }
    return 0;

}

