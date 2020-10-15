/*
 * Example by A.Ganesh 
 * Thursday 15 October 2020 12:04:11 AM IST
 *
 * */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <error.h>
int errno;

typedef unsigned int U32;
typedef unsigned short U16;
typedef unsigned char U8;
typedef unsigned long U64;

typedef char S8;
typedef short S16;
typedef int S32;
typedef long S64;


U32 setvalue(float val, S32 offset, float scale){
	U32 temp = (U32) (val+offset)/scale ;
	printf(" setting value -- %f  offset--%d scale --%f result --%d \n", val, offset, scale, temp);
	return temp ;
}

float getvale(U32 val, S32 offset, float scale){
	float temp = (val*scale)-offset;
	printf(" getting value -- %d  offset--%d scale --%f result -- %f\n", val, offset, scale, temp);
	return temp;
}

typedef union{
	U8 buffer[7];
	#pragma pack(1)
	struct{
		U32 x_t:19;
		U32 y_t:19;
		U32 z_t:18;
		/*

		U32 vx_t:14;
		U32 vy_t:13;
		U32 vz_t:13;

		U32 tgt_ax_t:8;
		U32 tgt_ay_t:8;
		U32 tgt_az_t:8;

		U32 tgt_pos_x:11;
		U32 tgt_pos_y:11;
		U32 tgt_pos_z:10;

		U32 tgt_vel_x:8;
		U32 tgt_vel_y:8;
		U32 tgt_vel_z:8;
		*/
	}L;
}data_t;
