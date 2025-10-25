/*Question 3: A robotics engineer stores the movement readings (like position or force values) of a robotic
arm in a 3D array,where:? The first dimension = different robot joints
? The second dimension = different movements
? The third dimension = x, y, z coordinate readings
Sometimes sensors send negative readings due to direction reversal or magnetic interference.
To normalize the data, the engineer writes a program to convert all negative values to their absolute
values, ensuring the robot’s control system only deals with positive magnitude readings.*/
#include <stdio.h>
#include <stdlib.h>
int main() {
    int jnts, mmnts, crdinate = 3;
    int i, j, k;
    printf("Enter number of robot joints: ");
    scanf("%d", &jnts);
    printf("Enter number of movements per joint: ");
    scanf("%d", &mmnts);
    int values[jnts][mmnts][crdinate];
    printf("\nEnter the readings (x, y, z)*(co-ordinate) for each joint and movement:\n");
    for (i = 0; i < jnts; i++) {
        for (j = 0; j < mmnts; j++) {
            printf("Joint %d, Movement %d:\n", i + 1, j + 1);
            for (k = 0; k < crdinate; k++) {
                scanf("%d", &values[i][j][k]);
                if (values[i][j][k] < 0)
                values[i][j][k] = abs(values[i][j][k]);
            }
        }
    }
    for (i = 0; i < jnts; i++) {
        for (j = 0; j < mmnts; j++) {
            for (k = 0; k < crdinate; k++) {
                if (values[i][j][k] < 0)
                    values[i][j][k] = abs(values[i][j][k]);
            }
        }
    }
    printf("\nNormalized (Absolute) Readings:\n");
    for (i = 0; i < jnts; i++) {
        printf("\nJoint %d:\n", i + 1);
        for (j = 0; j < mmnts; j++) {
            printf("Movement %d: ", j + 1);
            for (k = 0; k < crdinate; k++) {
                printf("%d ", values[i][j][k]);
            }
            printf("\n");
        }
    }

    return 0;
}

