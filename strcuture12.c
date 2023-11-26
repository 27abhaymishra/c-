#include <stdio.h>

struct Driver
{
    char Name[34];
    char dlno[43];
    char route[50];
    int kms;
};

int main()
{
    struct Driver d1, d2, d3;
    //1st driver //
    printf(" Enters the details of drivers  \n ");
    printf("Enter the name of first driver \n ");
    scanf("%s", &d1.Name);
    
    printf("Enter the dlno of first driver \n ");
    scanf("%s", &d1.dlno);
    printf("Enter the route of first driver \n ");
    scanf("%s",&d1.route);
    printf("Enter the kms of first driver \n");
    scanf("%d",&d1.kms);
    
    //2nd drivwer//
    printf(" Enters the details of drivers  \n ");
    printf("Enter the name of second  driver \n ");
    scanf("%s", &d2.Name);
    
    printf("Enter the dlno of second  driver \n ");
    scanf("%s", &d2.dlno);
    printf("Enter the route of  second driver \n ");
    scanf("%s",&d2.route);
    printf("Enter the kms of second driver \n");
    scanf("%d",&d2.kms);

    //3rd driver //
    printf(" Enters the details of drivers  \n ");
    printf("Enter the name of third  driver \n ");
    scanf("%s", &d3.Name);
    
    printf("Enter the dlno of third  driver \n ");
    scanf("%s", &d3.dlno);
    printf("Enter the route of third  driver \n ");
    scanf("%s",&d3.route);
    printf("Enter the kms of third  driver \n");
    scanf("%d",&d3.kms);

    printf("**************Printing the information of these drivers************ \n");
    printf("For First driver name is \n %s \n ", d1.Name);
    printf("For First driver dlno is \n %s \n ", d1.dlno);
    printf("For First driver route is \n %s \n  ",d1.route);

    printf("For Second driver name is \n %s \n ", d2.Name);
    printf("For Second driver dlno is \n %s \n ", d2.dlno);
    printf("For Second driver route is \n %s \n  ",d2.route);

    printf("For Third  driver name is \n %s \n ", d3.Name);
    printf("For Third  driver dlno is \n %s \n ", d3.dlno);
    printf("For Third  driver route is \n %s \n  ",d3.route);
}