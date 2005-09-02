/***************************************************************************
 *  Pinfo is a ncurses based lynx style info documentation browser
 *
 *  Copyright (C) 1999  Przemek Borys <pborys@dione.ids.pl>
 *  Copyright (C) 2005  Bas Zoetekouw <bas@debian.org>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of version 2 of the GNU General Public License as
 *  published by the Free Software Foundation.
 *
 *  This program is distributed in the hope that it will be useful, but
 *  WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307
 *  USA
 ***************************************************************************/

#ifndef __INITIALIZELINKS_H
#define __INITIALIZELINKS_H
/* initializes node links.  */
void initializelinks (char *line1, char *line2, int line);
/*
 * scans for url end in given url-string.
 * returns a pointer to the found place.
 */
char *findurlend (char *str);
std::string::size_type findurlend (std::string str);

/* scans for the beginning of username. Returns a pointer to it.  */
char *findemailstart (char *str);
/*
 * calculate length of visible part of string ('\t' included) between start and
 * end. Returns length.
 */
int calculate_len (char *start, char *end);
#endif
