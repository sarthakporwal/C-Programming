#include<iostream>
using namespace std;

class Player{
private:
    int health,age,score;
    bool alive;

public:
    int getHealth(){
        return health;
    }
    int getAge(){
        return age;
    }
    int getScore(){
        return score;
    }
    int isAlive(){
        return alive;
    }

    void setHealth(int health){
        this->health = health;
    }
    void setAge(int age){
        this->age = age;
    }
    void setScore(int score){
        this->score = score;
    }
    void setIsAlive(bool alive){
        this->alive = alive;
    }
};

int addScore(Player a, Player b){
    return a.getScore()+b.getScore();
}

Player getMaxScorePlayer(Player a, Player b){
    if(a.getScore()>b.getScore()) return a;
    else return b;
}

int main(){
    Player Sarthak; // Object creation,statically
    Player Vaibhav;

    Sarthak.setAge(21);
    Sarthak.setScore(100);
    Sarthak.setIsAlive(true);
    Sarthak.setHealth(70);

    Vaibhav.setAge(19);
    Vaibhav.setScore(20);
    Vaibhav.setIsAlive(true);
    Vaibhav.setHealth(100);

    cout<<addScore(Sarthak, Vaibhav)<<endl;
    Player Siddhu = getMaxScorePlayer(Sarthak,Vaibhav);
    cout<<Siddhu.getScore()<<endl;
    cout<<Siddhu.getHealth();
    return 0;
}
