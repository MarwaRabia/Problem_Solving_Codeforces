#include<iostream>
using namespace std;

int main()
{
 
  
    int b,a,c,s=0;
    cin>> b;
    
    for (int i = b; i>0; i--)
    {
        s=0;
        cin>> a>>c;
        if(a<c){
     for (int j = a+1; j < c; j++)
     {
        if (j%2!=0)
        {
            s+=j;
        }
        
     }
     }

     else{

       for (int j = c+1; j < a; j++)
     {
        if (j%2!=0)
        {
            s+=j;
        }
        
     }
     }
     cout<<s;
     cout<<endl;
     
      
    }
   
       
   

    return 0;
}