#include <termios.h>
#include <stdio.h>
#include <assert.h>
#include "c-non-blocking-input.h"

//Make input blocking again
void nonBlockingDisable(struct termios *previous_settings) {
	tcsetattr(0, TCSANOW, previous_settings); //Restore the previous settings
}

//Change input terminal settings so that input becomes no blocking
//Returns the previous settings
struct termios nonBlockingEnable() {
    struct termios previous_settings;
    struct termios new_settings;
	tcgetattr(0, &previous_settings); //Read actual settings
    new_settings = previous_settings; //Start modifying them
    new_settings.c_lflag &= ~ICANON; //Disable canonical mode (see @@@)
    new_settings.c_lflag &= ~ECHO; //Disable printing user input
    new_settings.c_cc[VMIN] = 1; //Minimal number of characters to read for the read function to return
    new_settings.c_cc[VTIME] = 0; //Max time from the start of a call to the read function to its return
    tcsetattr(0, TCSANOW, &new_settings); //Save new settings (TCSANOW = save immediately)
	return previous_settings; //Return the previous settings
}

int main() {
    struct termios previous_settings = nonBlockingEnable();
    char c = 0;
    while(c!='q' && c!='Q') {
        c = getchar();
		printf("Read: %c\n", c);
    }
	printf("Exit\n");
	nonBlockingDisable(&previous_settings);
    return 0;
}
