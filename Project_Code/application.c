/* 
 * File:   application.c
 * Author: AyaAli
 * Created on September 22, 2023, 10:24 AM
 */
#include "application.h"
void Timer0_Defualt_Hundeler(void);
volatile uint_16 Freq = ZERO_INIT;
timer0_config_t Counter1_obj={
.TMR0_Interrupt_Hundeler = Timer0_Defualt_Hundeler,
.timer0_mode = TIMER0_COUNTER_MODE_CFG,
.timer0_conter_edge = TIMER0_RAISING_EDG_COFG,
.timer0_register_size = TIMER0_16BIT_MODE_CFG,
.timer0_prescaler_enable = TIMER0_PRESCALLER_DISABLE_COUNTER_CFG,
.timer0_preload_value = 0
};



int main() {
   
Std_ReturnType ret = E_NOT_OK;
application_initialize();
ret = Timer0_Init(&Counter1_obj);
//ret = Timer0_Init(&Counter0_obj);

while(1){
     
    ret = Timer0_Read_Value(&Counter1_obj, &Freq);
    ret = Timer0_Write_Value(&Counter1_obj, 0);
    
}
 return (EXIT_SUCCESS);
}
void application_initialize(void){
   Std_ReturnType ret = E_NOT_OK;
//   ECU_Layer_initialize();

}

void Timer0_Defualt_Hundeler(void){

}