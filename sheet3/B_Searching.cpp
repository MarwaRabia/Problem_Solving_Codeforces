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
    cin>>b;
   for (int i = 0; i < a; i++)
    {
        if (A[i]==b){
        cout<<i;
        return 0;
        }
    }
    cout<<-1;

    return 0;
}
