/*
  falab - free algorithm lab 


  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  filename: fa_wavfmt.h 
  version : v1.0.1

  comment : only support pcm data now

*/


#ifndef	_FA_WAVFMT_H
#define	_FA_WAVFMT_H

#include <stdio.h>

#ifdef __cplusplus 
extern "C"
{ 
#endif  


typedef struct _fa_wavfmt_t
{
	unsigned short  format;

	unsigned short  channels;

	unsigned long   samplerate;

	unsigned short  bytes_per_sample;

	unsigned short  block_align;

	unsigned long   data_size;

}f_fmt_t;


f_fmt_t  fa_wavfmt_readheader (FILE *fp);
void         fa_wavfmt_writeheader( f_fmt_t, FILE *fp);

#ifdef __cplusplus 
}
#endif  



#endif
