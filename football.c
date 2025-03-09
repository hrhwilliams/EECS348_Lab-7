#include <stdio.h>

#include "football.h"

int count_combinations(int score) {
    int combos = 0;
    
    //loop through possible touchdowns+2
    for (int td2 = 0; 8*td2 <= score; td2++) {
        //loop through possible touchdowns+1
        for (int td1 = 0; 7*td1 + 8*td2 <= score; td1++) {
            //loop through possible touchdowns
            for (int td = 0; 6*td + 7*td1 + 8*td2 <= score; td++) {
                //loop through possible field goals
                for (int fg = 0; 3*fg + 6*td + 7*td1 + 8*td2 <= score; fg++) {
                    //loop through possible safeties
                    for (int safety = 0; 2*safety + 3*fg + 6*td + 7*td1 + 8*td2 <= score; safety++) {
                        const int total = 2*safety + 3*fg + 6*td + 7*td1 + 8*td2;
                        if (total == score) {
                            combos++;
                        }
                    }
                }
            }
        }
    }

    return combos;
}

void print_combinations(int points) {
    printf("a lot\n");
}