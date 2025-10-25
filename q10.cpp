/*Question 10: A hospital is using a digital health monitoring system to record patients’ vital readings (like
heart rate, temperature, and blood pressure) for several days.
This data is stored in a 3D array, where:
? The first dimension (layer) represents different hospital wards,
? The second dimension (rows) represents patients in each ward,
? The third dimension (columns) represents different vital signs recorded for each patient.
The hospital wants to calculate:
 The sum of each row  total of all vital readings for each patient,
The sum of each column  total readings of each vital sign across all patients in a ward,
for every ward (layer).*/
#include <stdio.h>

int main() {
    int wards, patients, vsigns;
    int i, j, k;
    printf("How many wards are there in the Hospital: ");
    scanf("%d", &wards);
printf("How many patients are there in each ward: ");
    scanf("%d", &patients);
 printf("Enter number of vital signs recorded for each patient (e.g., 3 for heart rate, temperature, blood pressure):\n ");
    scanf("%d", &vsigns);
    int digital[wards][patients][vsigns];
    printf("\nEnter vital readings for each patient:\n");
    for (i = 0; i < wards; i++) {
        printf("\n--- Ward %d ---\n", i + 1);
        for (j = 0; j < patients; j++) {
            printf("Patient %d:\n", j + 1);
            for (k = 0; k < vsigns; k++) {
                printf("  Vital Sign %d: ", k + 1);
                scanf("%d", &digital[i][j][k]);
            }
        }
    }
    for (i = 0; i < wards; i++) {
        printf("\n=== Ward %d Summary ===\n", i + 1);
        printf("\nTotal Vital Readings per Patient:\n");
        for (j = 0; j < patients; j++) {
            int rowSum = 0;
            for (k = 0; k < vsigns; k++) {
                rowSum += digital[i][j][k];
            }
            printf("Patient %d: %d\n", j + 1, rowSum);
        }
        printf("\nTotal of Each Vital Sign Across All Patients:\n");
        for (k = 0; k < vsigns; k++) {
            int colSum = 0;
            for (j = 0; j < patients; j++) {
                colSum += digital[i][j][k];
            }
            printf("Vital Sign %d: %d\n", k + 1, colSum);
        }
    }
return 0;
}

