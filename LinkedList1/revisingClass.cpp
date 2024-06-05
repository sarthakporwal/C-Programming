#include<iostream>
using namespace std;
class Student{
public:
    string name;
    int rno;
    float marks;
    Student(string name, int rno, float marks){
        this->name = name;
        this->rno = rno;
        this->marks = marks;
    }
};
void change(Student* s){
    s->name = "Vaibhav";
}
int main(){
    Student* s = new Student("Sarthak",89,95.6);
    cout<<s->name<<endl;
    change(s);
    cout<<s->name<<endl;
    return 0;
}