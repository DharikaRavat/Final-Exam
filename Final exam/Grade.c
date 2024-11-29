#include <stdio.h>

int main() {
    float Percentage;  

    printf("Enter student's Percentage: ");
    scanf("%f", &Percentage);
    
    if (Percentage < 0 || Percentage > 100) {
        printf("Invalid marks! Please enter marks between 0 and 100.\n");
    } 
	
	else {
        if (Percentage >= 90) {
            printf("Result: Grade A..\n");
        } 
		
		else if (Percentage >= 80) {
            printf("Result: Grade B..\n");
        } 
		
		else if (Percentage >= 70) {
            printf("Result: Grade C..\n");
        } 
		
		else if (Percentage >= 60) {
            printf("Result: Grade D..\n");
        }
        
		else if (Percentage >= 40) {
            printf("Result: Grade E..\n");
        }
        
        else if (Percentage < 40) {
            printf("Result: Grade Failed.\n");
        }
		
		else if (Percentage== 0) {
            printf("Absent.......\n");
        }
        
		 else {
            printf("Result: Grade F (Fail)......\n");
        }
    }

    return 0;
}
