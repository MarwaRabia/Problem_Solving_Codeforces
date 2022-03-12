#include<iostream>
using namespace std;
#include <cmath>


string toBinary(int n)
{
    string r;
    while (n != 0){
        r += ( n % 2 == 0 ? "0" : "1" );
        n /= 2;
    }
    return r;
}


int convert(long long n) {
  int dec = 0, i = 0, rem;

  while (n!=0) {
    rem = n % 10;
    n /= 10;
    dec += rem * pow(2, i);
    ++i;
  }

  return dec;
}

int main()
{
 
  
    int n;
    cin>>n;
    for (int i = 0; i <n; i++)
    {
    int n,a,binary=0,rem=0,product=1,s=0,de=0;    
    cin>> a;
    
    
    
   //   while (a!=0)
   //   {
   //      rem=a%2;
   //      binary=binary+(rem*product);
        
   //      product*=10;
   //      a/=2;
   //   }

   binary=stoi(toBinary(a));
   
   
    //cout<<binary<<endl;
       rem=0;

     while (binary!=0)
     {
         rem=binary%10;
         if (rem==1)
           s++;
        binary/=10;
     }
      //cout<<s<<endl;
      rem=0;
 
     for (int i = 0; i < s; i++)
     {
         de+=pow(2,i);
         
     }
      cout<<de<<endl;
     
      
    }
   
       
   

    return 0;
}