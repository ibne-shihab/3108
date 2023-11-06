int valADC;  // varible that will hold the ADC value
char x[4]; //create a char array
void main() {
   uart1_init(9600);  //initialize uart
   adc_init(); //initialize adc
   while(1){
      valADC = adc_read(0);//read adc value in RA0
      inttostr(valADC,x);  //convert into string/char array
      uart1_write_text("Analog valu=");
      uart1_write_text(x);
      strcpy(x,"");
      uart1_write(13);
      delay_ms(1000);
   }
}
