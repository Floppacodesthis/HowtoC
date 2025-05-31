#ifndef UTILS_H
#define UTILS_H

void menu();
void menu_wifi();
void menu_power();

void restart();
void shutdown();
void logout();
void help();
void hibernate();

void open_cmd();

void show_networks();
void get_password(const char *profile);
void networks_help();
void menu_tasks();
void menu_cmd();

#endif // UTILS_H

