#include <stdio.h>

int main() {
    int quarters, machine1, machine2, machine3, total, i;
    quarters = 0;
    while (1 > quarters || quarters > 1000) {
        printf("Enter total number of quarters: ");
        scanf("%d", &quarters);
        if (1 > quarters || quarters > 1000) {
            printf("invalid number\n");
        }
    }

    printf("Enter # of times slot machine 1 has been played since last payment: ");
    scanf("%d", &machine1);

    printf("Enter # of times slot machine 2 has been played since last payment: ");
    scanf("%d", &machine2);

    printf("Enter # of times slot machine 3 has been played since last payment: ");
    scanf("%d", &machine3);

    for (i = 1; i < quarters; i++) {
        int currMachine = i % 3;
        switch (currMachine) {
            case 1:
                machine1 += 1;
                if (machine1 == 35) {
                    quarters += 30;
                    machine1 = 0;
                }
                break;
            case 2:
                machine2 += 1;
                if (machine2 == 100) {
                    quarters += 60;
                    machine2 = 0;
                }
                break;
            case 0:
                machine3 += 1;
                if (machine3 == 10) {
                    quarters += 9;
                    machine3 = 0;
                }
                break;
            default:
                continue;
        }
    }

    printf("The user can play %d times before they run out of quarters.\n", i);

}
