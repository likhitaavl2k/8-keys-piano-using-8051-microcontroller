#include<reg51.h> 
sbit bu=P2^0; 
void delay1on() 
{ 
TMOD=0X01; 
TH0=0Xf8; 
TL0=0X80; 
TR0=1; 
while(TF0==0); 
TR0=0; 
TF0=0; 
} 
void delay2on() 
{ 
TMOD=0X01; 
TH0=0Xf9; 
TL0=0X55; 
TR0=1; 
while(TF0==0); 
TR0=0; 
TF0=0; 
} 
void delay3on() 
{ 
TMOD=0X01; 
TH0=0Xfa; 
TL0=0X00; 
TR0=1; 
while(TF0==0); 
TR0=0; 
TF0=0; 
} 
void delay4on() 
{ 
TMOD=0X01; 
TH0=0Xfa; 
TL0=0Xab; 
TR0=1; 
while(TF0==0); 
TR0=0; 
TF0=0; 
} 
void delay5on() 
{ 
TMOD=0X01; 
TH0=0XFB; 
TL0=0X00; 
TR0=1; 
while(TF0==0); 
TR0=0; 
TF0=0; 
} 
void delay6on() 
{ 
TMOD=0X01; 
TH0=0XFB; 
TL0=0X80; 
TR0=1; 
while(TF0==0); 
TR0=0; 
TF0=0; 
} 
void delay7on() 
{ 
TMOD=0X01; 
TH0=0XFC; 
TL0=0X00; 
TR0=1; 
while(TF0==0); 
TR0=0; 
TF0=0; 
} 
void delay8on() 
{ 
TMOD=0X01; 
TH0=0XFC; 
TL0=0X40; 
TR0=1; 
while(TF0==0); 
TR0=0; 
TF0=0; 
} 
 
void main() 
{ 
P2=0X00; 
while(1) 
{ 
if(P1==0xFE) 
{ 
bu=~bu; 
delay1on(); 
} 
else if(P1==0xFD) 
{ 
bu=~bu; 
delay2on(); 
} 
else if(P1==0XFB) 
{ 
bu=~bu; 
delay3on(); 
} 
else if(P1==0XF7) 
{ 
bu=~bu; 
delay4on(); 
} 
else if(P1==0XEF) 
{ 
bu=~bu; 
delay5on(); 
} 
else if(P1==0XDF) 
{ 
bu=~bu; 
delay6on(); 
} 
else if(P1==0XBF) 
{ 
bu=~bu; 
delay7on(); 
} 
else if(P1==0X7F) 
{ 
bu=~bu; 
delay8on(); 
} 
} 
} 