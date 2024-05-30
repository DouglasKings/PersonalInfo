#include <stdio.h>
#include <string.h>

int main(){

    char Name[1000], fieldOfInterest[10000];
    double rollNumber = 0.0;

    printf("Enter your name: ");
    //scanf("%999s", &Name);
    fgets(Name, sizeof(Name), stdin); //Reads name with spaces
    Name[strcspn(Name, "\n")] = '\0'; //Remove the newline character added by fgets
    printf("Enter your roll number: ");
    scanf("%lf", &rollNumber);
    printf("Enter your fields of interest: ");
    fgets(fieldOfInterest, sizeof(fieldOfInterest), stdin);
    fieldOfInterest[strcspn(fieldOfInterest, "\n")] = '\0';
    
    /*printf("Enter your fields of interest: ");
    fgets(fieldOfInterest, sizeof(fieldOfInterest), stdin);
    // Check if the last character is a newline and replace it with a null terminator
    //size_t len = strlen(fieldOfInterest);: This line calculates the length of the string stored in fieldOfInterest
    //The strlen function returns the number of characters in the string up to but not including the null terminator
    size_t len = strlen(fieldOfInterest);
    if (len > 0 && fieldOfInterest[len - 1] == '\n') {
    fieldOfInterest[len - 1] = '\0';
    } */  

    printf("My name is %s \n", Name);
    printf("My roll number is %.2lf \n", rollNumber);
    printf("my fields of interest are %s \n", fieldOfInterest);

    return 0;
}