#include<iostream>
using namespace std;

class calculator{
    private :
        double a , b;
        string op;
        
    public:
    calculator(double a , double b , string op){
        this->a = a;
        this->b = b;
        this->op = op;
    }

    void calculation(){
        if(op == "addition"){
            cout << "Your Output : " << a + b;
            return;
        }
        else if(op == "subtraction"){
            cout << "Your Output : " << (a - b);
            return;
        }
         else if(op == "multiplication"){
            cout << "Your Output : " << (a * b);
            return;
        }
        else{
            if(op == "division" && b != 0){
                cout << "Your Output : " << (a / b);
            }
            else{
                cout << "value of second operand cannot be 0";
            }
        }
    }


};

int main(){
   double a , b ;
    string op;
    
    cout << "Enter first operand : " <<endl;
    cin >> a;  
    cout << "Enter second operand : " <<endl;
    cin >> b;
    cout << "Enter the name of operation(addition , subtraction , multiplication , division )" <<endl;
    cin >> op;
    calculator c(a , b, op);

    c.calculation();
}
