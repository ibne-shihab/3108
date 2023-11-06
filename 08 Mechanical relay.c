void main() {
        TRISb.f7 = 0x00; //Set as PORTC output
        PORTb.f7 = 0x00;
        while(1){
          portb.f7 = 0xff;
          delay_ms(1000);
          portb.f7 = 0x00;
          delay_ms(1000);
        }
}