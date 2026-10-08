#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

   
    for (int i = 1; i <= n; i++)
    {
        /* code */for (int j = i; j >= 1; j--)
        {
            /* code */cout<<j;
        }
        cout<<endl;
    }
    return 0;
}