
#include<stdio.h>


int main(){

    double Total_Bonus = 0;
    int Total_Employees_checked = 0;


    for(int Total_Employees_checked =1; Total_Employees_checked < 4; Total_Employees_checked++){

        double Basic_Salary;
        char Grade;
        double Bonus = 0;


        printf("Enter Basic Salary of Employee %d: ", Total_Employees_checked );
        scanf("%lf", &Basic_Salary);
        printf("Enter Grade of Employee %d: ", Total_Employees_checked);
        scanf(" %c", &Grade);


        if(Grade == 'A') {
            Bonus = Basic_Salary;
        }
        else if (Grade == 'B') {
            Bonus = 0.7 * Basic_Salary;
        }
        else if (Grade == 'C') {
            Bonus = 0.4 * Basic_Salary;
        }
        Total_Bonus += Bonus;

    }

    printf("Total bonus amount to be distributed bY the organization is  %.3lf\n",Total_Bonus);

    return 0;
}
