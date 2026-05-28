#include<iostream>
using namespace std;
int main(){
    int N;
    cout << "enter number whose table has to be given"<< endl;
    cin>> N;
    cout<<"the table of "<< N << " is :"<<endl;
    for(int i=1;i<=10;i++)
    {
        cout<< N <<" x "<< i << "= " << N*i << "\n";
    }

}