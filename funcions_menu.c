#include "variables2.c"

void UPorDOWN (void);
void SetSegments (void);
//void showCUSTOMmode (void);
void CUSTOMmode(void);

void UPorDOWN ()
{
   while(idPantalla==0)    //NO ESBORRAR EL WHILE TRUE, DEIXA DE FUNCIONAR TOT I NO MOSTRAR ERROR
   {  
           
         if(!input(DOWN))
           {                  
                     while(!input(DOWN));
                        if(idComp<5)
                           {
                             idComp++;
                           }
                        else
                           {
                             idComp=1;
                           }
                    
           }
         if(!input(UP))
           {     
               
                     while(!input(UP));
                     
                        if(idComp>1)
                           {
                            idComp--;
                           }
                        else
                           {
                            idComp=5;
                           }
                     
           }
         switch (idComp)
           {
                case 1:  
                         lcd_gotoxy(1,1);
                         lcd_putc("  ACCELERATION  ");
                         
                         lcd_gotoxy(2,2);
                         printf(lcd_putc, " %3U  %3U  %3U  ", H, I, J);
                         if(!input(SELECT))
                           {
                              while(!input(SELECT));
                              {
                              idPantalla++;
                              }
                           }
                         break;
                case 2:  
                         lcd_gotoxy(1,1);
                         lcd_putc("     SKIDPAD    ");
                         
                         lcd_gotoxy(2,2);
                         printf(lcd_putc, " %3U  %3U  %3U  ", K, L, M);
                         if(!input(SELECT))
                           {
                              while(!input(SELECT));
                              {
                              idPantalla++;
                              }
                           }
                         break;
                case 3:  
                         lcd_gotoxy(1,1);
                         lcd_putc("   AUTOCROSS    ");
                         
                         lcd_gotoxy(2,2);
                         printf(lcd_putc, " %3U  %3U  %3U  ", N, O, P);
                         if(!input(SELECT))
                           {
                              while(!input(SELECT));
                              {
                              idPantalla++;
                              }
                           }
                         break;
                case 4:  
                         lcd_gotoxy(1,1);
                         lcd_putc("    ENDURANCE   ");
                                            
                         lcd_gotoxy(2,2);
                         printf(lcd_putc, " %3U  %3U  %3U  ", Q, R, S);
                         if(!input(SELECT))
                           {
                              while(!input(SELECT));
                              {
                              idPantalla++;
                              }
                           }
                         break;
                case 5:
                        lcd_gotoxy(1,1);
                         lcd_putc("     CUSTOM     ");
                                            
                         lcd_gotoxy(2,2);
                         printf(lcd_putc, " %3U  %3U  %3U  ", T, U, V);
                         if(!input(SELECT))
                           {
                              while(!input(SELECT));
                              {
                              customON=1;
                              CUSTOMmode();
                              }
                           }
                         break;
                default: lcd_gotoxy(1,1);
                         printf(lcd_putc,"   %1u    ", idComp);
        
          
   
            }
   }
}

void SetSegments()
{  
     
   uSOC=SOC%10;//    a=64%10=4      1r dígit
   Z=SOC/10;   //    b=64/10=6,4
   dSOC=Z%10;  //    c=6,4%10=6     2n dígit
   
   while(idPantalla==1)
   {
         
         output_LOW(PIN_C0);
         output_HIGH(PIN_B0);
         numero=uSOC;
                        
         
         switch (numero)
         {
            case 0:
               output_LOW(B);
               output_LOW(C);
               output_LOW(D);
               output_LOW(A);
               break;
            case 1:
               output_LOW(B);
               output_LOW(C);
               output_LOW(D);
               output_HIGH(A);
               break;
            case 2:
               output_HIGH(B);
               output_LOW(C);
               output_LOW(D);
               output_LOW(A);
               break;
            case 3:
               output_HIGH(B);
               output_LOW(C);
               output_LOW(D);
               output_HIGH(A);
               break;
            case 4:
               output_LOW(B);
               output_HIGH(C);
               output_LOW(D);
               output_LOW(A);
               break;
            case 5:
               output_LOW(B);
               output_HIGH(C);
               output_LOW(D);
               output_HIGH(A);
               break;
            case 6:
               output_HIGH(B);
               output_HIGH(C);
               output_LOW(D);
               output_LOW(A);
               break;
            case 7:
               output_HIGH(B);
               output_HIGH(C);
               output_LOW(D);
               output_HIGH(A);
               break;
            case 8:
               output_LOW(B);
               output_LOW(C);
               output_HIGH(D);
               output_LOW(A);
               break;
            case 9:
               output_LOW(B);
               output_LOW(C);
               output_HIGH(D);
               output_HIGH(A);
               break;
         }
               
         delay_ms(10);
          
         output_HIGH(PIN_C0);
         output_LOW(PIN_B0);
         numero=dSOC;
         
         switch (numero)
         {
            case 0:
               output_LOW(B);
               output_LOW(C);
               output_LOW(D);
               output_LOW(A);
               break;
            case 1:
               output_LOW(B);
               output_LOW(C);
               output_LOW(D);
               output_HIGH(A);
               break;
            case 2:
               output_HIGH(B);
               output_LOW(C);
               output_LOW(D);
               output_LOW(A);
               break;
            case 3:
               output_HIGH(B);
               output_LOW(C);
               output_LOW(D);
               output_HIGH(A);
               break;
            case 4:
               output_LOW(B);
               output_HIGH(C);
               output_LOW(D);
               output_LOW(A);
               break;
            case 5:
               output_LOW(B);
               output_HIGH(C);
               output_LOW(D);
               output_HIGH(A);
               break;
            case 6:
               output_HIGH(B);
               output_HIGH(C);
               output_LOW(D);
               output_LOW(A);
               break;
            case 7:
               output_HIGH(B);
               output_HIGH(C);
               output_LOW(D);
               output_HIGH(A);
               break;
            case 8:
               output_LOW(B);
               output_LOW(C);
               output_HIGH(D);
               output_LOW(A);
               break;
            case 9:
               output_LOW(B);
               output_LOW(C);
               output_HIGH(D);
               output_HIGH(A);
               break;
         }
         
         
         delay_ms(10);
         
       
         if(!input(SELECT))
           {
               while(!input(SELECT)&&customON==0);
               {
                  idPantalla=0;
               }  
           }
   }
   
}

void CUSTOMmode()
{
      while(customON==1)
      {
         switch(cursor)
         {
            case 1:
               if(!input(DOWN))
               {
                   while(!input(DOWN));
                   {
                       if(T<10)
                       {
                        T++;
                        lcd_gotoxy(2,2);
                        printf(lcd_putc, " %3U            ", T);
                       }
                       else
                       {
                        T=0;
                        lcd_gotoxy(2,2);
                        printf(lcd_putc, " %3U            ", T);
                       }
                   }
               }
               if(!input(UP))
               {
                   while(!input(UP));
                   {
                      if(T>0)
                      {
                       T--;
                       lcd_gotoxy(2,2);
                       printf(lcd_putc, " %3U            ", T);
                      }
                      else
                      {
                       T=10;
                       lcd_gotoxy(2,2);
                       printf(lcd_putc, " %3U            ", T);
                      }
                   }
               }   
               if(!input(SELECT))
               {
                  while(!input(SELECT));
                  {
                     cursor=2;
                  }
               }
               break;
            case 2:
               if(!input(DOWN))
               {
                   while(!input(DOWN));
                   {
                       if(U<10)
                       {
                        U++;
                        lcd_gotoxy(2,2);
                        printf(lcd_putc, "      %3U       ", U);
                       }
                       else
                       {
                        U=0;
                        lcd_gotoxy(2,2);
                        printf(lcd_putc, "      %3U       ", U);
                       }
                   }
               }
               if(!input(UP))
               {
                   while(!input(UP));
                   {
                      if(U>0)
                      {
                       U--;
                       lcd_gotoxy(2,2);
                       printf(lcd_putc, "      %3U       ", U);
                      }
                      else
                      {
                       U=10;
                       lcd_gotoxy(2,2);
                       printf(lcd_putc, "      %3U       ", U);
                      }
                   }
               }   
               if(!input(SELECT))
               {
                  while(!input(SELECT));
                  {
                     cursor=3;
                  }
               }
               break;  
            case 3:
               if(!input(DOWN))
               {
                   while(!input(DOWN));
                   {
                       if(V<10)
                       {
                        V++;
                        lcd_gotoxy(2,2);
                        printf(lcd_putc, "           %3U  ", V);
                       }
                       else
                       {
                        V=0;
                        lcd_gotoxy(2,2);
                        printf(lcd_putc, "           %3U  ", V);
                       }
                   }
               }
               if(!input(UP))
               {
                   while(!input(UP));
                   {
                      if(V>0)
                      {
                       V--;
                       lcd_gotoxy(2,2);
                       printf(lcd_putc, "           %3U  ", V);
                      }
                      else
                      {
                       V=10;
                       lcd_gotoxy(2,2);
                       printf(lcd_putc, "           %3U  ", V);
                      }
                   }
               }   
               if(!input(SELECT))
               {
                  while(!input(SELECT));
                  {
                     idPantalla=1;
                     lcd_gotoxy(2,2);
                     printf(lcd_putc, " %3U  %3U  %3U  ", T, U, V);
                     customON=0;
                     cursor=1;
                  }
               }
               break; 
         }
      }
}
