/*
	MD5 Bruteforcer is a CUDA based MD5 brute force program.
	Copyright (C) 2016-2017 Eric Kutcher

	This program is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef _ABV_H
#define _ABV_H

// Arbitrary base value.
struct ABV
{
	unsigned int *val;
	unsigned int *cval;

	unsigned char *charset;

	unsigned short charset_length;

	unsigned char size;	// In ints

	unsigned char length;
};

void abv_init( ABV *abv, unsigned char length, unsigned char *charset, unsigned short charset_length );
void abv_uninit( ABV *abv );
void abv_increment( ABV *abv );
void AdjustBitmask( ABV *abv );
void AppendPadding( ABV *abv );

#endif
