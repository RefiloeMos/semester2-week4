
/*
Name: Refiloe Mosiako
Student ID: 201834606
*/

#include <stdio.h>
#include <string.h>

int main( int argc, char **argv ) {

    // define appropriate data to hold your answer
    char buffer[51] = "";

    // process the command-line data using appropriate string functions  
    if (argc < 2 || argc > 11) {
        strcpy(buffer, "Error: Invalid number of arguments");
    }
    else {
        for (int i = 1; i < argc; i++) {

            if (strlen(argv[i]) < 1 || strlen(argv[i]) > 4) {
                strcpy(buffer, "Error: Invalid argument length");
                break;
            }

            strcat(buffer, argv[i]);

            if (i < argc - 1) {
                strcat(buffer, "-");
            }
        }
    }

    printf("%s\n",buffer); // use only this single print statement in your submitted code

    return 0;
}