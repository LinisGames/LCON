# LCON Examples for version 0.1
This example demonstrates all 16 text colors on a dark green background.
```cpp
#include "LCON.h"

int main() {
    // Set UTF-8 encoding
    LCON::SetConsoleEncoding_UTF8();
    // Set background color
    LCON::SetFullBackgroundColor(LCON::Color::dark_green);

    // Set text color
    LCON::SetTextColor(LCON::Color::black);
    for (int i = 0; i < 1000; i++) {
        LCON::Print("Black.\n");
    }

    LCON::Console_Clear();

    // Set text color
    LCON::SetTextColor(LCON::Color::gray);
    for (int i = 0; i < 1000; i++) {
        LCON::Print("Gray.\n");
    }

    LCON::Console_Clear();

    // Set text color
    LCON::SetTextColor(LCON::Color::dark_gray);
    for (int i = 0; i < 1000; i++) {
        LCON::Print("Dark gray.\n");
    }

    LCON::Console_Clear();

    // Set text color
    LCON::SetTextColor(LCON::Color::red);
    for (int i = 0; i < 1000; i++) {
        LCON::Print("Red.\n");
    }

    LCON::Console_Clear();

    // Set text color
    LCON::SetTextColor(LCON::Color::dark_red);
    for (int i = 0; i < 1000; i++) {
        LCON::Print("Dark red\n");
    }

    LCON::Console_Clear();

    // Set text color
    LCON::SetTextColor(LCON::Color::green);
    for (int i = 0; i < 1000; i++) {
        LCON::Print("Green.\n");
    }

    LCON::Console_Clear();

    // Set text color
    LCON::SetTextColor(LCON::Color::dark_green);
    for (int i = 0; i < 1000; i++) {
        LCON::Print("Dark green.\n");
    }

    LCON::Console_Clear();

    // Set text color
    LCON::SetTextColor(LCON::Color::blue);
    for (int i = 0; i < 1000; i++) {
        LCON::Print("Blue.\n");
    }

    LCON::Console_Clear();

    // Set text color
    LCON::SetTextColor(LCON::Color::dark_blue);
    for (int i = 0; i < 1000; i++) {
        LCON::Print("Dark blue.\n");
    }

    LCON::Console_Clear();

    // Set text color
    LCON::SetTextColor(LCON::Color::yellow);
    for (int i = 0; i < 1000; i++) {
        LCON::Print("Yellow.\n");
    }

    LCON::Console_Clear();

    // Set text color
    LCON::SetTextColor(LCON::Color::dark_yellow);
    for (int i = 0; i < 1000; i++) {
        LCON::Print("Dark yellow.\n");
    }

    LCON::Console_Clear();

    // Set text color
    LCON::SetTextColor(LCON::Color::cyan);
    for (int i = 0; i < 1000; i++) {
        LCON::Print("Cyan.\n");
    }

    LCON::Console_Clear();

    // Set text color
    LCON::SetTextColor(LCON::Color::dark_cyan);
    for (int i = 0; i < 1000; i++) {
        LCON::Print("Dark cyan.\n");
    }

    LCON::Console_Clear();

    // Set text color
    LCON::SetTextColor(LCON::Color::magenta);
    for (int i = 0; i < 1000; i++) {
        LCON::Print("Magenta.\n");
    }

    LCON::Console_Clear();

    // Set text color
    LCON::SetTextColor(LCON::Color::dark_magenta);
    for (int i = 0; i < 1000; i++) {
        LCON::Print("Dark magenta.\n");
    }
}
