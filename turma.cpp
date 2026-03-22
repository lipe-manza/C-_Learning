#include <iostream>
#define MAX 100

class Student
{
private:
    std::string nome;
    int idade;
    float nota;

    public: Student(std :: string name , int age , float grade){
        this->nome = name;
        this->idade = age;
        this->nota = grade;
    }

public:
    std::string getName(){
        return nome;
    };
    int getAge(){
        return idade;
    };
    float getGrade(){
        return nota;
    };
};

class Turma
{

private:
    Student turma [MAX];
    int nota_total;
    int numero_alunos;

public:
    
}