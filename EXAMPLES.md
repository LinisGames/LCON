# LCON Examples for version 0.1
This example demonstrates all 16 text colors on a dark green background.
```cpp
#include <iostream>
#include "LCON.h"

int main() {
    // Set UTF-8 encoding
    LCON::SetConsoleEncoding_UTF8();
    // Set background color
    LCON::SetFullBackgroundColor(LCON::Color::dark_green);

    // Set text color
    LCON::SetTextColor(LCON::Color::black);
    for (int i = 0; i < 1000; i++) {
        std::cout << "Black." << std::endl;
    }

    LCON::Console_Clear();

    // Set text color
    LCON::SetTextColor(LCON::Color::gray);
    for (int i = 0; i < 1000; i++) {
        std::cout << "Gray." << std::endl;
    }

    LCON::Console_Clear();

    // Set text color
    LCON::SetTextColor(LCON::Color::dark_gray);
    for (int i = 0; i < 1000; i++) {
        std::cout << "Dark gray." << std::endl;
    }

    LCON::Console_Clear();

    // Set text color
    LCON::SetTextColor(LCON::Color::red);
    for (int i = 0; i < 1000; i++) {
        std::cout << "Red." << std::endl;
    }

    LCON::Console_Clear();

    // Set text color
    LCON::SetTextColor(LCON::Color::dark_red);
    for (int i = 0; i < 1000; i++) {
        std::cout << "Dark red." << std::endl;
    }

    LCON::Console_Clear();

    // Set text color
    LCON::SetTextColor(LCON::Color::green);
    for (int i = 0; i < 1000; i++) {
        std::cout << "Green." << std::endl;
    }

    LCON::Console_Clear();

    // Set text color
    LCON::SetTextColor(LCON::Color::dark_green);
    for (int i = 0; i < 1000; i++) {
        std::cout << "Dark green." << std::endl;
    }

    LCON::Console_Clear();

    // Set text color
    LCON::SetTextColor(LCON::Color::blue);
    for (int i = 0; i < 1000; i++) {
        std::cout << "Blue." << std::endl;
    }

    LCON::Console_Clear();

    // Set text color
    LCON::SetTextColor(LCON::Color::dark_blue);
    for (int i = 0; i < 1000; i++) {
        std::cout << "Dark blue." << std::endl;
    }

    LCON::Console_Clear();

    // Set text color
    LCON::SetTextColor(LCON::Color::yellow);
    for (int i = 0; i < 1000; i++) {
        std::cout << "Yellow." << std::endl;
    }

    LCON::Console_Clear();

    // Set text color
    LCON::SetTextColor(LCON::Color::dark_yellow);
    for (int i = 0; i < 1000; i++) {
        std::cout << "Dark yellow." << std::endl;
    }

    LCON::Console_Clear();

    // Set text color
    LCON::SetTextColor(LCON::Color::cyan);
    for (int i = 0; i < 1000; i++) {
        std::cout << "Cyan." << std::endl;
    }

    LCON::Console_Clear();

    // Set text color
    LCON::SetTextColor(LCON::Color::dark_cyan);
    for (int i = 0; i < 1000; i++) {
        std::cout << "Dark cyan." << std::endl;
    }

    LCON::Console_Clear();

    // Set text color
    LCON::SetTextColor(LCON::Color::magenta);
    for (int i = 0; i < 1000; i++) {
        std::cout << "Magenta." << std::endl;
    }

    LCON::Console_Clear();

    // Set text color
    LCON::SetTextColor(LCON::Color::dark_magenta);
    for (int i = 0; i < 1000; i++) {
        std::cout << "Dark magenta." << std::endl;
    }
}
