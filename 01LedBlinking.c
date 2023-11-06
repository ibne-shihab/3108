void main() {
      TRISB.f0=0x00;
      PORTB.f0=0x00;
      TRISB.f1=0x00;
      PORTB.f1=0x00;
      TRISB.f2=0x00;
      PORTB.f2=0x00;
      TRISB.f3=0x00;
      PORTB.f3=0x00;
      //Initializing the selected ports as output
      // setting their initial value as 0
     while(1){
      PORTB.f0=0xff;
      delay_ms(400);
      PORTB.f0=0x00;
      PORTB.f1=0xff;
      delay_ms(400);
      PORTB.f1=0x00;
      PORTB.f2=0xff;
      delay_ms(400);
      PORTB.f2=0x00;
      PORTB.f3=0xff;
      delay_ms(400);
      PORTB.f3=0x00;
      }
}
