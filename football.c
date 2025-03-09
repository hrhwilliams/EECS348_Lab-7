#include "football.h"

int count_combinations(int points) {
    int combos = 0;
    //loop through possible touchdowns+2
    for (int td2 = 0; td2 * 8 <= points; td2++) {
        //loop through possible touchdowns+1
        for (int td1 = 0; td1 * 7 + td2 * 8 <= points; td1++) {
            //loop through possible touchdowns
            for (int td = 0; td * 6 + td1 * 7 + td2 * 8 <= points; td++) {
                //loop through possible field goals
                for (int fg = 0; fg * 3 + td * 6 + td1 * 7 + td2 * 8 <= points; fg++) {
                    //loop through possible safeties
                    for (int safety = 0; safety * 2 + fg * 3 + td * 6 + td1 * 7 + td2 * 8 <= score; safety++) {
                        int total = td2 * 8 + td1 * 7 + td * 6 + fg * 3 + safety * 2;
                        if (total == points) {
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