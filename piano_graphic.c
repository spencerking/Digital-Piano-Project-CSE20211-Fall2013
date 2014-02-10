//Spencer King and Hannah Porter, Lab 10

#include <stdio.h>
#include "gfx.h"

void draw_piano(int width, int height)
{
//draws two octaves of piano keys
	int i;
	for(i=0; i<16; i++){
		if (i==0 || i==3 || i==7 || i==10 || i==14 || i==15){
			gfx_line(50+i*width, 500-height/2, 50+i*width, 500+height/2);	
		}
		
		else{
			gfx_line(50+i*width, 500, 50+i*width, 500+height/2);
		}	
	}

	for(i=0; i<16; i++){
		if (i==0 || i==3 || i==7 || i==10 || i==14 || i==15){
			continue;
		}
		gfx_line(50 +i*width-width/4, 500-height/2, 50+i*width-width/4, 500);
		gfx_line(50 +i*width+width/4, 500-height/2, 50+i*width+width/4, 500);
		gfx_line(50+i*width+width/4, 500, 50+i*width-width/4, 500);
	}

	gfx_line(50, 500-height/2, 50+15*width, 500-height/2);
	gfx_line(50, 500+height/2, 50+15*width, 500+height/2);
	
}

void draw_box(){
//draws the two change octave buttons
	gfx_line(100,100,150,100);
	gfx_line(150,100,150,150);
	gfx_line(150,150,100,150);
	gfx_line(100,150,100,100);
	gfx_line(110,125,140,125);

	gfx_line(200,100,250,100);
	gfx_line(250,100,250,150);
	gfx_line(250,150,200,150);
	gfx_line(200,150,200,100);
	gfx_line(210,125,240,125);
	gfx_line(225,110,225,140);

	
}

void octave_label(int height){
//labels the change octave buttons
	draw_O(110,60,height);
	draw_C(130,60,height);
	draw_T(150,60,height);
	draw_A(170,60,height);
	draw_V(190,60,height);
	draw_E(210,60,height);
}

void flash_key(double x1, double x2, int y1, int y2, int r, int g, int b){
//fills in a key with a specific color
int i;
gfx_color(r,g,b);
for(i=x1+1; i<x2; i++){
	gfx_line(i,y1+1,i,y2-1);
}
}

void animate_key(double u1, double u2, int v1, int v2, double w1, double w2, int x1, int x2, double y1, double y2, int z1, int z2, double t){
//calls flash key to fill in a key
//fills in key orange and then black to make the flash

flash_key(u1, u2, v1, v2, 255, 211, 63);

flash_key(w1, w2, x1, x2, 255, 211, 63);

flash_key(y1, y2, z1, z2, 255, 211, 63);

gfx_flush();
int q=t*1000000;
usleep(q);
flash_key(u1, u2, v1, v2, 0, 0, 0);
flash_key(w1, w2, x1, x2, 0, 0, 0);
flash_key(y1, y2, z1, z2, 0, 0, 0);
}


void draw_arrow(int height, int *f)
{
//draws the middle C indicator
	int width=height/2;
	//middle of the keyboard
	if (*f==0){
		gfx_color(255,255,255);
		gfx_line(612.5,705,612.5,705+height);
		gfx_line(612.5, 705, 612.5+width, 705+width);
		gfx_line(612.5, 705, 612.5-width, 705+width);

		gfx_color(0,0,0);
		gfx_line(87.5,705,87.5,705+height);
		gfx_line(87.5, 705, 87.5+width, 705+width);
		gfx_line(87.5, 705, 87.5-width, 705+width);

		gfx_color(0,0,0);
		gfx_line(1137.5,705,1137.5,705+height);
		gfx_line(1137.5, 705, 1137.5+width, 705+width);
		gfx_line(1137.5, 705, 1137.5-width, 705+width);
	}
	//middle c moved to low c
	else if (*f==1){
		gfx_color(255,255,255);
		gfx_line(1137.5,705,1137.5,705+height);
		gfx_line(1137.5, 705, 1137.5+width, 705+width);
		gfx_line(1137.5, 705, 1137.5-width, 705+width);

		gfx_color(0,0,0);
		gfx_line(612.5,705,612.5,705+height);
		gfx_line(612.5, 705, 612.5+width, 705+width);
		gfx_line(612.5, 705, 612.5-width, 705+width);

		gfx_color(0,0,0);
		gfx_line(87.5,705,87.5,705+height);
		gfx_line(87.5, 705, 87.5+width, 705+width);
		gfx_line(87.5, 705, 87.5-width, 705+width);

	}
	//middle c moved to high c
	else if (*f==-1){
		gfx_color(255,255,255);
		gfx_line(87.5,705,87.5,705+height);
		gfx_line(87.5, 705, 87.5+width, 705+width);
		gfx_line(87.5, 705, 87.5-width, 705+width);

		gfx_color(0,0,0);
		gfx_line(1137.5,705,1137.5,705+height);
		gfx_line(1137.5, 705, 1137.5+width, 705+width);
		gfx_line(1137.5, 705, 1137.5-width, 705+width);

		gfx_color(0,0,0);
		gfx_line(612.5,705,612.5,705+height);
		gfx_line(612.5, 705, 612.5+width, 705+width);
		gfx_line(612.5, 705, 612.5-width, 705+width);
	}

}


int piano_graphic(const char *commands[100], int *f){
int xsize=1250;
int ysize=1000;
int height=400;
int width=(xsize-50)/16;
int xpos;
int ypos;
int x=2;

char c;
gfx_open(xsize, ysize, "Digital Piano");
draw_piano(width, height);
draw_arrow(50, f);
gfx_color(255,255,255);
draw_box();
quit_button();
octave_label(30);
while (x != 1){

	c=gfx_wait();
	if(c==1){
		xpos=gfx_xpos();
		ypos=gfx_ypos();

		//user clicks the octave minus button
		if(xpos>=100 && xpos<=150 && ypos>=100 && ypos<=150){
			if(*f==-1){
			}
			else{
			    *f=*f-1;
			     draw_arrow(50, f);
			}
		}

		//user clicks the ocatve plus button
		if(xpos>=200 && xpos<=250 && ypos>=100 && ypos<=150){
			if(*f==1){
			}
			else{
			    *f=*f+1;
			    draw_arrow(50, f);
			}
		}

		//user clicks the quit button
		if (xpos>=1110 && xpos<=1210 && ypos>=850 && ypos<=890){
			return 0;
		}



		get_note(xpos, ypos,commands, f);
	}
		
}

}

