#include<stdio.h>
#include<string.h>
                                // Aman Gupta 
       struct registration 
    {
        char name[100];
        char dob[15];
        char address[100];
        char pincode[7];
        char addhar[15];
        char mobile[12];
        char age[4];
    };
int main()
{
    int age;
    struct registration r;
printf("---------------------------------------------------\n");
    printf("\tEnter the Information of Vaccinator\n");
printf("---------------------------------------------------\n");
    printf("Enter Name: ");
    gets(r.name);
    printf("Enter Date of Birth: ");
    gets(r.dob);
    printf("Enter Address: ");
    gets(r.address);
    printf("Enter Pincode: ");
    gets(r.pincode);
    printf("Enter Addhar No. ");
    gets(r.addhar);
    printf("Mobile No. ");
    gets(r.mobile);
    printf("Enter Age: ");
    scanf("%d",&age);
printf("---------------------------------------------------\n");
        printf("\tCovid-19 Vaccine Registration\n");
printf("---------------------------------------------------\n");
                    printf("\tDisplay Information\n");
printf("---------------------------------------------------\n");
    printf("Your Name: ");
    puts(r.name);
    printf("Your Date of Birth: ");
    puts(r.dob);
    printf("Yourddress: ");
    puts(r.address);
    printf("Your Pincode: ");
    puts(r.pincode);
    printf("Your Addhar No.: ");
    puts(r.addhar);
    printf("Your Mobile No.: ");
    puts(r.mobile);
    printf("Your Age: %d",age);
    if(age>18)
    printf("\nEligible for vaccinate\n Successful Resgistration !\n Thank You!\nPROGRAMMER:- AMAN GUPTA\n");
    else
    printf("\nNot Eligible for Vaccinate \n Registration Failed!\nOnly18+ citizen\nProgrammer:- Aman Gupta\n");
    printf("---------------------------------------------------\n");
    
    return 0;
}
    