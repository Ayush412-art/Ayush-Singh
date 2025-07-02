// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;

int main() {
    int num;
  
    cout << "Enter the number :" <<endl;
    cin >> num;
    vector<int>ans;
    int i = 1;
    while(num){
        if(i%2 != 0){
            ans.push_back(i);
            num--;
        }
        i++;
    }
    cout << "output : ";
    for(auto x : ans){
        cout << x << " ";
    }
  
    
   
}
