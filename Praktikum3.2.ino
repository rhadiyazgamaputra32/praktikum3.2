void setup() {
  // put your setup code here, to run once:
DDRB=0b1111; 
DDRC=0b0000; 
PORTC=0b1111; 

}

void loop() 
{
   if(digitalRead(A0)==LOW)     
   {  
    forward();
   }
   if(digitalRead(A1)==LOW) 
     { 
       reverse();
     } 
    
   if(digitalRead(A2)==LOW) 
     { 
      reset(); 
     }
     
}

void reset()
{
  PORTB =0;
}

void reverse()
{
   for(int b=11; b>7; b--)
    { 
      digitalWrite(b,HIGH);
      delay(1000);
      digitalWrite(b,LOW); 
    }
}

void forward()
{
    for(int b=8; b<12; b++)
    { 
      digitalWrite(b,HIGH);
      delay(1000);
      digitalWrite(b,LOW);
    }
}
