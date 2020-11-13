//外设的基地址
#define PERIRH_BASE       ((unsigned int)0x40000000)   
#define APB1_BASE        	 PERIRH_BASE
#define APB2_BASE         (PERIRH_BASE+0x10000)
#define AHB_BASE          (PERIRH_BASE+0x20000)

//RCC基地址
#define RCC_BASE          (AHB_BASE+0x1000)
//GPIOC基地址
#define GPIOC_BASE        (APB2_BASE+0x1000)

//APB2 外设时钟使能寄存器
#define RCC_APB2ENR       *(unsigned int*)(RCC_BASE+0x18)  //APB2外设时钟使能寄存器



//#define GPIOC_CRL         *(unsigned int*)(GPIOC_BASE)
//#define GPIOC_CRH         *(unsigned int*)(GPIOC_BASE+0x04)
//#define GPIOC_ODR         *(unsigned int*)(GPIOC_BASE+0x0c)
//#define GPIOC_BSRR        *(unsigned int*)(GPIOC_BASE+0x10)
//#define GPIOC_BRR         *(unsigned int*)(GPIOC_BASE+0x14)

typedef unsigned int   uint32_t;
typedef unsigned short uint16_t;

typedef struct
{
	uint32_t CRL ; //端口配置低寄存器
	uint32_t CRH ; //端口配置高寄存器
	uint32_t IDR ; //端口输入数据寄存器
	uint32_t ODR ; //端口输出数据寄存器
	uint32_t BSRR; //端口位设置/清除寄存器
	uint32_t BRR ; //端口位清除寄存器
	uint32_t LCKR; //端口配置锁定寄存器
}GPIO_TypeDef;


#define  GPIOC  ((GPIO_TypeDef*)GPIOC_BASE)


