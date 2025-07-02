// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
   int num;
   cout << "Enter the number : "<<endl;
   cin >> num;
   
   if(num % 2 == 0){
       num = num - 1;
   }
   cout <<"output : ";
   for(int i = 0 ; i < num ; i++){
       cout << 2*i + 1 << " ";
       if(i < num -1) 
       cout <<", ";
   }
   
}
