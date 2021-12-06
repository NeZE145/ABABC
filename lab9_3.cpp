#include<iostream>

using namespace std;

int main(){
    int A,B,C;
    cout << "Enter your age: ";
    cin >> A;
    if(A<=20){
        cout << "Enter your height: ";
        cin >> B;
        if(B<160)
            cout << "Your status = UNFRIEND";
        if(B>=160&&B<175)
            cout << "Your status = FRIEND";
        if(B>=175){
            cout << "Enter your property: ";
            cin >> C;
            if(C>69000000){
                cout << "Your status = MARRIED";
            }else{
                cout << "Your status = ONE-NIGHT-STAND";
            }
        }
    }
    if(A>20&&A<30){
        cout << "Enter your property: ";
        cin >> C;
        if(C>10000000){
            cout << "Your status = BEST FRIEND";
        }else{
            cout << "Your status = UNFRIEND";
        }
    }
    if(A>=30)
        cout << "Your status = UNFRIEND";
    
    return 0;
}
