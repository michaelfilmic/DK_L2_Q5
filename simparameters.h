
/*
 * 
 * Simulation of A Single Server Queueing System
 * 
 * Copyright (C) 2014 Terence D. Todd Hamilton, Ontario, CANADA,
 * todd@mcmaster.ca
 * 
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the Free
 * Software Foundation; either version 3 of the License, or (at your option)
 * any later version.
 * 
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 * 
 * You should have received a copy of the GNU General Public License along with
 * this program.  If not, see <http://www.gnu.org/licenses/>.
 * 
 */

/******************************************************************************/

#ifndef _SIMPARAMETERS_H_
#define _SIMPARAMETERS_H_

/******************************************************************************/
//#define no_data_event
//#define no_voice_event

//#define FAST_RUN
//#define NO_CSV_OUTPUT

#define PACKET_ARRIVAL_RATE_VOICE 50 
#ifdef FAST_RUN

#define PACKET_ARRIVAL_RATE 1, 5  /* packets per second */
#define LINK_BIT_RATE 1e6 /* bits per second */
#define RUNLENGTH 1e3 /* packets */

/* Comma separated list of random seeds to run. */
#define RANDOM_SEED_LIST 400050636 

#else

#define PACKET_ARRIVAL_RATE 1, 5, 10, 15, 18, 20, 21 ,23  /* packets per second */
#define LINK_BIT_RATE 1e6 /* bits per second */
#define RUNLENGTH 1e3 /* packets */

/* Comma separated list of random seeds to run. */
#define RANDOM_SEED_LIST 400050636, 400099173, 225 

#endif //FAST_RUN



#define PACKET_XMT_TIME ((double) 40E-3 )
#define PACKET_XMT_TIME_VOICE ((double) (20*64 + 62*8) /LINK_BIT_RATE)
#define BLIPRATE (RUNLENGTH/1000)


/******************************************************************************/

#endif /* simparameters.h */



