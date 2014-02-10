//Lab 10, Spencer King and Hannah Porter


#include <stdio.h>
#include <stdlib.h>
#include "gfx.h"
#include "wavfile.h"
#include <unistd.h>



int main (void){

int b=0;
int *f=&b; //starts with middle C in the middle of the keyboard
double noteinfo[2][1000];
char *commands[100];
char output[1000];
initialize_array(commands);
title_screen(commands, f, noteinfo);

}

