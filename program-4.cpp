// Online C++ compiler to run C++ program online
#include <iostream>
#include<unordered_map>
#include<vector>
using namespace std;

int main() {
    vector<int>v;
    unordered_map<int , int>m;
    int n;
    
    
    cout << "Enter the input size : ";
    cin >> n;
    for(int i = 0 ; i < n ; i++){
       cout << "Enter the "<<i + 1<< "th value : " ;
       int a;
       cin >>a;
       v.push_back(a);
    }
    
    for(int i= 1 ; i <= 9 ; i++){
        m[i] = 0;
    }
    
    for(int j = 1 ; j <= 9 ; j++ ){
        
        for(auto x : v){
            if(x % j == 0){
                m[j]++;
            }
            
        }
    }
    cout << "output : ";
    
    cout << "{";
    for(int k = 1 ; k <= 9 ; k++){
        cout << k << ": "<<m[k];
        if(k < 9){
            cout << ", ";
        }
        
    }
    cout << "}";
    
}

  
      
