char array[]={0xC0,0xF9,0xA4,0xB0,0x99,0x92,0x82,0xF8,0x80,0x90};
void main() {
    int i=0;
    trisb=0x00;
    portb=0xff;
    while(1){
        for(i=0;i<10;i++){
          portb=array[i];
          delay_ms(1000);
        } portb=0xBF;
        delay_ms(500);
        for(i=9;i>=0;i--){
          portb=array[i];
          delay_ms(1000);
        }portb=0xBF;
        delay_ms(500);
    }
}
