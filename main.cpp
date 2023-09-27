#include <unistd.h>

#include <iostream>

#include "utility_c.h"

int main() {
    std::cout << "Hello, World!" << std::endl;

    statusbar *status = statusbar_new("Indeterminate");
    for (int i = 0; i < 100; i++) {
        statusbar_inc(status);
        sleep(1);
    }
    statusbar_finish(status);
    return 0;
}
