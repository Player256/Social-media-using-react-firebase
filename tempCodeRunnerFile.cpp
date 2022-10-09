#include <iostream>
using namespace std;
#define e 2.71 
#include <cmath>
int main(){
    cout << "e^x"<<endl ;
    double integrate ;
    int n;
    cout<<"How many parts to divide :";
    cin >> n;
    for (int i = -2; i <= 2 ; i+=n){
        integrate += pow(e,i) * i;
    }
    cout<<"Value is : "<<integrate<<endl ;
    cout << "sinx" <<endl ;
    double integrate2;
     cout<<"How many parts to divide :";
    cin >> n;
    for (int i = -2; i <= 2 ; i+=n){
        double x = (i * 3.14) / 180 ; 
        integrate2 +=  cos(x) * i;
    }
    cout << "Value is :"<<integrate2<<endl ;
}