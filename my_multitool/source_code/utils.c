#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>

void menu() {
    system("title MULTI TOOL");
    system("cls");
    system("color a");
    system("chcp 65001 >nul");

    printf("\n                 ╔═[ MULTI-TOOL ]═╗\n");
    printf("  ╭───────────────────────────────────────────────────╮\n");
    printf("  │ [1] Wifi Operations                               │\n");
    printf("  │   ├─ Show saved networks                          │\n");
    printf("  │   └─ Get wifi password of a saved network         │\n");
    printf("  │                                                   │\n");
    printf("  │ [2] Power Options                                 │\n");
    printf("  │   ├─ Shutdown                                     │\n");
    printf("  │   ├─ Restart                                      │\n");
    printf("  │   ├─ Hibernate                                    │\n");
    printf("  │   └─ Log out                                      │\n");
    printf("  │                                                   │\n");
    printf("  │ [3] Task Viewer                                   │\n");
    printf("  │   └─ Print all running tasks                      │\n");
    printf("  │                                                   │\n");
    printf("  │ [4] Coding Starter Pack                           │\n");
    printf("  │   └─ Open dev environment tools                   │\n");
    printf("  |                                                   |");
    printf("  | [5] Multitool custom terminal  (WIP)              |");
    printf("  │   └─ Run custom multitool terminal                │\n");
    printf("  |                                                   |");
    printf("  │ [6] Exit                                          │\n");
    printf("  ╰───────────────────────────────────────────────────╯\n");
    printf("\nChoose an operation (by number): ");
}


void menu_wifi() {
    system("color a");
    printf("\n           ╔═[ WIFI OPERATIONS ]═╗            \n");
    printf("  ╭────────────────────────────────────────────╮\n");
    printf("  │ [1] ├─ Show network history                │\n");
    printf("  │ [2] ├─ Get password of saved network       │\n");
    printf("  │ [3] ├─ Help                                │\n");
    printf("  │ [4] └─ Exit                                │\n");
    printf("  ╰────────────────────────────────────────────╯\n");
}


void menu_power() {
    system("color a");
    printf("\n           ╔═[ POWER OPERATIONS ]═╗           \n");
    printf("  ╭────────────────────────────────────────────╮\n");
    printf("  │ [1] ├─ Shutdown                            │\n");
    printf("  │ [2] ├─ Restart                             │\n");
    printf("  │ [3] ├─ Logout                              │\n");
    printf("  │ [4] ├─ Hibernate                           │\n");
    printf("  │ [5] ├─ Help                                │\n");
    printf("  │ [6] └─ Exit                                |\n");
    printf("  ╰────────────────────────────────────────────╯\n");
    printf("\nChoose operation (by number): ");
}


void restart() {
    system("shutdown /r /t 0");
}

void shutdown() {
    system("shutdown /s /t 0");
}

void logout() {
    system("shutdown /l");
}

void help() {
    system("shutdown");
}

void hibernate() {
    system("shutdown /h");
}

void open_cmd() {
    system("start firefox");
    system("start https://chatgpt.com");
    system("start https://youtube.com");
    system("start https://github.com");
    system("code");
    system("start C:\\Users\\Samgi\\Desktop\\cmd.lnk");
    Sleep(500);
    system("explorer");
}

void show_networks() {
    printf("\n");
    system("netsh wlan show profiles");
}

void get_password(const char *profile) {
    char command[256];
    snprintf(command, sizeof(command), "netsh wlan show profile \"%s\" key=clear", profile);
    system(command);
}
void networks_help(){
    system("netsh wlan");
}

void menu_tasks() {
    system("color a");
    printf("\n                         ╔═[ TASK LIST ]═╗\n");
    printf("  ╭──────────────────────────────────────────────────────────────────────────────╮\n");
    Sleep(1000);
    system("tasklist");
    printf("  ╰──────────────────────────────────────────────────────────────────────────────╯\n");
    Sleep(3000);
}


void menu_cmd() {
    printf("\nLoading...\n");
    Sleep(2000);
    open_cmd();
    Sleep(3000);
}


