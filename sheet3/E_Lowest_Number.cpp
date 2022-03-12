#include<iostream>
using namespace std;




int main(){
    int a,min,index=0;
    cin>>a;
    long long A[a] ;
    for (int i = 0; i < a; i++)
    {
        cin>>A[i];
    }
  min=A[0];
   for (int i = 0; i < a; i++)
    {
        if (A[i]<min){
          min=A[i];
          index=i;
          }
        
    }
    cout<<min << " " <<index+1<<endl;
           
    

    return 0;
}
