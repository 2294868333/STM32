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
	//����APB2����ʱ��ʹ�ܼĴ���ʹ��
	 *(unsigned int*)0x40021018 |= (1<<4);
	//�˿����ø߼Ĵ���
	 *(unsigned int*)0x40011004 |= (1<<(4*5));
	//�˿�������ݼĴ���
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


	
