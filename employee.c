#include <stdio.h>
#include <stdlib.h>

#define MAX_EMPLOYEES 100

typedef struct {
    int id;
    int rollNo;
    char name[50];
    float salary;
} Employee;

int count = 0;
Employee employees[MAX_EMPLOYEES];

void createEmployee() {
    if (count >= MAX_EMPLOYEES) {
        printf("Maximum number of employees reached.\n");
        return;
    }

    Employee newEmployee;

    printf("Enter employee ID: ");
    scanf("%d", &newEmployee.id);

    printf("Enter employee roll number: ");
    scanf("%d", &newEmployee.rollNo);

    printf("Enter employee name: ");
    scanf("%s", newEmployee.name);

    printf("Enter employee salary: ");
    scanf("%f", &newEmployee.salary);

    employees[count++] = newEmployee;

    printf("Employee created successfully.\n");
}

void deleteEmployee() {
    if (count == 0) {
        printf("No employees to delete.\n");
        return;
    }

    int employeeId;
    printf("Enter the ID of the employee to delete: ");
    scanf("%d", &employeeId);

    int i, found = 0;
    for (i = 0; i < count; i++) {
        if (employees[i].id == employeeId) {
            found = 1;
            break;
        }
    }

    if (found) {
        for (; i < count - 1; i++) {
            employees[i] = employees[i + 1];
        }
        count--;

        printf("Employee deleted successfully.\n");
    } else {
        printf("Employee not found.\n");
    }
}

void displayEmployees() {
    if (count == 0) {
        printf("No employees to display.\n");
        return;
    }

    printf("Employee List:\n");
    printf("ID\tRoll No\tName\t\tSalary\n");
    printf("-----------------------------------\n");
    int i;
    for (i = 0; i < count; i++) {
        printf("%d\t%d\t%s\t%.2f\n", employees[i].id, employees[i].rollNo, employees[i].name, employees[i].salary);
    }
}

void searchEmployee() {
    if (count == 0) {
        printf("No employees to search.\n");
        return;
    }

    int choice;
    printf("Search employee by:\n");
    printf("1. ID\n");
    printf("2. Roll Number\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    int searchId, searchRollNo, i, found = 0;

    switch (choice) {
        case 1:
            printf("Enter the ID to search: ");
            scanf("%d", &searchId);

            for (i = 0; i < count; i++) {
                if (employees[i].id == searchId) {
                    found = 1;
                    break;
                }
            }
            break;
        case 2:
            printf("Enter the Roll Number to search: ");
            scanf("%d", &searchRollNo);

            for (i = 0; i < count; i++) {
                if (employees[i].rollNo == searchRollNo) {
                    found = 1;
                    break;
                }
            }
            break;
        default:
            printf("Invalid choice.\n");
            return;
    }

    if (found) {
        printf("Employee found:\n");
        printf("ID: %d\n", employees[i].id);
        printf("Roll Number: %d\n", employees[i].rollNo);
        printf("Name: %s\n", employees[i].name);
        printf("Salary: %.2f\n", employees[i].salary);
    } else {
        printf("Employee not found.\n");
    }
}

int main() {
    int choice;

    while (1) {
        printf("\nMenu");
        printf("1. Create Employee\n");
        printf("2. Delete Employee\n");
        printf("3. Display Employees\n");
        printf("4. Search Employee\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                createEmployee();
                break;
            case 2:
                deleteEmployee();
                break;
            case 3:
                displayEmployees();
                break;
            case 4:
                searchEmployee();
                break;
            case 5:
                printf("Exiting program.\n");
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
