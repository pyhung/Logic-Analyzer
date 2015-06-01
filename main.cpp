#include "mbed.h"
// #include "TextLCD.h"

// Defines the LCD driver and the pins to output to.
// TextLCD lcd(p24, p26, p27, p28, p29, p30); // rs, e, d4-d7
Serial pc(USBTX, USBRX);
 
// AnalogIn ain(A0);
// DigitalIn spin(p6);

DigitalIn dpin(p9);
DigitalIn apin(p10);
 
int main() {
int p, r;           

    
    while(1) {
        p = dpin.read();
        r = apin.read();
        
            if (p==1){
                // pc.printf("\n \n");
                pc.printf("D");
                }
            else {
                pc.printf("d");
                }
        
       /* q = spin.read();
        if (q==1)
            pc.printf("S");
        else
            pc.printf("s");
        */
                
        
        if (r==1){
            pc.printf("A");}
        else{
            pc.printf("a");}
            
        wait_us (0.008);
        // testD=p;
        
    }
}
