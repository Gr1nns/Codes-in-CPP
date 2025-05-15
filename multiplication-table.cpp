#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main(){
int i, x = 0, ds;

    cout<<"Tipe a number, to see the multiplication table: ";
    cin>>x;

    for(i=1; i <= 10; i=i+1){
        ds = x * i;
        cout<< x <<" X "<< i << " = "<< ds <<endl;
        }

    return 0;
    }
