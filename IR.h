#ifndef __IR_H__
#define __IR_H__

#define IR_POWER    0x45
#define IR_MODE     0x46
#define IR_MUTE     0x47
#define IR_PAUSE    0x44
#define IR_LAST     0x40
#define IR_NEXT     0x43
#define IR_EQ     	0x07
#define IR_VOLSUB   0x15
#define IR_VOLADD   0x09
#define IR_0   		  0x16
#define IR_1    	 	0x0C
#define IR_2    	 	0x18
#define IR_3     		0x5E
#define IR_4     		0x08
#define IR_5     		0x1C
#define IR_6     		0x5A
#define IR_7     		0x42
#define IR_8     		0x52
#define IR_9     		0x4A
#define IR_RPT     	0x19
#define IR_U_SD     0x0D




void IR_Init(void);

unsigned char IR_GetDataFlag(void);

unsigned char IR_GetRepeatFlag(void);

unsigned char IR_GetCommand(void);

unsigned char IR_GetAddress(void);



#endif