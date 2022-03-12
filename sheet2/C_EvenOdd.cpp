#include<iostream>
using namespace std;

int main()
{
 
    int a,n,e=0,o=0,p=0,neg=0;
    cin>> a ;
    for (int i = 1; i <= a; i++)
    {
        cin >> n ;
        if (n%2==0){
          e++;
           }
        else
           o++;
        if (n<0){
          neg++;
           }
        else{
          if (n!=0)
           p++;
           }
      
    }
      cout<<"Even: "<<    e<<endl;
      cout<<"Odd: "<<     o<<endl;
      cout<<"Positive: "<<p<<endl;
      cout<<"Negative: "<<neg<<endl;




    
    
    
    return 0;
}