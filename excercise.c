#include <stdio.h>
 int main()
 {
  char input;
  float kmstomiles = 0.621371;
  float inchestofoot =0.0833333;
float cmstoinches = 0.393701;
float poundtokgs = 0.453592 ;
float inchestometer = 0.0254;
float first , second ;

while(1){
printf("Enter the value or q to quite \n  1. kms to miles\n  2.inches to foot\n  3.cms to inches\n 4.pounds to kgs\n 5.inches to meter\n");
scanf(" %c",&input);

switch (input)
{
case "q":
printf("Quitting the program...");
goto end;

case '1': 
printf("Enter quantity in terms of first unit \n ");
scanf(" %f ",&first);
second= first* kmstomiles;
printf(" %.2f kms is equal to %.2f miles\n\n\n ",first,second);
    /* code */
    break;

case '2': 
printf("Enter quantity in terms of first unit \n ");
scanf(" %f ",&first);
second= first* inchestofoot;
printf(" %.2f  inches is equal to %.2f  foot \n\n\n ",first,second);
    /* code */
    break;

    case '3': 
printf("Enter quantity in terms of first unit \n ");
scanf(" %f ",&first);
second= first* cmstoinches;
printf(" %.2f cms is equal to %.2f inches  \n\n\n ",first,second);
    /* code */
    break;

    case '4': 
printf("Enter quantity in terms of first unit \n ");
scanf(" %f ",&first);
second= first* poundtokgs;
printf(" %.2f pounds is equal to %.2f kgs \n\n\n ",first,second);
    /* code */
    break;

    case '5': 
printf("Enter quantity in terms of first unit \n ");
scanf(" %f ",&first);
second= first* inchestometer;
printf(" %.2f inches is equal to %.2f meter  \n\n\n ",first,second);
    /* code */
    break;
default:
printf("default now ");
    break;
}

}
end:
    return 0;
 }
 