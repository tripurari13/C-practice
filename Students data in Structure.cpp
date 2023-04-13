#include <stdio.h>

struct student {
    char name[50];
    int id;
    int reg_no;
    int age;
    float marks;
};

int main() {
    
    struct student s;

    printf("Enter name: ");
    scanf("%c", &s.name);

    printf("Enter ID:  ");
    scanf("%d", &s.id);

    printf("Enter Reg. No:  ");
    scanf("%d", &s.reg_no);
    
    printf("Enter Age: ");
    scanf("%d", &s.age);
    
    printf("Enter marks: ");
    scanf("%f", &s.marks);

    printf("\nStudent Details:\n");
    printf("Name: %c\n", s.name);
    printf("ID: %d\n", s.id);
    printf("Reg. No : %d\n", s.reg_no);
    printf("Age: %d\n", s.age);
    printf("Marks: %.2f\n", s.marks);


}
