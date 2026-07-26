#include <stdio.h>


struct database {
    int id_number;
    int age;
    float salary;
};

struct database register_employee(int id, int age, float salary);

int return_employee_id(int id);

int main (){
    
    struct database employee;

    employee.id_number = 12345;
    employee.age = 30;
    employee.salary = 50000.0;

    struct database *ptr;


    int id, age;
    float salary;

    printf("Enter employee ID: ");
    scanf("%d", &id);

    printf("Enter employee age: ");
    scanf("%d", &age);

    printf("Enter employee salary: ");
    scanf("%f", &salary);

    struct database new_employee = register_employee(id, age, salary);

    ptr = &new_employee;
    
    printf("New employee registered:\n");
    printf("ID: %d\n", new_employee.id_number);
    printf("Age: %d\n", new_employee.age);
    printf("Salary: %.2f\n\n", new_employee.salary);

    printf("Employee ID (via pointer): %d\n", return_employee_id(ptr->id_number));

    getchar();
    return 0;

}


struct database register_employee(int id, int age, float salary) {
    struct database emp;

    emp.id_number = id;
    emp.age = age;
    emp.salary = salary;

    return emp;
}


int return_employee_id(int id) {
    return id;
}