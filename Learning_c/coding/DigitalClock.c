#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <stdbool.h>

void beep() {
    printf("\a");
    fflush(stdout);
}

int main() {
    int formatChoice = 24;
    int alarmHour = -1, alarmMinute = -1;
    bool alarmSet = false;

    printf("Choose clock format:\n");
    printf("1. 12-hour\n");
    printf("2. 24-hour\n");
    printf("Enter choice (1 or 2): ");
    scanf("%d", &formatChoice);
    if (formatChoice != 1) formatChoice = 24;

    printf("Do you want to set an alarm? (1 for Yes, 0 for No): ");
    int alarmChoice = 0;
    scanf("%d", &alarmChoice);

    if (alarmChoice == 1) {
        printf("Enter alarm hour (0-23): ");
        scanf("%d", &alarmHour);
        printf("Enter alarm minute (0-59): ");
        scanf("%d", &alarmMinute);
        if (alarmHour >= 0 && alarmHour < 24 && alarmMinute >= 0 && alarmMinute < 60) {
            alarmSet = true;
            printf("Alarm set for %02d:%02d\n", alarmHour, alarmMinute);
        } else {
            printf("Invalid alarm time. Alarm disabled.\n");
            alarmSet = false;
        }
    }

    printf("\n---- DIGITAL CLOCK ----\n");

    while (1) {
        time_t rawtime;
        struct tm *pTime;
        int hour, minute, second;

        time(&rawtime);
        pTime = localtime(&rawtime);

        hour = pTime->tm_hour;
        minute = pTime->tm_min;
        second = pTime->tm_sec;

        if (formatChoice == 1) {
            char *ampm = "AM";
            int displayHour = hour;
            if (hour == 0) {
                displayHour = 12;
            } else if (hour == 12) {
                ampm = "PM";
            } else if (hour > 12) {
                displayHour = hour - 12;
                ampm = "PM";
            }
            printf("\r%4d : %4d : %4d %s", displayHour, minute, second, ampm);
        } else {
            printf("\r%02d : %02d : %02d", hour, minute, second);
        }

        fflush(stdout);

        if (alarmSet && hour == alarmHour && minute == alarmMinute) {
            printf("\n*** ALARM! Time is %02d:%02d ***\n", hour, minute);
            for (int i = 0; i < 5; i++) {
                beep();
                sleep(1);
            }
            alarmSet = false;
            printf("Alarm off.\n");
            printf("Press Ctrl+C to exit clock.\n");
        }

        sleep(1);
    }

    return 0;
}
