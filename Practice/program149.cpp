#include<iostream>
using namespace std;

int main()
{
    int *Brr = NULL;
    int iLength = 0, iCnt = 0;

    cout<<"Enter the Number of elements : \n";
    cin>>iLength;

    Brr = new int[iLength];

    cout<<"Ente the elements : \n";

    for(iCnt = 0; iCnt < iLength;iCnt++)
    {
        cin>>Brr[iCnt];
    }

    cout<<"Elements of the array are : \n";
    for(iCnt = 0; iCnt < iLength;iCnt++)
    {
        cout<<Brr[iCnt]<<endl;
    }

    delete []Brr;


    return 0;
}