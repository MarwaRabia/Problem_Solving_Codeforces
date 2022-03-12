#include<iostream>
using namespace std;




int main(){
    int a,b;
    cin>>a;
    long long A[a] ;
    for (int i = 0; i < a; i++)
    {
        cin>>A[i];
    }

   for (int i = 0; i < a; i++)
    {
        if (A[i]<=10)
          cout<<"A[" << i << "] = " <<A[i]<<endl;
           
        
    }
    

    return 0;
}
