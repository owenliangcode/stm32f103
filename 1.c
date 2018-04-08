#include"stm32f10x.h"
void delayms(unsigned int xms);
int main(void)
{
	while(1)
	{//ÅäÖÃODR¼Ä´æÆ÷
	RCC->APB2ENR|= ((1)<<(3));	
//´ò¿ªGPIOBÊ±ÖÓ
	GPIOB->CRL &=~ ((0X0F)<<(4*0));
	GPIOB->CRL |= ((1)<<(4*0));
	
//ÅäÖÃio¿ÚÎªÊä³ö
	GPIOB->ODR &=~(1<<(0));
		delayms(10000);
	GPIOB->ODR |=(1<<(0));
		delayms(10000);

//ÅäÖÃODR¼Ä´æÆ÷
}
}
void SystemInit(void)
	{
	//ºýÅª±àÒëÆ÷
}
	void delayms(unsigned int xms)
	{
	unsigned int i, j;
		for(i=xms;i>0;i--)
		for(j=110;j>0;j--);
	
	}

