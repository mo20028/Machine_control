/************************************************************************/
/************************************************************************/
/*******************  Author : Mohamed shaban   *************************/
/*******************     layer : hal            *************************/
/*******************     Version : 1.00         *************************/
/*******************      SWC : DC_MOTOR         *************************/
/************************************************************************/
/************************************************************************/


#ifndef DC_INTERFACE_H_
#define DC_INTERFACE_H_

#define CW			1		/*clock wise directoin */
#define CCW			2		/*uticlock wise direction */


void stop_DC();
u8   DC_u8dircotrol(u8 copy_u8direction);


#endif