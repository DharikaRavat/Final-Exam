#include <stdio.h>

int main() {
    int marks;  

    printf("Enter student's marks : ");
    scanf("%d", &marks);
    
    if (marks < 0 || marks > 100) {
        printf("Invalid marks! Please enter marks between 0 and 100.\n");
    } 
	
	else {
        if (marks >= 90) {
            printf("Result: Grade A..\n");
        } 
		
		else if (marks >= 80) {
            printf("Result: Grade B..\n");
        } 
		
		else if (marks >= 70) {
            printf("Result: Grade C..\n");
        } 
		
		else if (marks >= 50) {
            printf("Result: Grade D..\n");
        }
        
		else if (marks >= 33) {
            printf("Result: Grade E..\n");
        }
		
		else if (marks == 0) {
            printf("Absent.......\n");
        }
        
		 else {
            printf("Result: Grade F (Fail)......\n");
        }
    }

    return 0;
}
