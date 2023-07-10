// 1. Create a structure Employee containing name as string, telephone as string and salary as integer.
// Input records of 10 employees. Display the name, telephone and salary of the employee with highest
// salary, lowest salary. Also display the average salary of all 5 employees.
#include<stdio.h>
#define NUMBER_OF_EMPLOYEE 10
struct Employee{
  char name[30],telephone[10];
  int salary;
};
int main(){
  struct Employee emp[NUMBER_OF_EMPLOYEE];
  for(int i=0;i<NUMBER_OF_EMPLOYEE;i++){
    printf("Enter the full name,telephone number and salary of the Employee %d.\n",i+1);
    scanf(" %[^\n]%*c%[^\n]%*c%d",emp[i].name,emp[i].telephone,&emp[i].salary);
  }   
  int highestSalary=emp[0].salary,lowestSalary=emp[0].salary,total=0;
  for (int i=0;i<NUMBER_OF_EMPLOYEE;i++){
    printf("\nDetails of employee %d\n",i+1);
    printf("NAME: %s\n",emp[i].name);
    printf("Telephone: %s\n",emp[i].telephone);
    printf("Salary: %d\n",emp[i].salary);
    if(highestSalary<emp[i].salary){
      highestSalary=emp[i].salary;
    }
    if(lowestSalary>emp[i].salary){
      lowestSalary=emp[i].salary;
    }
    total+=emp[i].salary;
  }

  printf("\nEmployee with highest salary:\n");
  for(int i = 0; i < NUMBER_OF_EMPLOYEE; i++) {
    if(emp[i].salary == highestSalary) {
      printf("Name: %s\n", emp[i].name);
      printf("Telephone: %s\n", emp[i].telephone);
      printf("Salary: %d\n", emp[i].salary);
      break;
      }
  }
  printf("\nEmployee with lowest salary:\n");
  for(int i = 0; i < NUMBER_OF_EMPLOYEE; i++) {
    if(emp[i].salary == lowestSalary) {
      printf("Name: %s\n", emp[i].name);
      printf("Telephone: %s\n", emp[i].telephone);
      printf("Salary: %d\n", emp[i].salary);
      break;
      }
  }
  printf("\n\naverage salary= %d\n",(float)total/NUMBER_OF_EMPLOYEE);
}

