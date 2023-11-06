 int i;
void main(){
      TRISC=0x00;
      TRISD=0x00;
      while(1){
      // for S
         portd=0x00;
         portc=0x00;
         delay_ms(500);
          for(i=1;i<=125;i++){
           PORTD=0x80;
           PORTC=0xfb;
           delay_ms(1);

           PORTD=0x40;
           PORTC=0xfb;
           delay_ms(1);

           PORTD=0x20;
           PORTC=0xdb;
           delay_ms(1);

           PORTD=0x10;
           PORTC=0xdb;
           delay_ms(1);

           PORTD = 0x08;
           PORTC = 0xdb;
           delay_ms(1);

           PORTD =0x04;
           PORTC =0xdf;
           delay_ms(1);

           PORTD = 0x02;
           PORTC = 0xdf;
           delay_ms(1);

           PORTD = 0x01;
           PORTC = 0xdf;
           delay_ms(1);
         }
         for(i=1;i<=125;i++){
           PORTD=0x80;
           PORTC=0x07;
           delay_ms(1);

           PORTD=0x40;
           PORTC=0x1f;
           delay_ms(1);

           PORTD=0x20;
           PORTC=0x78;
           delay_ms(1);

           PORTD=0x10;
           PORTC=0x98;
           delay_ms(1);

           PORTD = 0x08;
           PORTC = 0x98;
           delay_ms(1);

           PORTD =0x04;
           PORTC =0x78;
           delay_ms(1);

           PORTD = 0x02;
           PORTC = 0x1f;
           delay_ms(1);

           PORTD = 0x01;
           PORTC = 0x07;
           delay_ms(1);
         }
    }
}
