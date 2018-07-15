#include "C:\Users\marda\Documents\UNIVERSITAT\e-Tech\REAL CASE\Proves amb placa definitiva\8-7-18\prova5\prova5_placa.h"


#define LCD_DB4   PIN_A3
#define LCD_DB5   PIN_C1
#define LCD_DB6   PIN_A0
#define LCD_DB7   PIN_B1

#define LCD_RS    PIN_A1
//#define LCD_RW    PIN_A2 //Notar que este no se define, esta comentado!!!
#define LCD_E     PIN_A4


#include "Flex_LCD216.c"
#include "funcions_menu.c"


void main()
{
////INICIALITZACIÓ LCD////
  
   output_low(PIN_A2);
   lcd_init();
   delay_ms(100);
//////////////////////////
   output_HIGH(PIN_B0);
   output_HIGH(PIN_C0);
   
   output_LOW(B);
   output_LOW(C);
   output_HIGH(D);
   output_LOW(A);
   
   delay_ms(150);
   
   output_LOW(PIN_B0);
   output_LOW(PIN_C0);
   
   delay_ms(150);
   
   output_HIGH(PIN_B0);
   output_HIGH(PIN_C0);
   
   output_LOW(B);
   output_LOW(C);
   output_HIGH(D);
   output_LOW(A);
   
   delay_ms(150);
   
   output_LOW(PIN_B0);
   output_LOW(PIN_C0);
   
   delay_ms(150);
   
   output_HIGH(PIN_B0);
   output_LOW(PIN_C0);
   
   output_LOW(B);
   output_LOW(C);
   output_HIGH(D);
   output_LOW(A);

   delay_ms(150);
   
   output_LOW(PIN_B0);
   output_HIGH(PIN_C0);
   
   output_LOW(B);
   output_LOW(C);
   output_HIGH(D);
   output_LOW(A);
   
   delay_ms(150);
   
   output_HIGH(PIN_B0);
   output_LOW(PIN_C0);
   
   output_LOW(B);
   output_LOW(C);
   output_HIGH(D);
   output_LOW(A);
   
   delay_ms(150);
   
   output_LOW(PIN_B0);
   output_HIGH(PIN_C0);
   
   output_LOW(B);
   output_LOW(C);
   output_HIGH(D);
   output_LOW(A);
   
   delay_ms(150);
   
   output_HIGH(PIN_B0);
   output_LOW(PIN_C0);
   
   output_LOW(B);
   output_LOW(C);
   output_HIGH(D);
   output_LOW(A);
   
   delay_ms(150);
   
   output_HIGH(PIN_B0);
   output_HIGH(PIN_C0);
   
   output_LOW(B);
   output_LOW(C);
   output_HIGH(D);
   output_LOW(A);
   
   delay_ms(150);
   
   output_LOW(PIN_B0);
   output_LOW(PIN_C0);
   
   delay_ms(150);
   
   output_HIGH(PIN_B0);
   output_HIGH(PIN_C0);
   
   output_LOW(B);
   output_LOW(C);
   output_HIGH(D);
   output_LOW(A);
   
   delay_ms(150);
   
   output_LOW(PIN_B0);
   output_LOW(PIN_C0);
   
   lcd_gotoxy(1,1);
   lcd_putc(" REAL CASE 2018 ");
   lcd_gotoxy(1,2);
   lcd_putc(" Marta  Alfonso ");
   delay_ms(4000);
   lcd_gotoxy(1,1);
   lcd_putc("                ");
   lcd_gotoxy(2,2);
   lcd_putc("                ");
   delay_ms(1000);
   lcd_gotoxy(1,1);
   lcd_putc("Seleccio modes/");
   lcd_gotoxy(2,2);
   lcd_putc("  mostrar  SOC  ");
   delay_ms(3000);
   lcd_gotoxy(1,1);
   lcd_putc("                ");
   lcd_gotoxy(1,2);
   lcd_putc("                ");
   
   lcd_gotoxy(1,1);
   lcd_putc("   UP  /  DOWN  ");
   lcd_gotoxy(2,2);
   lcd_putc("  per  moure's  ");
   delay_ms(4000);
   lcd_gotoxy(1,1);
   lcd_putc("1 OK: select    ");
   lcd_gotoxy(2,2);
   lcd_putc("2 OKs: unselect ");
   delay_ms(4000);
   while(TRUE)
   {
      while (idPantalla==0)
      {  
         output_LOW(PIN_B0);
         output_LOW(PIN_C0);
         UPorDOWN();         
      }
      while (idPantalla==1)
      {
         output_LOW(PIN_B0);
         output_LOW(PIN_C0);
         SetSegments();         
      }
      
   }
}
