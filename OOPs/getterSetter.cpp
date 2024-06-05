#include<iostream>
using namespace std;

class Player{
    private:
    int score; // Data Member
    int health;
    public:
        //Setter
    void setScore(int s){
        score = s;
    }    
    void setHealth(int h){
        health = h;
    }
        // Getter
    int getScore(){
        return score;
    }    
    int getHealth(){
        return health;
    }
};

int main(){
    Player Sarthak;
    Sarthak.setScore(10);
    Sarthak.setHealth(100);
    cout<<Sarthak.getScore()<<endl<<Sarthak.getHealth()<<endl;
    return 0;
}