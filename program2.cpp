// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int num, cnt = 0;
  
    cout << "Enter the number :" <<endl;
    cin >> num;
    int i = 1;
    cout << "output : ";
    while(cnt < num){
        if(i%2 != 0){
            cout<<i<< " ";
            cnt++;
            if(cnt < num){
                cout << ", ";
            }
        }
        i++;
    }    
   
}
