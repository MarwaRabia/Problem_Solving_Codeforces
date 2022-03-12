#include<iostream>
using namespace std;

int main()
{
 
    int a,f=0;
    cin>> a ;
    for (int i = 1; i <= a; i++)
    {
        
        if (i%2==0){
           cout<<i<<endl;
           f=f+1;
           
           }
      
    }
      if(f==0)
        cout<<-1<<endl;

    
    
    
    return 0;
}