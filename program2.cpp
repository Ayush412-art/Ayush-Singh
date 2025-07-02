// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int num;
  
    cout << "Enter the number :" <<endl;
    cin >> num;
    int i = 1;
    cout << "output : ";
    while(num){
        if(i%2 != 0){
            cout<<i;
            if(i < num - 1)
                cout << ", ";
            num--;
        }
        i++;
    }    
   
}
