#include "utils.h"

void init_tones(int *tones)
{
	tones[0] = D;
	tones[1] = DE;
	tones[2] = E;
	tones[3] = F;
	tones[4] = FG;
	tones[5] = G;
	tones[6] = GA;
	tones[7] = A;
	tones[8] = AB;
	tones[9] = B;
	tones[10] = cS;
	tones[11] = cdS;
	tones[12] = dS;
	tones[13] = deS;
	tones[14] = eS;
	tones[15] = fS;
	tones[16] = fgS;
	tones[17] = gS;
	tones[18] = gaS;
	tones[19] = aS;
	tones[20] = abS;
	tones[21] = bS;
	tones[22] = c1;
	tones[23] = cd1;
	tones[24] = d1;
	tones[25] = de1;
	tones[26] = e1;
	tones[27] = f1;
	tones[28] = fg1;
	tones[29] = g1;
	tones[30] = ga1;
	tones[31] = a1;
	tones[32] = ab1;
	tones[33] = b1;
	tones[34] = c2;
	tones[35] = cd2;
	tones[36] = d2;
	tones[37] = de2;
	tones[38] = e2;
	tones[39] = f2;
	tones[40] = fg2;
	tones[41] = g2;
	tones[42] = ga2;
	tones[43] = a2;
	tones[44] = ab2;
	tones[45] = b2;
	tones[46] = c3;
	tones[47] = cd3;
	tones[48] = d3;
	tones[49] = de3;
	tones[50] = e3;
	tones[51] = f3;
	tones[52] = fg3;
	tones[53] = g3;
}

void init_song(int *notes, int *duration)
{
	notes[0] = 31;
	notes[1] = 33;
	notes[2] = 34;
	notes[3] = 33;
	notes[4] = 31;
	notes[5] = 30;
	notes[6] = 31;
	notes[7] = 33;
	notes[8] = 26;
	notes[9] = 28;
	notes[10] = 30;
	notes[11] = 31;
	notes[12] = 29;
	notes[13] = 27;
	notes[14] = 26;
	notes[15] = 24;
	notes[16] = 22;
	notes[17] = 21;
	notes[18] = 22;
	notes[19] = 24;
	notes[20] = 26;
	notes[21] = 24;
	notes[22] = 22;
	notes[23] = 21;
	notes[24] = 19;
	notes[25] = 31;
	notes[26] = 33;
	notes[27] = 34;
	notes[28] = 33;
	notes[29] = 31;
	notes[30] = 38;
	notes[31] = 34;
	notes[32] = 38;
	notes[33] = 26;
	notes[34] = 28;
	notes[35] = 30;
	notes[36] = 31;
	notes[37] = 29;
	notes[38] = 27;
	notes[39] = 26;
	notes[40] = 24;
	notes[41] = 22;
	notes[42] = 21;
	notes[43] = 22;
	notes[44] = 22;
	
	duration[0] = 18;
	duration[1] = 20;
	duration[2] = 30;
	duration[3] = 18;
	duration[4] = 20;
	duration[5] = 30;
	duration[6] = 18;
	duration[7] = 20;
	duration[8] = 30;
	duration[9] = 18;
	duration[10] = 20;
	duration[11] = 30;
	duration[12] = 18;
	duration[13] = 20;
	duration[14] = 30;
	duration[15] = 18;
	duration[16] = 20;
	duration[17] = 30;
	duration[18] = 18;
	duration[19] = 20;
	duration[20] = 25;
	duration[21] = 18;
	duration[22] = 15;
	duration[23] = 10;
	duration[24] = 30;
	duration[25] = 18;
	duration[26] = 20;
	duration[27] = 30;
	duration[28] = 18;
	duration[29] = 20;
	duration[30] = 30;
	duration[31] = 18;
	duration[32] = 20;
	duration[33] = 30;
	duration[34] = 18;
	duration[35] = 20;
	duration[36] = 30;
	duration[37] = 18;
	duration[38] = 20;
	duration[39] = 30;
	duration[40] = 18;
	duration[41] = 20;
	duration[42] = 40;
	duration[43] = 30;
	duration[44] = 30;
}
