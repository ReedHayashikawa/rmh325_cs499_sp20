#ifndef _PBUFFER_H
#define _PBUFFER_H

#include <stdlib.h>
#include <assert.h>
#include <termios.h>
#include <stdio.h>

void nonBlockingDisable(struct termios *previous_settings);
struct termios nonBlockingEnable();

#endif
