/*
NAME:JEZRYL LUMBASI
REG NO:CT101/G/26464/25
DESCRIPTION:UNIVERISTY STUDENT NAME REGISTRATION NUMBER AND TOTAL MARKS
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>  // for strcspn

// Step i: Define a structure to hold the student information
struct Student {
    char name[50];
    char regNo[20];
    float totalMarks;
};

int main() {
    FILE *file;
    struct Student s;

    // Step ii: Open the binary file for reading
    file = fopen("results.dat", "rb");
    if (file == NULL) {
        printf("Error: Could not open results.dat\n");
        return 1;
    }

    printf("=== Student Examination Results ===\n\n");

    int recordsFound = 0;

    // Step iii: Read and display all records
    while (fread(&s, sizeof(struct Student), 1, file) == 1) {
        // Trim newline characters from strings (if any)
        s.name[strcspn(s.name, "\n")] = '\0';  // Remove newline from name
        s.regNo[strcspn(s.regNo, "\n")] = '\0'; // Remove newline from regNo

        printf("Name: %s\n", s.name);
        printf("Registration No: %s\n", s.regNo);
        printf("Total Marks: %.2f\n\n", s.totalMarks);

        recordsFound++;
    }

    if (recordsFound == 0) {
        printf("No records found in the file.\n");
    }

    fclose(file);
    printf("End of results.\n");

    return 0;
}
