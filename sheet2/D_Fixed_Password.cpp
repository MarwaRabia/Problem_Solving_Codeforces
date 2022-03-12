#include<iostream>
using namespace std;

int main()
{
 
    int a,f=0,c=0,w=0;
    
    while (f!=1)
    {
        cin>> a ;
         if (a==1999)
              {
                c++;
                f=1;
             }
        else
          w++;
    }
    for (int i = 0; i < w; i++)
    {
        cout<<"Wrong"<<endl;
    }
    for (int i = 0; i < c; i++)
    {
         cout<<"Correct"<<endl;
    }
    
    

    
   
    
   



    
    
    
    return 0;
}