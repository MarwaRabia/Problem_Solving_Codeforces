#include<iostream>
using namespace std;

int main()
{
 
    int a,e=0;
    cin>> a ;
    for (int i = 2; i <a; i++)
    {
    
        if (a%i==0){
          e++;
           }
    
    }
    if (e!=0 |a==1)
    {
        
         cout<<"No"<<endl;
    }
    else
      cout<<"Yes"<<endl;
       
   

    return 0;
}