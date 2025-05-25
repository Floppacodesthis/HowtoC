#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>

void menu() {
    system("title MULTI TOOL");
    system("cls");
    system("color a");
    printf("\n                  |MULTI-TOOL|\n");
    printf("|====================================================|\n");
    printf("[1]  |-Wifi operations                               |\n");
    printf("        |- Show saved networks                       |\n");
    printf("        |-- Get wifi password of a saved network     |\n");
    printf("[2]  |--Shutdown, restart and more                   |\n");
    printf("        |- shutdown                                  |\n");
    printf("        |--- restart                                 |\n");
    printf("        |-----hibernate                              |\n");
    printf("        |-------log-out                              |\n");
    printf("[3]  |----Show tasks                                 |\n");
    printf("        |- print all running tasks to the terminal   |\n");
    printf("[4]  |-----Open coding starter-pack                  |\n");
    printf("[5]  |---------Exit                                  |\n");
    printf("|====================================================|");
    printf("\nChoose an operation(by number): ");
}

void menu_wifi() {
    printf("\n>wifi operations<\n");
    printf("[1]-|Show network history\n");
    printf("[2]---|Get wifi pwd of any network you've ever connected to\n");
    printf("[3]-----|Help\n");
    printf("[4]-------|Exit\n");
}

void menu_power() {
    printf("\n>power operations<\n");
    printf("[1]-|Shutdown\n");
    printf("[2]---|Restart\n");
    printf("[3]-----|Logout\n");
    printf("[4]-------|Hibernate\n");
    printf("[5]---------|Help\n");
    printf("[6]-----------|Exit\n");
    printf("\nChoose operation(number):  \n");
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
    system("start https://chatgpt.com");
    system("start https://youtube.com");
    system("start https://github.com");
    system("start about:newtab");
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

void menu_tasks() {
    printf("\n                               |> task list <|\n");
    printf("=============================================================================|");
    Sleep(1000);
    system("tasklist");
    Sleep(3000);
}

void menu_cmd() {
    printf("\nLoading...\n");
    Sleep(2000);
    open_cmd();
    Sleep(3000);
}
