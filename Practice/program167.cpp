#include<iostream>
using namespace std;

#pragma pack(1)
class ArrayX
 {
private:
        int *Arr;
        int iSize;
        
public: 
    //parametrised constructor with default Argument
    ArrayX(int X = 5)
    {  
       iSize = X;             
       Arr = new int[iSize];    
    }

    ~ArrayX()
        {
            delete []Arr;    
        }
};      

int main()
{
       
    ArrayX *aobj1 = new ArrayX();   //paramentrised constructor
    ArrayX *aobj2 = new ArrayX(15);  //paramentrised constructor
  
    //Function call
   
    delete aobj1;
    delete aobj2;

    return 0;
}
   

