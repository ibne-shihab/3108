char array[]={0xC0,0xF9,0xA4,0xB0,0x99,0x92,0x82,0xF8,0x80,0x90};
void main() {
     int i=0;
      trisb=0x00;     //initializing as output
      trisd.f0=0xff;  //initializing as input
      trisd.f0=0xff;
      portb=0x00;     //setting primary value
      while(1){
               if(portd.f0==0x00){
                          delay_ms(100);
                          if(portd.f0=0x00){
                              if(i<9){
                              i++;
                              }
                          }
               }
               if(portd.f1==0x00){
                          delay_ms(300);
                          if(portd.f0=0x00){
                              if(i>0){
                              i--;
                              }
                          }
               }
               portb=array[i];

      }
}