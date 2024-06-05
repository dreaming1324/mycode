#ifndef __W25Q64_H
#define __W25Q64_H

void W25Q64_Init(void);


void W25Q64_GetID(uint8_t* MID,uint16_t* ID);


void W25Q64_Erase_Sector(uint32_t Addr);


void W25Q64_PageProgram(uint32_t Addr,uint8_t* Array,uint16_t Size);


void W25Q64_ReadData(uint32_t Addr,uint8_t* Array,uint16_t Num);

#endif
