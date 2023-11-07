char array[]={0xC0, 0xF9 ,0xA4 ,0xB0, 0x99 ,0x92,0x82 ,0xF8,0x80 ,0x90};
void main() {
      int i=0,res_1=0,res_2=0,res_3=0,mod=0,day=0;
      int digit1=0,digit2=10,digit3=0,digit4=0,digit=0;
      int temporarykey=1965,masterkey=8571; // setting temporarykey and a master key
      trisb=0x00;
      trisd=0xff;
      portb=0x00;
      trisc.f0=0x00;
      portc.f0=0x00;
      trisc.f1=0x00;
      portc.f1=0x00;
      trisc.f2=0x00;
      portc.f2=0x00;
      trisc.f3=0x00;
      portc.f3=0x00;
      trisc.f4=0x00;
      portc.f4=0x00;
      while(1){
               //for increment the 3rd digit
               if(portd.f0==0x00){
                          delay_ms(100);
                          if(portd.f0=0x00){
                              if(i<9999){
                              i=i+10;
                              digit3=digit3+10;
                              }
                          }
               }
               //for increment the 2nd digit
               if(portd.f1==0x00){
                          delay_ms(300);
                          if(portd.f0=0x00){
                              if(i<9999){
                              i=i+100;
                              digit2=digit2+100;
                              }
                          }
                }
               //for increment the 1st digit
               if(portd.f2==0x00){
                          delay_ms(300);
                          if(portd.f0=0x00){
                              if(i<9999){
                              i=i+1000;
                              digit1=digit1+1000;
                              }
                          }
                }
               //for decrement the 4th digit
               if(portd.f3==0x00){
                          delay_ms(300);
                          if(portd.f1=0x00){
                              if(i>0){
                              i--;
                              digit4--;
                              }
                          }
                    }
               digit=i;
               mod=i%10;
               res_3= (i/10)%10;
               res_2=(i/100)%10;
               res_1=(i/1000)%10;
               //Display Sevengement 1st Digit
               portb=array[res_1];
               portc.f0=1;
               delay_ms(1);
               portc.f0=0;
               //Display Sevengement 2nd Digit
               portb=array[res_2];
               portc.f1=1;
               delay_ms(11);
               portc.f1=0;
               //Display Sevengement 3rd Digit
               portb=array[res_3];
               portc.f2=1;
               delay_ms(1);
               portc.f2=0;
               //Display Sevengement 4th Digit
               portb=array[mod];
               portc.f3=1;
               delay_ms(1);
               portc.f3=0;

                }

           }
