#include<iostream>
using namespace std;

int main(){
    int num, sum=0  , n, ams;
    cout << "Enter Number : ";
    cin >> num;
    n = num;
    while(n > 0){
        n = n % 10;
    
        ams = ams + (n*n);

        n = n /10;

    }
    cout << n;
    if(num == ams){
        cout << "Given no is amstrong ";
    }
    else{
        cout << "\nNo";

    }
}
