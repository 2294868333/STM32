//����Ļ���ַ
#define PERIRH_BASE       ((unsigned int)0x40000000)   
#define APB1_BASE        	 PERIRH_BASE
#define APB2_BASE         (PERIRH_BASE+0x10000)
#define AHB_BASE          (PERIRH_BASE+0x20000)

//RCC����ַ
#define RCC_BASE          (AHB_BASE+0x1000)
//GPIOC����ַ
#define GPIOC_BASE        (APB2_BASE+0x1000)

//APB2 ����ʱ��ʹ�ܼĴ���
#define RCC_APB2ENR       *(unsigned int*)(RCC_BASE+0x18)  //APB2����ʱ��ʹ�ܼĴ���



//#define GPIOC_CRL         *(unsigned int*)(GPIOC_BASE)
//#define GPIOC_CRH         *(unsigned int*)(GPIOC_BASE+0x04)
//#define GPIOC_ODR         *(unsigned int*)(GPIOC_BASE+0x0c)
//#define GPIOC_BSRR        *(unsigned int*)(GPIOC_BASE+0x10)
//#define GPIOC_BRR         *(unsigned int*)(GPIOC_BASE+0x14)

typedef unsigned int   uint32_t;
typedef unsigned short uint16_t;

typedef struct
{
	uint32_t CRL ; //�˿����õͼĴ���
	uint32_t CRH ; //�˿����ø߼Ĵ���
	uint32_t IDR ; //�˿��������ݼĴ���
	uint32_t ODR ; //�˿�������ݼĴ���
	uint32_t BSRR; //�˿�λ����/����Ĵ���
	uint32_t BRR ; //�˿�λ����Ĵ���
	uint32_t LCKR; //�˿����������Ĵ���
}GPIO_TypeDef;


#define  GPIOC  ((GPIO_TypeDef*)GPIOC_BASE)


