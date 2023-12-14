#include <unistd.h>

#include <iostream>

#include "utility_c.h"

#define SLEEP_US 100000

int main() {
    std::cout << "Hello, World!" << std::endl;

    // Progress bar
    int max             = 60;
    // Smooth |=======================================                  | ETA: 0h00m07s
    progressbar *smooth = progressbar_new("Smooth", max);
    for (int i = 0; i < max; i++) {
        usleep(SLEEP_US);
        progressbar_inc(smooth);
    }
    progressbar_finish(smooth);

    // Three Second Task with a long label |====================        | ETA: 0h00m03s
    progressbar *longlabel = progressbar_new("Three Second Task with a long label", 3);
    for (int i = 0; i < 3; i++) {
        progressbar_inc(longlabel);
        sleep(1);
    }
    progressbar_finish(longlabel);

    // Fast |====================                                        | ETA: 0h00m03s
    progressbar *fast = progressbar_new("Fast", 20);
    for (int i = 0; i < 20; i++) {
        usleep(SLEEP_US);
        progressbar_inc(fast);
    }
    progressbar_finish(fast);

    // Custom <...................................                      > ETA: 0h00m07s
    progressbar *custom = progressbar_new_with_format("Custom", max, "<.>");
    for (int i = 0; i < max; i++) {
        usleep(SLEEP_US);
        progressbar_inc(custom);
    }
    progressbar_finish(custom);

    // Status bar

    // Indeterminate: \                                                         0:00:03
    statusbar *status = statusbar_new("Indeterminate");
    for (int i = 0; i < 30; i++) {
        usleep(SLEEP_US);
        statusbar_inc(status);
    }
    statusbar_finish(status);

    // Status bar with a really long label: \                                   0:00:01
    statusbar *longStatus = statusbar_new("Status bar with a really long label");
    for (int i = 0; i < 10; i++) {
        usleep(SLEEP_US);
        statusbar_inc(longStatus);
    }
    statusbar_finish(longStatus);

    // Custom: )                                                                0:00:03
    statusbar *customStatus = statusbar_new_with_format("Custom", "(|)|");
    for (int i = 0; i < 30; i++) {
        usleep(SLEEP_US);
        statusbar_inc(customStatus);
    }
    statusbar_finish(customStatus);
}
