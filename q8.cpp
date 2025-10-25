/*Question 8: Represent a 3D building structure (floors × rooms × beds) and count total empty beds (0 =
empty, 1 = occupied).*/
#include <stdio.h>

int main() {
    int floors, rooms, beds;
    int i, j, k;
    int empty = 0;
    printf("Enter number of floors: ");
    scanf("%d", &floors);
    printf("Enter number of rooms per floor: ");
    scanf("%d", &rooms);
    printf("Enter number of beds per room: ");
    scanf("%d", &beds);
int sruct[floors][rooms][beds];
    printf("\nEnter bed occupancy data (1 = occupied, 0 = empty):\n");
    for (i = 0; i < floors; i++) {
        printf("\n--- Floor %d ---\n", i + 1);
        for (j = 0; j < rooms; j++) {
            printf("Room %d: ", j + 1);
            for (k = 0; k < beds; k++) {
                scanf("%d", &sruct[i][j][k]);
                if (sruct[i][j][k] == 0) {
                    empty++;}
                else if(sruct[i][j][k]!=0 && sruct[i][j][k]!=1)
                {
                	printf("You have entered other numnbers than 1 and  0!!!");
                	return 0;
				}
            }
        }
}
    printf("\nTotal empty beds in the building: %d\n", empty);

    return 0;
}

