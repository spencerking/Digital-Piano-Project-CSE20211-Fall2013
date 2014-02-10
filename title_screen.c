//Lab 10, Spencer King and Hannah Porter

#include <stdio.h>
#include "gfx.h"
#include <string.h>

//draw letters

void draw_A(int x, int y, int height)
{
    int width=height/2;
    gfx_line(x,y+height,x+width/2,y);
    gfx_line(x+width/2,y,x+width,y+height);
    gfx_line(x+width/3,y+height/2,x+width/1.4,y+height/2);
}

void draw_B(int x, int y, int height)
{
    int width=height/2;
    gfx_line(x,y,x+width,y);
    gfx_line(x,y,x,y+height);
    gfx_line(x+width,y,x+width*1.2,y+3);
    gfx_line(x,y+height/2,x+width,y+height/2);
    gfx_line(x+width,y+height/2,x+width*1.2,y+height/2-3);
    gfx_line(x+width*1.2,y+height/2-3,x+width*1.2,y+3);
    gfx_line(x,y+height,x+width,y+height);
    gfx_line(x+width,y+height,x+width*1.2,y+height-3);
    gfx_line(x+width,y+height/2,x+width*1.2,y+height/2+3);
    gfx_line(x+width*1.2,y+height-3,x+width*1.2,y+height/2+3);

}

void draw_C(int x, int y, int height)
{
    int width=height/2;
    gfx_line(x,y,x+width,y);
    gfx_line(x,y,x,y+height);
    gfx_line(x,y+height,x+width,y+height);
    
}

void draw_D(int x, int y, int height)
{
    int width=height/2;
    gfx_line(x,y,x,y+height);
    gfx_line(x,y,x+width/1.2,y);
    gfx_line(x+width/1.2,y,x+width,y+5);
    gfx_line(x,y+height,x+width/1.2,y+height);
    gfx_line(x+width/1.2,y+height,x+width,y+height-5);
    gfx_line(x+width,y+height-5,x+width,y+5);
}


void draw_E(int x, int y, int height)
{
    int width=height/2;
    gfx_line(x,y,x,y+height);
    gfx_line(x,y,x+width,y);
    gfx_line(x,y+height,x+width,y+height);
    gfx_line(x,y+height/2,x+width,y+height/2);
}

void draw_F(int x, int y, int height)
{
    int width=height/2;
    gfx_line(x,y,x,y+height);
    gfx_line(x,y,x+width,y);
    gfx_line(x,y+height/3,x+width,y+height/3);
}

void draw_G(int x, int y, int height)
{
    int width=height/2;
    gfx_line(x,y,x,y+height);
    gfx_line(x,y,x+width,y);
    gfx_line(x,y+height,x+width,y+height);
    gfx_line(x+width,y+height,x+width,y+height/2);
    gfx_line(x+width,y+height/2,x+width/2,y+height/2);
}

void draw_H(int x, int y, int height)
{
    int width=height/2;
    gfx_line(x,y,x,y+height);
    gfx_line(x,y+height/2,x+width,y+height/2);
    gfx_line(x+width,y,x+width,y+height);
}

void draw_I(int x, int y, int height)
{
    int width=height/2;
    gfx_line(x,y,x+width,y);
    gfx_line(x,y+height,x+width,y+height);
    gfx_line(x+width/2,y,x+width/2,y+height);
}

void draw_J(int x, int y, int height)
{
    int width=height/2;
    gfx_line(x,y,x+width,y);
    gfx_line(x+width/2,y,x+width/2,y+height);
    gfx_line(x+width/2,y+height,x,y+height);
    gfx_line(x,y+height,x,y+height/1.4);
    
}

void draw_K(int x, int y, int height)
{
    int width=height/2;
    gfx_line(x,y,x,y+height);
    gfx_line(x,y+height/2,x+width,y);
    gfx_line(x,y+height/2,x+width,y+height);
}

void draw_L(int x, int y, int height)
{
    int width=height/2;
    gfx_line(x,y,x,y+height);
    gfx_line(x,y+height,x+width,y+height);
    
}

void draw_M (int x, int y, int height) {
int width=height/2;
gfx_line(x, y, x, y+height);
gfx_line(x+width, y, x+width, y+height);
gfx_line(x, y, x+width/2, y+height/2);
gfx_line(x+width, y, x+width/2, y+height/2);
}

void draw_N (int x, int y, int height) {
int width=height/2;
gfx_line(x, y, x, y+height);
gfx_line(x+width, y, x+width, y+height);
gfx_line(x, y, x+width, y+height);
}

void draw_O (int x, int y, int height) {
int width=height/2;
gfx_line(x, y, x, y+height);
gfx_line(x+width, y, x+width, y+height);
gfx_line(x, y, x+width, y);
gfx_line(x, y+height, x+width, y+height);
}

void draw_P (int x, int y, int height) {
int width=height/2;
gfx_line(x, y, x, y+height);
gfx_line(x, y, x+width, y);
gfx_line(x+width, y, x+width, y+height/2);
gfx_line(x+width, y+height/2, x, y+height/2);
}

void draw_Q (int x, int y, int height) {
int width=height/2;
gfx_line(x, y, x, y+height);
gfx_line(x+width, y, x+width, y+height);
gfx_line(x, y, x+width, y);
gfx_line(x, y+height, x+width, y+height);
gfx_line(x+width, y+height, x+width/2, y+height/2);
}

void draw_R (int x, int y, int height) {
int width=height/2;
gfx_line(x, y, x, y+height);
gfx_line(x, y, x+width, y);
gfx_line(x+width, y, x+width, y+height/2);
gfx_line(x+width, y+height/2, x, y+height/2);
gfx_line(x+width/2, y+height/2, x+width, y+height);
}

void draw_S (int x, int y, int height) {
int width=height/2;
gfx_line(x+width, y, x, y);
gfx_line(x, y, x, y+height/2);
gfx_line(x, y+height/2, x+width, y+height/2);
gfx_line(x+width, y+height/2, x+width, y+height);
gfx_line(x+width, y+height, x, y+height);
}

void draw_T (int x, int y, int height) {
int width=height/2;
gfx_line(x+width, y, x, y);
gfx_line(x+width/2, y, x+width/2, y+height);
}

void draw_U (int x, int y, int height) {
int width=height/2;
gfx_line(x, y, x, y+height);
gfx_line(x+width, y, x+width, y+height);
gfx_line(x, y+height, x+width, y+height);
}

void draw_V (int x, int y, int height) {
int width=height/2;
gfx_line(x, y, x+width/2, y+height);
gfx_line(x+width, y, x+width/2, y+height);
}

void draw_W (int x, int y, int height) {
int width=height/2;
gfx_line(x, y, x, y+height);
gfx_line(x+width, y, x+width, y+height);
gfx_line(x, y+height, x+width/2, y+height/2);
gfx_line(x+width, y+height, x+width/2, y+height/2);
}

void draw_X (int x, int y, int height) {
int width=height/2;
gfx_line(x, y, x+width, y+height);
gfx_line(x+width, y, x, y+height);
}

void draw_Y (int x, int y, int height) {
int width=height/2;
gfx_line(x, y, x+width/2, y+height/2);
gfx_line(x+width/2, y+height/2, x+width, y);
gfx_line(x+width/2, y+height/2, x+width/2, y+height);
}

void draw_Z (int x, int y, int height) {
int width=height/2;
gfx_line(x+width, y, x, y+height);
gfx_line(x, y, x+width, y);
gfx_line(x, y+height, x+width, y+height);
}

void terminal_message(){
//draws a prompt to open the terminal

draw_P(230,750,60);
draw_L(265,750,60);
draw_E(300,750,60);
draw_A(340,750,60);
draw_S(372,750,60);
draw_E(410,750,60);

draw_O(480,750,60);
draw_P(515,750,60);
draw_E(555,750,60);
draw_N(595,750,60);

draw_T(650,750,60);
draw_H(690,750,60);
draw_E(730,750,60);

draw_T(790,750,60);
draw_E(830,750,60);
draw_R(865,750,60);
draw_M(905,750,60);
draw_I(945,750,60);
draw_N(985,750,60);
draw_A(1025,750,60);
draw_L(1065,750,60);
gfx_flush();
}

void draw_title(int height)
{
//draws the title
draw_D(200,75,height);
draw_I(260,75,height);
draw_G(320,75,height);
draw_I(380,75,height);
draw_T(440,75,height);
draw_A(500,75,height);
draw_L(560,75,height);
draw_P(680,75,height);
draw_I(740,75,height);
draw_A(800,75,height);
draw_N(860,75,height);
draw_O(920,75,height);
}

void draw_name(int height)
{
//draws the first name
draw_S(50,275,height);
draw_P(80,275,height);
draw_E(110,275,height);
draw_N(140,275,height);
draw_C(170,275,height);
draw_E(200,275,height);
draw_R(230,275,height);
draw_K(290,275,height);
draw_I(320,275,height);
draw_N(350,275,height);
draw_G(380,275,height);
}

void draw_name2(int height)
{
//draws the second name
draw_H(800,275,height);
draw_A(830,275,height);
draw_N(860,275,height);
draw_N(890,275,height);
draw_A(920,275,height);
draw_H(950,275,height);
draw_P(1010,275,height);
draw_O(1040,275,height);
draw_R(1070,275,height);
draw_T(1100,275,height);
draw_E(1130,275,height);
draw_R(1160,275,height);
}


void draw_button(int x, int y,int height,int width)
{
//draws a button
gfx_line(x,y,x,y+height);
gfx_line(x,y+height,x+width,y+height);
gfx_line(x+width,y+height,x+width,y);
gfx_line(x+width,y,x,y);
}

void quit_button(){
//draws and labels the quit button
draw_button(1110,850,40,100);
draw_Q(1115,855,30);
draw_U(1142,855,30);
draw_I(1164,855,30);
draw_T(1190,855,30);
}

void button_label(int height)
{
//draws free play button label
draw_F(305,605,height);
draw_R(340,605,height);
draw_E(375,605,height);
draw_E(410,605,height);
draw_P(465,605,height);
draw_L(500,605,height);
draw_A(535,605,height);
draw_Y(570,605,height);
}

void button_label2(int height)
{
//draws load file button label
draw_L(655,605,height);
draw_O(690,605,height);
draw_A(725,605,height);
draw_D(760,605,height);
draw_F(815,605,height);
draw_I(850,605,height);
draw_L(885,605,height);
draw_E(920,605,height);
}

int title_screen(const char *commands[100], int *f, double noteinfo[2][1000], char output[1000]){

int xsize=1250;
int ysize=1000;
int xpos;
int ypos;
int height=400;
int width=(xsize-50)/16;
int i,j;
char input[20];
char initial[1000];
char c;
gfx_open(xsize, ysize, "Digital Piano");
quit_button();
draw_title(100);
draw_name(50);
draw_name2(50);
draw_button(295,600,70,310);
draw_button(645,600,70,310);
button_label(60);
button_label2(60);

while (1){

	c=gfx_wait();
	xpos=gfx_xpos();
	ypos=gfx_ypos();
	//user clicks the quit button
	if (xpos>=1110 && xpos<=1210 && ypos>=850 && ypos<=890){
		return 0;
	}

	//user clicks free play button
	if (xpos>=295 && xpos<=605 && ypos>=600 && ypos<=670){
		gfx_clear();
		piano_graphic(commands, f);

	}
	//user clicks load file button
	if (xpos>=645 && xpos<=955 && ypos>=600 && ypos<=670){
		terminal_message();
		printf("Please enter the name of the file, including the extension.\nThe file content should follow the same format as the examples in lab 8:\n");
		scanf("%s", input);
		//scans file name into input
		FILE *music=fopen(input, "r");
		if ((music=fopen(input, "r")) == NULL){
			//returns error if file not found
			puts("File could not be opened");
			return 0;
		}

		else{
			//scans the file into output
			for (j=0; j<1000; j++){
			fscanf(music, "%c", &output[j]);
			if (output[j]=='X'){
				break;
			}
			}
			
		}

		piano2(noteinfo, output);
		//fork to play sound while lighting up keys
		if (fork()){
			system("play sound.wav");
		}
		else{
		gfx_clear();
		draw_piano(width, height);
		draw_arrow(50, f);
		gfx_color(255,255,255);
		draw_box();
		octave_label(30);
		quit_button();
		gfx_flush();
		key_animation(noteinfo, f);
		return 0;
		}
	
	}

}

}
