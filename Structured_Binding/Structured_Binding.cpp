#include<iostream>
#include<string>
#include<vector>
#include<map>

struct employee {
    unsigned id;
    int roll;
    std::string name;
    std::string role;
    int salary=1000;
};
int main()
{
    
    std::vector<employee> employees(4);
    employees[0].id = 1;
    employees[0].name = "hari";
    employees[1].id = 2;
    employees[1].name = "om";
    
    
    for (auto &[id,roll,name,role,salary] : employees) {
        std::cout<<employees.size();
        std::cout << "Name: " << name<<'\n'
        << "Role: " << role<<'\n'
        << "Salary: " << salary << '\n';
    }
    
}

