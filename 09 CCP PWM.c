void main() {
  short duty = 0; //initial value for duty
  TRISD= 0xff; //PORTD as input
  TRISB= 0x00; //PORTB as output
  PORTB.F0=0xff;
  PORTB.F1=0x00;
  PWM1_init(1000); //Initialize PWM1
  PWM1_Start(); //start PWMI
  PWM1_Set_Duty(duty); //Set current duty for PWMI
  while (1){ //Il endless loop
      if(portd.f0==0x00){ //decrease button
         delay_ms(100);
          if(portd.f0=0x00){
             duty = duty + 10; //increment current_duty
               PWM1_Set_Duty(duty); //Change the duty cycle
           }
       }
       if(portd.f1==0x00){ //increase button
          delay_ms(300);
          if(portd.f0=0x00){
             duty = duty - 10; //decrement duty
             PWM1_Set_Duty(duty);
           }
        }Delay_ms(10); //slow down change pace a little
  }
}
