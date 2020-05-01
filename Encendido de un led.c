#include <18f4620.h>       //Se declara el pic que utilizaremos
#fuses HS,NOWDT,NOPROTECT,NOLVP,NOPUT,NOMCLR //Se declaran los fusibles hs = oscilador externo
#use delay(clock=20000000)//Se inicia el cristal oscilador a 20MHz.
#define led pin_b0        //Se declara el puerto de salida del led en el puerto B0
standard_io(b);           //Se declara el puerto b como entradas y salidas
int A=500;                //Se declara la variable "A" que funcionara como el tiempo en ms del delay.
void main(){       //Incia la funcion principal

   output_high(led);
   delay_ms(A);
}
