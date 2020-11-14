#define uchar  unsigned char
#define uint   unsigned int
uint i,j;
void delay()
{
	for(i = 100;i>0;i--)
			for(j = 1100; j>0;j--);
}
	
int main()
{
	//设置APB2外设时钟使能寄存器使能
	 *(unsigned int*)0x40021018 |= (1<<4);
	//端口配置高寄存器
	 *(unsigned int*)0x40011004 |= (1<<(4*5));
	//端口输出数据寄存器
	while(1)
	{
	  *(unsigned int*)0x4001100C &= ~(1<<13);
	  delay();
	  *(unsigned int*)0x4001100C |= (1<<13);
	  delay();
	}
}

void SystemInit(void)
{
	
}


	
