#include <stdio.h>
struct date_birth
{
    int date,month,year;
};
struct uiet
{
    char name[20];
    char branch[10];
    int roll_no;
    long int mob_no;
    struct date_birth dob;
};
void database(struct uiet stu[],int x)
{
    for (int j = 0; j < x; j++)
    {
        printf("student %d: \n", (j + 1));
        printf("Name = %s\n", stu[j].name);
        printf("Branch = %s\n", stu[j].branch);
        printf("Roll number = %d\n", stu[j].roll_no);
        printf("Mobile number = %ld\n", stu[j].mob_no);
        printf("Date of Birth = %d/%d/%d", stu[j].dob.date, stu[j].dob.month, stu[j].dob.year);
        printf("\n\n");
    }
}
void main()
{
    int n, i, j;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct uiet stu[20];

    for (int j = 0; j < n; j++)
    {
        printf("For Student %d: \n", (j + 1));
        fflush(stdin);
        printf("Enter name : ");
        scanf("%[^\n]", &stu[j].name);
        fflush(stdin);
        printf("Enter branch : ");
        scanf("%[^\n]", &stu[j].branch);
        printf("Enter Roll number : ");
        scanf("%d", &stu[j].roll_no);
        printf("Enter Mobile number : ");
        scanf("%ld", &stu[j].mob_no);
        printf("Enter Date of Birth(DD/MM/YYYY): ");
        scanf("%d%d%d", &stu[j].dob.date, &stu[j].dob.month, &stu[j].dob.year);
        printf("\n");
    }
    printf("The UIET Data for: \n");
    database(stu,n);
}