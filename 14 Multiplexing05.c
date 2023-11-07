char array[]={0xC0, 0xF9 ,0xA4 ,0xB0, 0x99 ,0x92,0x82 ,0xF8,0x80 ,0x90};
void main() {
      int i=0,j=0,res_1=0,res_2=0,res_3=0,mod=0,day=0;
      trisb=0x00;
      trisc=0x00;
      portb=0x00;
      portb=0x00;
      while(1){
               for(i=0;i<10000;i++){
                 mod=i%10;
                 res_3= (i/10)%10;
                 res_2=(i/100)%10;
                 res_1=(i/1000)%10;
                 for(j=0;j<25;j++){
                   //Display Sevengement 1st Digit
                   portb=array[res_1];
                   portc.f0=1;
                   delay_ms(10);
                   portc.f0=0;
                   //Display Sevengement 2nd Digit
                   portb=array[res_2];
                   portc.f1=1;
                   delay_ms(10);
                   portc.f1=0;
                   //Display Sevengement 3rd Digit
                   portb=array[res_3];
                   portc.f2=1;
                   delay_ms(10);
                   portc.f2=0;
                   //Display Sevengement 4th Digit
                   portb=array[mod];
                   portc.f3=1;
                   delay_ms(10);
                   portc.f3=0;
                 }
               }
                }

           }
