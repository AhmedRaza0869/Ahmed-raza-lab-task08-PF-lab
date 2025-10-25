/*Question 6: A school maintains a seating chart matrix of a classroom.In this chart:
 Each row and column represents a student’s assigned seat number.
A 1 means the student is sitting in their correct assigned seat.
A 0 means the seat is either empty or occupied by the wrong student.
The teacher wants to verify whether every student is sitting in their correct seat in other words, whether the seating arrangement matrix forms an identity matrix (1s on the main diagonal
and 0s elsewhere).*/
#include <stdio.h>

int main() {
    int s, i, j;
    int imatrix = 1; 
    printf("Enter the number of students (rows/columns of the seating chart): ");
    scanf("%d", &s);
    int seating[s][s];
    printf("\nEnter the seating chart matrix (only 0s and 1s):\n");
    for (i = 0; i < s; i++) {
        for (j = 0; j < s; j++) {
            scanf("%d", &seating[i][j]);
            if(seating[i][j]!=0 && seating[i][j]!=1)
            {
            	printf("You have enetred number other than 1 and 0!!!\a\a");
            	return 0;
			}
        }
		}
        for(i=0;i<s;i++)
        {
        	for(j=0;j<s;j++)
        	{
        		printf("%d\t",seating[i][j]);
			}
			printf("\n");
		}
    
    for (i = 0; i < s; i++) {
        for (j = 0; j < s; j++) {
            if (i == j && seating[i][j] != 1) {
                imatrix = 0;
                break;
            }
            else if (i != j && seating[i][j] != 0) {
                imatrix = 0;
                break;
            }
        }
        if (!imatrix)
            break;
    }

    if (imatrix){
	
        printf("\nAll students are sitting in their correct seats! (Identity Matrix)\n"); 
		}
    else if(!imatrix){
	
        printf("\nSeating chart does NOT form an identity matrix.\nSome students are in the wrong seats.\n"); }

    return 0;
}

