#include<iostream>
using namespace std;

class Player{
    public:
    int score; // Data Member
    int health;
    void showHealth(){ // Member Function
        cout<<"Health is: "<<health<<endl;
    }
    void showScore(){
        cout<<"Score is: "<<score<<endl;
    }
};

class Calculator{
    public:
    int a,b;
    void add(){
        cout<<a+b<<endl;
    }
    void subtract(){
        cout<<a-b<<endl;
    }
};

int main(){
    Player amit;
    amit.score = 90;
    amit.health = 100;

    amit.showHealth();
    amit.showScore();

    Calculator calci;
    calci.a = 10;
    calci.b = 7;
    calci.add();
    calci.subtract();
    return 0;
}
    
  