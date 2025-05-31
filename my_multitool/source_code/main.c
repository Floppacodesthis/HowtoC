#include <stdio.h>
#include <string.h>
#include "utils.h"
#include <stdlib.h>

int main() {
    int choice = 0;
    int choice_wifi = 0;
    int choice_power = 0;
    char network_name[128];

    while (1) {
        menu();

        printf("\nYour choice (1-5): ");
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Please enter a number between 1 and 5.\n");
            while(getchar() != '\n'); // clear input buffer
            continue;
        }
        getchar(); // clear leftover newline

        switch (choice) {
            case 1:
                while (1) {
                    menu_wifi();
                    printf("\nYour choice (1-4, 4 to go back): ");
                    if (scanf("%d", &choice_wifi) != 1) {
                        printf("Invalid input. Enter 1-4.\n");
                        while(getchar() != '\n');
                        continue;
                    }
                    getchar();

                    if (choice_wifi == 4) break; // exit wifi menu

                    switch (choice_wifi) {
                        case 1:
                            show_networks();
                            break;
                        case 2:
                            show_networks();
                            printf("\nEnter wifi network name: ");
                            fgets(network_name, sizeof(network_name), stdin);
                            network_name[strcspn(network_name, "\n")] = 0; // strip newline
                            if (strlen(network_name) == 0) {
                                printf("Network name can't be empty.\n");
                            } else {
                                get_password(network_name);
                            }
                            break;
                        case 3:
                            networks_help();
                            break;
                        default:
                            printf("Invalid choice! Pick 1, 2, 3 or 4 to go back.\n");
                    }
                    printf("\nPress Enter to continue...");
                    getchar();
                }
                break;

            case 2:
                while (1) {
                    menu_power();
                    printf("\nYour choice (1-6, 6 to go back): ");
                    if (scanf("%d", &choice_power) != 1) {
                        printf("Invalid input. Enter 1-6.\n");
                        while(getchar() != '\n');
                        continue;
                    }
                    getchar();

                    if (choice_power == 6) break; // exit power menu

                    switch (choice_power) {
                        case 1:
                            shutdown();
                            break;
                        case 2:
                            restart();
                            break;
                        case 3:
                            logout();
                            break;
                        case 4:
                            hibernate();
                            break;
                        case 5:
                            help();
                            break;
                        default:
                            printf("Invalid choice! Pick 1-6.\n");
                    }
                    printf("\nPress Enter to continue...");
                    getchar();
                }
                break;

            case 3:
                menu_tasks();
                printf("\nPress Enter to continue...");
                getchar();
                break;

            case 4:
                menu_cmd();
                printf("\nPress Enter to continue...");
                getchar();
                break;

            case 5:
                system("color f");
                printf("\nExiting... Goodbye!\n");
                return 0;

            default:
                printf("Oops! Please pick a number between 1 and 5.\n");
                printf("\nPress Enter to try again...");
                getchar();
        }
    }

    return 0;
}


// #include <stdio.h>
// #include <string.h>
// #include "utils.h"
// #include <stdlib.h>

// int main() {
//     int choice = 0;
//     int choice_wifi = 0;
//     int choice_power = 0;
//     char network_name[128];

//     while (1) {
//         menu();
//         scanf("%d", &choice);
//         getchar(); // clear newline left by scanf

//         switch (choice) {
//             case 1:
//                 menu_wifi();
//                 printf("\nChoose operation(by number): ");
//                 scanf("%d", &choice_wifi);
//                 getchar();
//                 switch (choice_wifi) {
//                     case 1:
//                         show_networks();
//                         break;
//                     case 2:
//                         show_networks();
//                         printf("\nEnter wifi name: ");
//                         fgets(network_name, sizeof(network_name), stdin);
//                         network_name[strcspn(network_name, "\n")] = 0; // strip newline
//                         get_password(network_name);
//                         break;
//                     case 3:
//                         networks_help();
//                         break;
//                     case 4:
//                         return 0;
//                     default:
//                         printf("No such choice. Choose 1 or 2 depending on operation.");
//                 }
//                 break;
//             case 2:
//                 menu_power();
//                 scanf("%d", &choice_power);
//                 getchar();
//                 switch (choice_power) {
//                     case 1:
//                         shutdown();
//                         break;
//                     case 2:
//                         restart();
//                         break;
//                     case 3:
//                         logout();
//                         break;
//                     case 4:
//                         hibernate();
//                         break;
//                     case 5:
//                         help();
//                         break;
//                     case 6:
//                         return 0;
//                     default:
//                         printf("No such choice. Choose 1-5 depending on operation.");
//                 }
//                 break;
//             case 3:
//                 menu_tasks();
//                 break;
//             case 4:
//                 menu_cmd();
//                 break;
//             case 5:
//                 system("color f");
//                 return 0;
//                 break;
//             default:
//                 printf("Error. Choose 1-5 to pick operation.");
//         }

//         printf("\nPress Enter to continue...");
//         getchar();
//     }

//     return 0;
// }
