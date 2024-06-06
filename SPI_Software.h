#ifndef __SPI_SOFTWARE_H
#define __SPI_SOFTWARE_H

void SPI_Software_Init(void);


void SPI_SendStart(void);


void SPI_SendEnd(void);


uint8_t SPI_Software_SwapByte(uint8_t ByteSend);


#endif
