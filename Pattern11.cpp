// Floyd's Triangle
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int num = 1;

   
    for (int i = 1; i <= n; i++)
    {
        /* code */for (int j = 1; j <= i; j++)
        {
            /* code */cout<<num<<" ";
             num++;
        }
       
        cout<<endl;
    }
    return 0;
}