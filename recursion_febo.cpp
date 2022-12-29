#include<iostream>
using namespace std;

int Febonacci(int a){
    int y;
    if(a <=1){
        if (a == 1)
            return 1;
        else
            return 0;
    }
    else{
        y = Febonacci(a-1)+Febonacci(a-2);
    }
    // cout<<y<<endl;
    return y;
}

int main(){
    int x, ans;

    cout << "Enter Number : "<< endl;
    cin >> x;

    ans = Febonacci(x);

    cout << ans;

}