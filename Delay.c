
void Delay(unsigned int time)		//@11.0592MHz
{
	unsigned char i, j;
	while(time--)
	{
		i = 2;
		j = 199;
		do
		{
			while (--j);
		} while (--i);
	}
}
