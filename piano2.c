////Lab 10, Spencer King and Hannah Porter

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <errno.h>
#include <ctype.h>

#include "wavfile.h"

const int NUM_SAMPLES = (WAVFILE_SAMPLES_PER_SECOND*2);

void change_length(char c, int *length, int lengths[5]) {
	if (c=='1') {
		*length = lengths[0];
	} else if (c=='2') {
		*length = lengths[1];
	} else if (c=='4') {
		*length = lengths[2];
	} else if (c=='8') {
		*length = lengths[3];
	} else if (c=='6') {
		*length = lengths[4];
	}
}
		

void change_octave(char c, FILE * f, short waveform[NUM_SAMPLES], char notes[13], double frequency[13], int length) {
	int i;
	if (c=='+') {
		for (i=0; i<13; i++) {
			frequency[i]=2*frequency[i];
		}
	}	
	if (c=='-') {
		for (i=0; i<13; i++) {
			frequency[i]=0.5*frequency[i];
		}
	}
}

void write_note(FILE * f, short waveform[NUM_SAMPLES], double frequency, int length) {
	int i;
	int volume;
	for(i=0;i<length;i++) {
		double t = (double) i / WAVFILE_SAMPLES_PER_SECOND;
		volume = floor((4*10000/pow(length,2))*i*(i-length)); //attack and decay function
		waveform[i] = volume*sin(frequency*t*2*M_PI);
	}
	wavfile_write(f,waveform,length);
} 	

void choose_frequency(char c, FILE * f, short waveform[NUM_SAMPLES], char notes[13], double frequency[13], int length) {
	int i;
	double freq;
	for (i=0; i<13; i++) {
		if (c==notes[i]) {
			freq = frequency[i];
			write_note(f, waveform, freq, length);
		}
	}
}

void get_note_info(double noteinfo[2][1000], char c, int i, char output[1000], char notes[13], double frequency[13], int *length){

	int j;
	double freq;
	for (j=0; j<13; j++) {
		if (c==notes[j]) {
			freq = frequency[j];

		}
	}
	noteinfo[0][i]=freq;
	noteinfo[1][i]=*length/44100.0;
	//marks end of array
	//1.0 and 20.0 are values that couldn't possibly be in
	//the array	
	if (c=='X'){
		noteinfo[0][i]=1.0;
		noteinfo[1][i]=20.0;
	}
}


void low_keyboard(double noteinfo[2][1000], double t, int i)
{
if (noteinfo[0][i]==65.406250){
	animate_key(50.0,106.25,300,700,106.25,125.0,500,700,0.0,0.0,0,0,t);
}

else if (noteinfo[0][i]==69.296250){
	animate_key(107.25,142.75,300,500,0,0,0,0,0.0,0.0,0,0,t);

}

else if (noteinfo[0][i]==73.416250){
	animate_key(125.0,143.75,500,700,143.75,181.25,300,700,181.25,200.0,500,700,t);
}

else if (noteinfo[0][i]==77.781250){
	animate_key(182.25,217.75,300,500,0.0,0.0,0,0,0.0,0.0,0,0,t);
}

else if (noteinfo[0][i]==82.407500){
	animate_key(200.0,218.75,500,700,218.75,275.0,300,700,0.0,0.0,0,0,t);
}

else if (noteinfo[0][i]==87.307500){
	animate_key(275.0,331.75,300,700,331.75,350.0,500,700,0.0,0.0,0,0,t);
}

else if (noteinfo[0][i]==92.498750){
	animate_key(332.25,367.75,300,500,0.0,0.0,0,0,0.0,0.0,0,0,t);
}

else if (noteinfo[0][i]==97.998750){
	animate_key(350.0,368.75,500,700,368.75,406.25,300,700,406.25,425.0,500,700,t);
}

else if (noteinfo[0][i]==103.825000){
	animate_key(407.25,442.75,300,500,0.0,0.0,0,0,0.0,0.0,0,0,t);
}

else if (noteinfo[0][i]==110.00){
	animate_key(425.0,443.75,500,700,443.75,481.25,300,700,481.25,500.0,500,700,t);
}

else if (noteinfo[0][i]==116.54){
	animate_key(482.25,517.75,300,500,0.0,0.0,0,0,0.0,0.0,0,0,t);
}

else if (noteinfo[0][i]==123.47){
	animate_key(500.0,518.75,500,700,518.75,575.0,300,700,0.0,0.0,0,0,t);
}

//13
else if (noteinfo[0][i]==130.812500){
	animate_key(575.0,631.25,300,700,631.25,650.0,500,700,0.0,0.0,0,0,t);
}

else if (noteinfo[0][i]==138.592500){
	animate_key(632.25, 667.75, 300, 500, 0.0,0.0,0,0,0.0,0.0,0,0,t);
}

else if (noteinfo[0][i]==146.832500){
	animate_key(650.0, 668.75, 500, 700, 668.75, 706.25, 300, 700, 706.25, 725.0, 500, 700, t);
}

else if (noteinfo[0][i]==155.562500){
	animate_key(707.25, 742.75, 300,500, 0.0,0.0,0,0,0.0,0.0,0,0,t);
}

else if (noteinfo[0][i]==164.815){
	animate_key(725.0, 743.75, 500, 700, 743.75, 800.0, 300, 700, 0.0,0.0,0,0,t);
}

else if (noteinfo[0][i]==174.615){
	animate_key(800.0, 856.25, 300,700,856.25,875.0,500,700,0.0,0.0,0,0,t);
}

else if (noteinfo[0][i]==184.9975){
	animate_key(857.25,892.75,300,500,0.0,0.0,0,0,0.0,0.0,0,0,t);
}

else if (noteinfo[0][i]==195.9975){
	animate_key(875.0,893.75,500,700,893.75,931.25,300,700,931.25,950.0,500,700,t);
}

else if (noteinfo[0][i]==207.65){
	animate_key(932.25,967.75,300,500,0.0,0.0,0,0,0.0,0.0,0,0,t);
}

else if (noteinfo[0][i]==220.00){
	animate_key(950.0, 968.75,500,700,968.75,1006.25,300,700,1006.25,1025.0,500,700,t);
}

else if (noteinfo[0][i]==233.08){
	animate_key(1007.25,1042.75,300,500,0.0,0.0,0,0,0.0,0.0,0,0,t);
}

else if (noteinfo[0][i]==246.94){
	animate_key(1025.0,1043.75,500,700,1043.75,1100.0,300,700,0.0,0.0,0,0,t);
}

else if (noteinfo[0][i]==261.625){
	animate_key(1100.0,1175.0,300,700,0.0,0.0,0,0,0.0,0.0,0,0,t);
}

}

void high_keyboard(double noteinfo[2][1000], double t, int i)
{

if (noteinfo[0][i]==261.625){
	animate_key(50.0,106.25,300,700,106.25,125.0,500,700,0.0,0.0,0,0,t);
}

else if (noteinfo[0][i]==277.185){
	animate_key(107.25,142.75,300,500,0.0,0.0,0,0,0.0,0.0,0,0,t);
}

else if (noteinfo[0][i]==293.665){
	animate_key(125.0,143.75,500,700,143.75,181.25,300,700,181.25,200.0,500,700,t);
}

else if (noteinfo[0][i]==311.125){
	animate_key(182.25,217.75,300,500,0.0,0.0,0,0,0.0,0.0,0,0,t);
}

else if (noteinfo[0][i]==329.63){
	animate_key(200.0,218.75,500,700,218.75,275.0,300,700,0.0,0.0,0,0,t);
}

else if (noteinfo[0][i]==349.23){
	animate_key(275.0,331.75,300,700,331.75,350.0,500,700,0.0,0.0,0,0,t);
}

else if (noteinfo[0][i]==369.995){
	animate_key(332.25,367.75,300,500,0.0,0.0,0,0,0.0,0.0,0,0,t);
}

else if (noteinfo[0][i]==391.995){
	animate_key(350.0,368.75,500,700,368.75,406.25,300,700,406.25,425.0,500,700,t);
}

else if (noteinfo[0][i]==415.3000){
	animate_key(407.25,442.75,300,500,0.0,0.0,0,0,0.0,0.0,0,0,t);
}

else if (noteinfo[0][i]==440.000000){
	animate_key(425.0,443.75,500,700,443.75,481.25,300,700,481.25,500.0,500,700,t);
}

else if (noteinfo[0][i]==466.160000){
	animate_key(482.25,517.75,300,500,0.0,0.0,0,0,0.0,0.0,0,0,t);
}

else if (noteinfo[0][i]==493.880){
	animate_key(500.0,518.75,500,700,518.75,575.0,300,700,0.0,0.0,0,0,t);
}

//13
else if (noteinfo[0][i]==523.250){
	animate_key(575.0,631.25,300,700,631.25,650.0,500,700,0.0,0.0,0,0,t);
}

else if (noteinfo[0][i]==554.37){
	animate_key(632.25, 667.75, 300, 500, 0.0,0.0,0,0,0.0,0.0,0,0,t);
}

else if (noteinfo[0][i]==587.330){
	animate_key(650.0, 668.75, 500, 700, 668.75, 706.25, 300, 700, 706.25, 725.0, 500, 700, t);
}

else if (noteinfo[0][i]==622.250){
	animate_key(707.25, 742.75, 300,500, 0.0,0.0,0,0,0.0,0.0,0,0,t);
}

else if (noteinfo[0][i]==659.260){
	animate_key(725.0, 743.75, 500, 700, 743.75, 800.0, 300, 700, 0.0,0.0,0,0,t);
}

else if (noteinfo[0][i]==698.4600){
	animate_key(800.0, 856.25, 300,700,856.25,875.0,500,700,0.0,0.0,0,0,t);
}

else if (noteinfo[0][i]==739.99){
	animate_key(857.25,892.75,300,500,0.0,0.0,0,0,0.0,0.0,0,0,t);
}

else if (noteinfo[0][i]==783.990){
	animate_key(875.0,893.75,500,700,893.75,931.25,300,700,931.25,950.0,500,700,t);
}

else if (noteinfo[0][i]==830.600){
	animate_key(932.25,967.75,300,500,0.0,0.0,0,0,0.0,0.0,0,0,t);
}

else if (noteinfo[0][i]==880.000){
	animate_key(950.0, 968.75,500,700,968.75,1006.25,300,700,1006.25,1025.0,500,700,t);
}

else if (noteinfo[0][i]==932.3200){
	animate_key(1007.25,1042.75,300,500,0.0,0.0,0,0,0.0,0.0,0,0,t);
}

else if (noteinfo[0][i]==987.7600){
	animate_key(1025.0,1043.75,500,700,1043.75,1100.0,300,700,0.0,0.0,0,0,t);
}

else if (noteinfo[0][i]==1046.500000){
	animate_key(1101.0,1174.0,300,700,0.0,0.0,0,0,0.0,0.0,0,0,t);
}

}


void key_animation_freq(double noteinfo[2][1000], int i, int *f)
{
	//indicates octave to use for key animation
	if (noteinfo[0][i]>=65.406250 && noteinfo[0][i]<=261.625){
		*f=-1;
		draw_arrow(50, f);
	} else if (noteinfo[0][i]>=261.625 && noteinfo[0][i]<=1046.5){
		*f=1;
		draw_arrow(50, f);
	}
	double t=(noteinfo[1][i]);

	//selects the appropriate note
	if (*f==-1){
		low_keyboard(noteinfo,t, i);
	}

	else if (*f==1){
		high_keyboard(noteinfo,t, i);
	}	

}

//loop to call key_animation_freq
void key_animation(double noteinfo[2][1000], int *f)
{
	int i;
	while (noteinfo[0][i]!=1.0){
		key_animation_freq(noteinfo,i,f);
		i++;	
	}

}



void record_notes(FILE * f, short waveform[NUM_SAMPLES], char notes[13], double frequency[13], int length, int lengths[5], double noteinfo[2][1000], char output[1000]) {
	int i;
	for (i=0;i<1000; i++) {  
		int c = output[i]; 
		change_length(c, &length, lengths); 
		change_octave(c, f, waveform, notes, frequency , length);
		if (isalpha(c)!=0 || c=='.') {       
		get_note_info(noteinfo, c, i, output, notes, frequency, &length);
		
}
		choose_frequency(c, f, waveform, notes, frequency, length);
		if (output[i]=='X') {
			break;
		}
	}	
}



int piano2(double noteinfo[2][1000], char output[1000])
{
	int length = NUM_SAMPLES;
	short waveform[length];
	char notes[13] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'a', 'b', 'd', 'e', 'g', '.'};
	double frequency[13] = {440.0, 493.88, 523.25, 587.33, 659.26, 698.46, 783.99, 415.30, 466.16, 554.37, 622.25, 739.99, 0.0};
	int lengths[5] = {NUM_SAMPLES, NUM_SAMPLES/2, NUM_SAMPLES/4, NUM_SAMPLES/8, NUM_SAMPLES/16};

	/*
	A - 0
	B - 1
	C - 2
	D - 3
	E - 4
	F - 5
	G - 6
	a - 7
	b - 8
	d - 9
	e - 10
	g - 11
	
	*/
	

	FILE * f = wavfile_open("sound.wav");
	if(!f) {
		printf("couldn't open sound.wav for writing: %s",strerror(errno));
		return 1;
	}
	
	record_notes(f, waveform, notes, frequency, length, lengths, noteinfo, output);
	
	wavfile_close(f);

	return 0;
}

	
