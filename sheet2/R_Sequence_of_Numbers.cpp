#include<iostream>
using namespace std;

int main()
{
 
  
    int a,c,s=0;
    cin>> a>>c;
   
    while (a>0 and c>0)
    {
           s=0;
      
        if(a<c){
     for (int j = a; j <= c; j++)
     {
        cout<<j<<" ";
         s+=j;
        
     }
     }

     else{

       for (int j = c; j <= a; j++)
     {
        cout<<j<<" ";
         s+=j;
        
     }
     }
     cout<<"sum ="<<s;;
     cout<<endl;
       cin>> a>>c;
    }
    
     
     
      
    
   
       
   

    return 0;
}