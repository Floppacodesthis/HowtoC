#include <stdio.h>
#include <string.h>
#include "utils.h"

int main() {
    int choice = 0;
    int choice_wifi = 0;
    int choice_power = 0;
    char network_name[128];

    while (1) {
        menu();
        scanf("%d", &choice);
        getchar(); // clear newline left by scanf

        switch (choice) {
            case 1:
                menu_wifi();
                printf("\nChoose operation(by number): ");
                scanf("%d", &choice_wifi);
                getchar();
                switch (choice_wifi) {
                    case 1:
                        show_networks();
                        break;
                    case 2:
                        show_networks();
                        printf("\nEnter wifi name: ");
                        fgets(network_name, sizeof(network_name), stdin);
                        network_name[strcspn(network_name, "\n")] = 0; // strip newline
                        get_password(network_name);
                        break;
                    default:
                        printf("No such choice. Choose 1 or 2 depending on operation.");
                }
                break;
            case 2:
                menu_power();
                scanf("%d", &choice_power);
                getchar();
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
                    case 6:
                        return 0;
                    default:
                        printf("No such choice. Choose 1-5 depending on operation.");
                }
                break;
            case 3:
                menu_tasks();
                break;
            case 4:
                menu_cmd();
                break;
            case 5:
                return 0;
            default:
                printf("Error. Choose 1-5 to pick operation.");
        }

        printf("\nPress Enter to continue...");
        getchar();
    }

    return 0;
}
