#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

int main(void) {
    srand(time(NULL)); /* Seed the random number generator with the current time */
    
    int i;
    char password[PASSWORD_LENGTH + 1]; /* Allocate space for the password string */

    for (i = 0; i < PASSWORD_LENGTH; i++) {
        int rand_num = rand() % 62; /* Generate a random number between 0 and 61 */
        if (rand_num < 26) { /* If rand_num is between 0 and 25, add a random lowercase letter */
            password[i] = 'a' + rand_num;
        } else if (rand_num < 52) { /* If rand_num is between 26 and 51, add a random uppercase letter */
            password[i] = 'A' + rand_num - 26;
        } else { /* If rand_num is between 52 and 61, add a random digit */
            password[i] = '0' + rand_num - 52;
        }
    }
    password[PASSWORD_LENGTH] = '\0'; /* Add a null terminator to the end of the password string */
    
    printf("%s\n", password); /* Print the generated password */
    
    return 0;
}

