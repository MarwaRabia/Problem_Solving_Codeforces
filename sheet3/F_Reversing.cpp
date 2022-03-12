#include<iostream>
using namespace std;




int main(){
    int a;
    cin>>a;
    long long A[a] ;
    for (int i = 0; i < a; i++)
    {
        cin>>A[i];
    }
   for (int i = a-1; i >= 0; i--)
    {
        cout<<A[i] << " ";
        
    }
    
           
    

    return 0;
}
