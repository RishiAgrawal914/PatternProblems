#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    char ch = 'A';
    for (int i = 1; i <= n; i++)
    {
        /* code */for (int j = 0; j <= i; j++)
        {
            /* code */cout<<ch;

        }
        ch++;
        cout<<endl;
        
    }
    return 0;
}