/*Question 9: A meteorological department wants to record temperature data for multiple cities, over
several days, and at different times of the day (morning, afternoon, night).
Your task is to Store the temperature readings for each city across all days and times. Then, print the
highest temperature recorded for each city (considering all days and times).*/
#include <stdio.h>

int main() {
    int city, days, times ,i, j, k;
    printf("Enter number of cities: ");
    scanf("%d", &city);
    printf("Enter number of days to record: ");
    scanf("%d", &days);
    printf("Enter number of times per day (e.g., 3 for morning, afternoon, night): ");
    scanf("%d", &times);
float temp[city][days][times], maxTemp[city];
    printf("\nEnter temperature readings (in °C):\n");
    for (i = 0; i < city; i++) {
        printf("\n--- City %d ---\n", i + 1);
        for (j = 0; j < days; j++) {
            printf("Day %d:\n", j + 1);
            for (k = 0; k < times; k++) {
                printf("  Time %d: ", k + 1);
                scanf("%f", &temp[i][j][k]);
            }
        }
    }
    for (i = 0; i < city; i++) {
        float max = temp[i][0][0]; // assume first reading is max
        for (j = 0; j < days; j++) {
            for (k = 0; k < times; k++) {
                if (temp[i][j][k] > max) {
                    max = temp[i][j][k];
                }
            }
        }
        maxTemp[i] = max;
    }
    printf("\n=== Highest Temperature for Each City ===\n");
    for (i = 0; i < city; i++) {
        printf("City %d: %.2f °C\n", i + 1, maxTemp[i]);
    }

    return 0;
}

