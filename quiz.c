#include <stdio.h>

int main(){
    char grade;
    int marks;

    // Taking input for marks from the user
    printf("Enter your marks: ");
    scanf("%d", &marks);

    // Determining the grade based on marks
    if(marks <= 100 && marks >= 90){
        grade = 'A';
    } 
    else if(marks < 90 && marks >= 80){
        grade = 'B';
    } 
    else if(marks < 80 && marks >= 70){
        grade = 'C';
    }
    else if(marks < 70 && marks >= 60){
        grade = 'D';
    }
    else if(marks < 60 && marks >= 50){
        grade = 'E';
    }
    else{
        grade = 'F';
    }

    // Displaying the grade
    printf("Your grade is: %c\n", grade);

    return 0;
}
