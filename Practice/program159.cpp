#include<iostream>
using namespace std;

#pragma pack(1)
class ArrayX
 {
public:
        int *Arr;
        int iSize;

        //Parametrised constructor
        ArrayX(int X)
        {
            cout<<"Inside constructor\n";
            iSize = X;                // Characteristics initiallisation
            Arr = new int[iSize];    //Resource allocation
        }

        //destructor
        ~ArrayX()
        {
            cout<<"Inside destructor\n";
            delete []Arr;    //Resource deallocation
        }
};      

int main()
{
    //Static memory allocation of object
    //ArrayX aobj(5);      

    ArrayX *aobj1 = new ArrayX(5);
    
    return 0;
}
   
