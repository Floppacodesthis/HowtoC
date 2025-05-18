#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

// Function declarations
void writeFile(char name[], char content[]);
void readFile(char name[]);

int main() {
    int choice = 0;
    char name[100];
    char content[1024];

    printf("*** FILE CONTROL CENTRE ***\n");

    while (1) {
        printf("\n1. Write to file\n");
        printf("2. Read file\n");
        printf("3. Exit\n");
        printf("Enter your choice (1 - 3): ");
        scanf("%d", &choice);
        getchar(); // consume leftover newline

        switch (choice) {
            case 1:
                printf("Enter the name of your file (e.g. file.txt): ");
                scanf("%s", name);
                getchar(); // consume leftover newline
                printf("Enter content to write: ");
                fgets(content, sizeof(content), stdin);
                writeFile(name, content);
                break;

            case 2:
                printf("Enter the name of the file to read: ");
                scanf("%s", name);
                readFile(name);
                break;

            case 3:
                printf("Exiting...\n");
                system("pause");
                return 0;

            default:
                printf("Invalid choice. Try again.\n");
        }
    }
    return 0;
}

// Function to write content to file
void writeFile(char name[], char content[]) {
    char file_name[256];
    sprintf(file_name, "C:\\Users\\Samgi\\Desktop\\Learning_c\\txtfiles\\%s", name);

    FILE *pFile = fopen(file_name, "w");
    if (pFile == NULL) {
        printf("Error opening file for writing.\n");
        return;
    }

    fprintf(pFile, "%s", content);
    printf("File written successfully.\n");

    fclose(pFile);
}

// Function to read content from file
void readFile(char name[]) {
    char file_name[256];
    char buffer[1024];

    sprintf(file_name, "C:\\Users\\Samgi\\Desktop\\Learning_c\\txtfiles\\%s", name);
    FILE *pFile = fopen(file_name, "r");

    if (pFile == NULL) {
        printf("Could not open file for reading.\n");
        return;
    }

    printf("\n--- File Content ---\n");
    while (fgets(buffer, sizeof(buffer), pFile) != NULL) {
        printf("%s", buffer);
    }
    printf("\n--- End of File ---\n");

    fclose(pFile);
}
