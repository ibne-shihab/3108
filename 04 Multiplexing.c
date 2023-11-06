char array[]={0xC0, 0xF9 ,0xA4 ,0xB0, 0x99 ,0x92,0x82 ,0xF8,0x80 ,0x90};
void main() {
      int i=0,ekook=0,dosok=0,j=0;
      trisb=0x00;
      trisd=0xff;
      portb=0x00;
      trisc.f0=0x00;
      portc.f0=0x00;
      trisc.f1=0x00;
      portc.f1=0x00;
      while(1){
               for(i=0;i<100;i++){
                 ekook=i%10;
                 dosok=i/10;
                 for (j=0;j<50;j++){
                   //Display Sevengement 1st Digit
                   portb=array[dosok];
                   portc.f0=1;
                   delay_ms(10);
                   portc.f0=0;
                   //Display Sevengement 2nd Digit
                   portb=array[ekook];
                   portc.f1=1;
                   delay_ms(10);
                   portc.f1=0;
                 }
                }
                }
           }