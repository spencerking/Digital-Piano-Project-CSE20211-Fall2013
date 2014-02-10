//Lab 10, Spencer King and Hannah Porter

#include <stdio.h>
#include "wavfile.h"
#include "gfx.h"


void play_note(const char *s)
{
//plays a wav file
system(s);

}

void get_note(int x, int y, const char *commands[100], int *f)
{
//determines which note to play and then plays it
char *s;
if ((x>=50 && x<=106.25 && y<=700 && y>=300) || (x>=106.25 && x<=125 && y>=500 && y<=700)){
	
	if (*f==0){
		s=commands[40];
	} else if (*f==-1){
		s=commands[52];
	} else if(*f==1) {
		s=commands[16];
	}

	//fork to play wav and light up the key
	if (fork()){
		play_note(s);

	}
	else{
	//fills key orange and then black
	flash_key(50.0,106.25,300,700, 255, 211, 63);
	flash_key(106.25,125.0,500,700, 255, 211, 63);
	gfx_flush();
	sleep(2);
	flash_key(50.0,106.25,300,700, 0, 0, 0);
	flash_key(106.25,125.0,500,700, 0, 0, 0);
	}
	
}

if (x>=106.25 && x<=143.75 && y>=300 && y<=500) {
	
	if (*f==0){
		s=commands[41];
	} else if (*f==-1){
		s=commands[53];
	} else if(*f==1){
		s=commands[17];
	}

	if (fork()){
		play_note(s);

	}
	else{
	flash_key(107.26,142.75,300,500, 255, 211, 63);
	gfx_flush();
	sleep(2);
	flash_key(107.26,142.75,300,500, 0, 0, 0);
	}

}

if ((x>=125 && x<=143.75 && y>=500 && y<=700) || (x>=143.75 && x<=181.25 && y>=300 && y<=700) || (x>=181.25 && x<=200 && y>=500 && y<=700)) {

	if (*f==0){
		s=commands[42];
	} else if (*f==-1){
		s=commands[54];
	} else if(*f==1){
		s=commands[18];
	}


	if (fork()){
		play_note(s);

	}
	else{
	flash_key(125.0,143.75,500,700, 255, 211, 63);
	flash_key(143.75,181.25,300,700, 255, 211, 63);
	flash_key(181.25,200.0,500,700, 255, 211, 63);
	gfx_flush();
	sleep(2);
	flash_key(125.0,143.75,500,700, 0, 0, 0);
	flash_key(143.75,181.25,300,700, 0, 0, 0);
	flash_key(181.25,200.0,500,700, 0, 0, 0);
	}
}

if (x>=181.25 && x<=218.75 && y>=300 && y<=500) {
	
	if (*f==0){
		s=commands[43];
	} else if (*f==-1){
		s=commands[55];
	} else if(*f==1){
		s=commands[19];
	}
	
	if (fork()){
		play_note(s);

	}
	else{
	flash_key(182.25,217.75,300,500, 255, 211, 63);
	gfx_flush();
	sleep(2);
	flash_key(182.25,217.75,300,500, 0, 0, 0);
	}

}

if ((x>=200 && x<=218.75 && y>=500 && y<=700) || (x>=218.75 && x<=275 && y>=300 && y<=700)) {

	if (*f==0){
		s=commands[44];
	} else if (*f==-1){
		s=commands[56];
	} else if(*f==1){
		s=commands[20];
	}	

	if (fork()){
		play_note(s);

	}
	else{
	flash_key(200.0, 218.75,500,700, 255, 211, 63);
	flash_key(218.75, 275.0,300,700, 255, 211, 63);
	gfx_flush();
	sleep(2);
	flash_key(200.0, 218.75,500,700, 0, 0, 0);
	flash_key(218.75, 275.0,300,700, 0, 0, 0);
	}


}

if ((x>=275 && x<=331.75 && y>=300 && y<=700) || (x>=331.75 && x<=350 && y>=500 && y<=700)) {

	if (*f==0){
		s=commands[45];
	} else if (*f==-1){
		s=commands[57];
	} else if(*f==1){
		s=commands[21];
	}	

	if (fork()){
		play_note(s);

	}
	else{
	flash_key(275.0, 331.75,300,700, 255, 211, 63);
	flash_key(331.75, 350.0,500,700, 255, 211, 63);
	gfx_flush();
	sleep(2);
	flash_key(275.0, 331.75,300,700, 0, 0, 0);
	flash_key(331.75, 350.0,500,700, 0, 0, 0);
	}
	

}

if (x>=331.25 && x<= 368.75 && y>=300 && y<=500) {

	if (*f==0){
		s=commands[46];
	} else if (*f==-1){
		s=commands[58];
	} else if(*f==1){
		s=commands[22];
	}

	if (fork()){
		play_note(s);

	}
	else{
	flash_key(332.25, 367.75,300,500, 255, 211, 63);
	gfx_flush();
	sleep(2);
	flash_key(332.25, 367.75,300,500, 0, 0, 0);
	}

}	

if ((x>=350 && x<=368.75 && y>=500 && y<=700) || (x>=368.75 && x<=406.25 && y>=300 && y<=700) || (x>=406.25 && x<=425 && y>=500 && y<=700)) {

	if (*f==0){
		s=commands[47];
	} else if (*f==-1){
		s=commands[59];
	} else if(*f==1){
		s=commands[23];
	}


	if (fork()){
		play_note(s);

	}
	else{
	flash_key(350.0, 368.75, 500, 700, 255, 211, 63);
	flash_key(368.75, 406.25,300,700, 255, 211, 63);
	flash_key(406.25, 425.0,500,700, 255, 211, 63);
	gfx_flush();
	sleep(2);
	flash_key(350.0, 368.75, 500, 700, 0, 0, 0);
	flash_key(368.75, 406.25,300,700, 0, 0, 0);
	flash_key(406.25, 425.0,500,700, 0, 0, 0);
	}

}	

if (x>=406.25 && x<=443.75 && y>=300 && y<=500) {

	if (*f==0){
		s=commands[12];
	} else if (*f==-1){
		s=commands[36];
	} else if(*f==1){
		s=commands[0];
	}

	if (fork()){
		play_note(s);

	}
	else{
	flash_key(407.25, 442.75,300,500, 255, 211, 63);
	gfx_flush();
	sleep(2);
	flash_key(407.25, 442.75,300,500, 0, 0, 0);
	}

}	

if ((x>=425 && x<=443.75 && y>=500 && y<=700) || (x>=443.75 && x<=481.25 && y>=300 && y<=700) || (x>=481.25 && x<=500 && y>=500 && y<=700)) {

	if (*f==0){
		s=commands[13];
	} else if (*f==-1){
		s=commands[37];
	} else if(*f==1){
		s=commands[1];
	}

	if (fork()){
		play_note(s);

	}
	else{
	flash_key(425.0, 443.75, 500, 700, 255, 211, 63);
	flash_key(443.75, 481.25,300,700, 255, 211, 63);
	flash_key(481.25, 500.0,500,700, 255, 211, 63);
	gfx_flush();
	sleep(2);
	flash_key(425.0, 443.75, 500, 700, 0, 0, 0);
	flash_key(443.75, 481.25,300,700, 0, 0, 0);
	flash_key(481.25, 500.0,500,700, 0, 0, 0);
	}


}

if (x>=481.25 && x<=518.75 && y>=300 && y<=500){

	if (*f==0){
		s=commands[14];
	} else if (*f==-1){
		s=commands[38];
	} else if(*f==1){
		s=commands[2];
	}
	
	if (fork()){
		play_note(s);

	}
	else{
	flash_key(482.25, 517.75,300,500, 255, 211, 63);
	gfx_flush();
	sleep(2);
	flash_key(482.25, 517.75,300,500, 0, 0, 0);
	}

}	

if ((x>=500 && x<=518.75 && y>=500 && y<=700) || (x>=518.75 && x<=575 && y>=300 && y<=700)) {

	if (*f==0){
		s=commands[15];
	} else if (*f==-1){
		s=commands[37];
	} else if(*f==1){
		s=commands[3];
	}	

	if (fork()){
		play_note(s);

	}
	else{
	flash_key(500.0, 518.75,500,700, 255, 211, 63);
	flash_key(518.75, 575.0,300,700, 255, 211, 63);
	gfx_flush();
	sleep(2);
	flash_key(500.0, 518.75,500,700, 0, 0, 0);
	flash_key(518.75, 575.0,300,700, 0, 0, 0);
	}

}	

if ((x>=575 && x<=631.25 && y>=300 && y<=700) || (x>=631.25 && x<=650 && y>=500 && y<=700)) {
//13

	if (*f==0){
		s=commands[16];
	} else if (*f==-1){
		s=commands[38];
	} else if(*f==1){
		s=commands[4];
	}

	if (fork()){
		play_note(s);

	}
	else{
	flash_key(575.0, 631.25,300,700, 255, 211, 63);
	flash_key(631.25, 650.0,500,700, 255, 211, 63);
	gfx_flush();
	sleep(2);
	flash_key(575.0, 631.25,300,700, 0, 0, 0);
	flash_key(631.25, 650.0,500,700, 0, 0, 0);
	}


}	

if (x>=631.25 && x<=668.75 && y>=300 && y<=500) {

	if (*f==0){
		s=commands[17];
	} else if (*f==-1){
		s=commands[39];
	} else if(*f==1){
		s=commands[5];
	}

	if (fork()){
		play_note(s);

	}
	else{
	flash_key(632.25, 667.75,300,500, 255, 211, 63);
	gfx_flush();
	sleep(2);
	flash_key(632.25, 667.75,300,500, 0, 0, 0);
	}


}	

if ((x>=650 && x<=668.75 && y>=500 && y<=700) || (x>=668.75 && x<=706.25 && y>=300 && y<=700) || (x>=706.25 && x<=725 && y>=500 && y<=700)) {

	if (*f==0){
		s=commands[18];
	} else if (*f==-1){
		s=commands[40];
	} else if(*f==1){
		s=commands[6];
	}

	if (fork()){
		play_note(s);

	}
	else{
	flash_key(650.0, 668.75, 500, 700, 255, 211, 63);
	flash_key(668.75, 706.25,300,700, 255, 211, 63);
	flash_key(706.25, 725.0,500,700, 255, 211, 63);
	gfx_flush();
	sleep(2);
	flash_key(650.0, 668.75, 500, 700, 0, 0, 0);
	flash_key(668.75, 706.25,300,700, 0, 0, 0);
	flash_key(706.25, 725.0,500,700, 0, 0, 0);
	}

}	

if (x>=706.25 && x<=743.75 && y>=300 && y<=500) {

	if (*f==0){
		s=commands[19];
	} else if (*f==-1){
		s=commands[41];
	} else if(*f==1){
		s=commands[7];
	}

	if (fork()){
		play_note(s);

	}
	else{
	flash_key(707.25, 742.75,300,500, 255, 211, 63);
	gfx_flush();
	sleep(2);
	flash_key(707.25, 742.75,300,500, 0, 0, 0);
	}

}	

if ((x>=725 && x<=743.75 && y>=500 && y<=700) || (x>=743.75 && x<=800 && y>=300 && y<=700)) {

	if (*f==0){
		s=commands[20];
	} else if (*f==-1){
		s=commands[42];
	} else if(*f==1){
		s=commands[8];
	}

	if (fork()){
		play_note(s);

	}
	else{
	flash_key(725.0, 743.75,500,700, 255, 211, 63);
	flash_key(743.75, 800.0,300,700, 255, 211, 63);
	gfx_flush();
	sleep(2);
	flash_key(725.0, 743.75,500,700, 0, 0, 0);
	flash_key(743.75, 800.0,300,700, 0, 0, 0);
	}

}	

if ((x>=800 && x<=856.25 && y>=300 && y<=700) || (x>=856.25 && x<=875 && y>=500 && y<=700)) {

	if (*f==0){
		s=commands[21];
	} else if (*f==-1){
		s=commands[43];
	} else if(*f==1){
		s=commands[9];
	}

	if (fork()){
		play_note(s);

	}
	else{
	flash_key(800.0, 856.25,300,700, 255, 211, 63);
	flash_key(856.25, 875.0,500,700, 255, 211, 63);
	gfx_flush();
	sleep(2);
	flash_key(800.0, 856.25,300,700, 0, 0, 0);
	flash_key(856.25, 875.0,500,700, 0, 0, 0);
	}

}	

if (x>=856.25 && x<=893.75 && y>=300 && y<=500) {

	if (*f==0){
		s=commands[22];
	} else if (*f==-1){
		s=commands[44];
	} else if(*f==1){
		s=commands[10];
	}

	if (fork()){
		play_note(s);

	}
	else{
	flash_key(857.25, 892.75,300,500, 255, 211, 63);
	gfx_flush();
	sleep(2);
	flash_key(857.25, 892.75,300,500, 0, 0, 0);
	}


}	

if ((x>=875 && x<=893.75 && y>=500 && y<=700) || (x>=893.75 && x<=931.25 && y>=300 && y<=700) || (x>=931.25 && x<=950 && y>=500 && y<=700)) {

	if (*f==0){
		s=commands[23];
	} else if (*f==-1){
		s=commands[45];
	} else if(*f==1){
		s=commands[11];
	}

	if (fork()){
		play_note(s);

	}
	else{
	flash_key(875.0, 893.75, 500, 700, 255, 211, 63);
	flash_key(893.75, 931.25,300,700, 255, 211, 63);
	flash_key(931.25, 950.0,500,700, 255, 211, 63);
	gfx_flush();
	sleep(2);
	flash_key(875.0, 893.75, 500, 700, 0, 0, 0);
	flash_key(893.75, 931.25,300,700, 0, 0, 0);
	flash_key(931.25, 950.0,500,700, 0, 0, 0);
	}

}	

if (x>=931.25 && x<=968.75 && y>=300 && y<=500) {

	if (*f==0){
		s=commands[0];
	} else if (*f==-1){
		s=commands[12];
	} else if(*f==1){
		s=commands[24];
	}

	if (fork()){
		play_note(s);

	}
	else{
	flash_key(932.25, 967.75,300,500, 255, 211, 63);
	gfx_flush();
	sleep(2);
	flash_key(932.25, 967.75,300,500, 0, 0, 0);
	}

}	

if ((x>=950 && x<=968.75 && y>=500 && y<=700) || (x>=968.75 && x<=1006.25 && y>=300 && y<=700) || (x>=1006.25 && x<=1025 && y>=500 && y<=700)) {

	if (*f==0){
		s=commands[1];
	} else if (*f==-1){
		s=commands[13];
	} else if(*f==1){
		s=commands[25];
	}
	
	if (fork()){
		play_note(s);

	}
	else{
	flash_key(950.0, 968.75, 500, 700, 255, 211, 63);
	flash_key(968.75, 1006.25,300,700, 255, 211, 63);
	flash_key(1006.25, 1025.0,500,700, 255, 211, 63);
	gfx_flush();
	sleep(2);
	flash_key(950.0, 968.75, 500, 700, 0, 0, 0);
	flash_key(968.75, 1006.25,300,700, 0, 0, 0);
	flash_key(1006.25, 1025.0,500,700, 0, 0, 0);
	}

}	

if (x>=1006.25 && x<=1043.75 && y>=300 && y<=500) {

	if (*f==0){
		s=commands[2];
	} else if (*f==-1){
		s=commands[14];
	} else if(*f==1){
		s=commands[26];
	}

	if (fork()){
		play_note(s);

	}
	else{
	flash_key(1007.25, 1042.75,300,500, 255, 211, 63);
	gfx_flush();
	sleep(2);
	flash_key(1007.25, 1042.75,300,500, 0, 0, 0);
	}

}	

if ((x>=1025 && x<=1043.75 && y>=500 && y<=700) || (x>=1043.75 && x<=1100 && y>=300 && y<=700)) {

	if (*f==0){
		s=commands[3];
	} else if (*f==-1){
		s=commands[15];
	} else if(*f==1){
		s=commands[27];
	}

	if (fork()){
		play_note(s);

	}
	else{
	flash_key(1025.0, 1043.75,500,700, 255, 211, 63);
	flash_key(1043.75, 1100.0,300,700, 255, 211, 63);
	gfx_flush();
	sleep(2);
	flash_key(1025.0, 1043.75,500,700, 0, 0, 0);
	flash_key(1043.75, 1100.0,300,700, 0, 0, 0);
	}

}	

if (x>=1100 && x<=1175 && y>=300 && y<=700) {

	if (*f==0){
		s=commands[4];
	} else if (*f==-1){
		s=commands[16];
	} else if(*f==1){
		s=commands[28];
	}

	if (fork()){
		play_note(s);

	}
	else{
	flash_key(1100.0, 1175.0,300,700, 255, 211, 63);
	gfx_flush();
	sleep(2);
	flash_key(1100.0, 1175.0,300,700, 0, 0, 0);
	}
}		

}

void initialize_array(const char *commands[100]){
//initializes all of the commands for playing the various wav files

//One octave above middle C
commands[0]="play a_flat.wav";
commands[1]="play A.wav";
commands[2]="play b_flat.wav";
commands[3]="play B.wav";
commands[4]="play C.wav";
commands[5]="play d_flat.wav";
commands[6]="play D.wav";
commands[7]="play e_flat.wav";
commands[8]="play E.wav";
commands[9]="play F.wav";
commands[10]="play g_flat.wav";
commands[11]="play G.wav";

//Middle C
commands[12]="play a_flat_-1.wav";
commands[13]="play A-1.wav";
commands[14]="play b_flat_-1.wav";
commands[15]="play B-1.wav";
commands[16]="play C-1.wav";
commands[17]="play d_flat_-1.wav";
commands[18]="play D-1.wav";
commands[19]="play e_flat_-1.wav";
commands[20]="play E-1.wav";
commands[21]="play F-1.wav";
commands[22]="play g_flat_-1.wav";
commands[23]="play G-1.wav";

//Two octaves above middle C
commands[24]="play a_flat_+1.wav";
commands[25]="play A+1.wav";
commands[26]="play b_flat_+1.wav";
commands[27]="play B+1.wav";
commands[28]="play C+1.wav";
commands[29]="play d_flat_+1.wav";
commands[30]="play D+1.wav";
commands[31]="play e_flat_+1.wav";
commands[32]="play E+1.wav";
commands[33]="play F+1.wav";
commands[34]="play g_flat_+1.wav";
commands[35]="play G+1.wav";

//One octave below middle C
commands[36]="play a_flat_-2.wav";
commands[37]="play A-2.wav";
commands[38]="play b_flat_-2.wav";
commands[39]="play B-2.wav";
commands[40]="play C-2.wav";
commands[41]="play d_flat_-2.wav";
commands[42]="play D-2.wav";
commands[43]="play e_flat_-2.wav";
commands[44]="play E-2.wav";
commands[45]="play F-2.wav";
commands[46]="play g_flat_-2.wav";
commands[47]="play G-2.wav";

//Two octaves below middle C
commands[48]="play a_flat_-3.wav";
commands[49]="play A-3.wav";
commands[50]="play b_flat_-3.wav";
commands[51]="play B-3.wav";
commands[52]="play C-3.wav";
commands[53]="play d_flat_-3.wav";
commands[54]="play D-3.wav";
commands[55]="play e_flat_-3.wav";
commands[56]="play E-3.wav";
commands[57]="play F-3.wav";
commands[58]="play g_flat_-3.wav";
commands[59]="play G-3.wav";
}
