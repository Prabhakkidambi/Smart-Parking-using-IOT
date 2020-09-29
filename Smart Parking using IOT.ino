#include<SoftwareSerial.h>
#include <Servo.h>
Servo kanz;
SoftwareSerial blu (6, 7);
//int pos = 0;
int LED1 = 11;
int LED2 = 12;
int LED3 = 13;
int LED4 = 2;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
 
  pinMode(3, INPUT); //IR1 
  pinMode(4, INPUT); //IR2
  pinMode(8, INPUT); //IR3
  pinMode(5, INPUT); //IR4
  pinMode(10, INPUT); //servo IR
  kanz.attach(9); //servo motor
  blu.begin(9600);
   pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  boolean e = digitalRead(10);
  Serial.println(e);
  boolean s1 = digitalRead(3); 
  boolean s2 = digitalRead(4); 
  boolean s3 = digitalRead(8);
  boolean s4 = digitalRead(5);
 Serial.print(s1);
 Serial.print(" ");
 Serial.print(s2);
 Serial.print(" ");
 Serial.print(s3);
 Serial.print(" ");
 Serial.println(s4);
  
  if (e == 1)
  {
    kanz.write(90);
    delay(1000);
  }
  if (e == 0)
  {
    kanz.write(0);
  
  
    if (s1 == 1 && s2 == 1 && s3 == 1 && s4 == 1)
    {
     digitalWrite(LED1,LOW);
     digitalWrite(LED2,LOW);
     digitalWrite(LED3,LOW);
     digitalWrite(LED4,LOW); 
      blu.println("all slots are free");
    }
                     else if (s1==0 && s2==0 && s3==0 && s4==0)
                     {
                    blu.println("all slots are filled");
                    kanz.write(90);
                    digitalWrite(LED1,HIGH);
                    digitalWrite(LED2,HIGH);
                    digitalWrite(LED3,HIGH);
                    digitalWrite(LED4,HIGH);
                     }
    else if (s1 == 1 && s2 == 1 && s3 == 1 &&s4==1)
     {
      blu.println("s1,s2 and s3 slots are free");
      digitalWrite(LED1,LOW);
      digitalWrite(LED2,LOW);
      digitalWrite(LED3,HIGH);
      digitalWrite(LED4,HIGH);
     }
                     else if (s1 == 1 && s2 == 1 && s4 == 1)
                     {
                    blu.println("s1, s2 and s4 slots are free");
                    digitalWrite(LED1,LOW);
                    digitalWrite(LED2,LOW);
                    digitalWrite(LED3,HIGH);
                    digitalWrite(LED4,LOW);
                   }
    else if (s1 == 1 && s3 == 1 && s4 == 1)
    {
     blu.println("s1,s3 and s4 slots are free");
     digitalWrite(LED1,LOW);
     digitalWrite(LED2,HIGH);
     digitalWrite(LED3,LOW);
     digitalWrite(LED4,LOW);
    }
    else if (s2 == 1 && s3 == 1 && s4 == 1)
    {
     blu.println("s2, s3 and s4 slots are free");
     digitalWrite(LED1,HIGH);
     digitalWrite(LED2,LOW);
     digitalWrite(LED3,LOW);
     digitalWrite(LED4,LOW);
    }
                     else if (s1 == 1 && s2 == 1 )
                     {
                    blu.println("s1 and s2 slots are free");
                    digitalWrite(LED1,LOW);
                    digitalWrite(LED2,LOW);
                    digitalWrite(LED3,HIGH);
                    digitalWrite(LED4,HIGH);
                     }
                     else if (s1 == 1 && s3 == 1)
                     {
                    blu.println("s1 and s3 slots are free");
                    digitalWrite(LED1,LOW);
                    digitalWrite(LED2,HIGH);
                    digitalWrite(LED3,LOW);
                    digitalWrite(LED4,HIGH);
                     }
    else if (s1 == 1 && s4 == 1)
    {
     blu.println("s1 and s4 slots are free");
     digitalWrite(LED1,LOW);
     digitalWrite(LED2,HIGH);
     digitalWrite(LED3,HIGH);
     digitalWrite(LED4,LOW);
    }
    else if ( s2 == 1 && s3 == 1)
    {
     blu.println(" s2 and s3 slots are free");
     digitalWrite(LED1,HIGH);
     digitalWrite(LED2,LOW);
     digitalWrite(LED3,LOW);
     digitalWrite(LED4,HIGH);
    }
                     else if ( s2 == 1 && s4 == 1)
                     {
                    blu.println("s2 and s4 slots are free");
                    digitalWrite(LED1,HIGH);
                    digitalWrite(LED2,HIGH);
                    digitalWrite(LED3,HIGH);
                    digitalWrite(LED4,LOW);
                     }
                     else if ( s3 == 1&& s4==1)
                     {
                    blu.println("s3 and s4 slots are free");
                    digitalWrite(LED1,HIGH);
                    digitalWrite(LED2,HIGH);
                    digitalWrite(LED3,LOW);
                    digitalWrite(LED4,LOW);
                     }
                     else if(s1==1)
                     {
                    blu.println("s1 slot is free");
                    digitalWrite(LED1,LOW);
                    digitalWrite(LED2,HIGH);
                    digitalWrite(LED3,HIGH);
                    digitalWrite(LED4,HIGH);
                     }
                     else if(s2==1)
                     {
                    blu.println("s2 slot is free");
                    digitalWrite(LED1,HIGH);
                    digitalWrite(LED1,LOW);
                    digitalWrite(LED3,HIGH);
                    digitalWrite(LED4,HIGH);
                     }
                     else if(s3==1)
                     {
                    blu.println("s3 slot is free");
                    digitalWrite(LED1,HIGH);
                    digitalWrite(LED2,HIGH);
                    digitalWrite(LED3,LOW);
                    digitalWrite(LED4,HIGH);
                     }
                     else if(s4==1)
                     {
                    blu.println("s4 slot is free");
                    digitalWrite(LED1,HIGH);
                    digitalWrite(LED2,HIGH);
                    digitalWrite(LED3,HIGH);
                    digitalWrite(LED4,LOW);
                     }
          
          delay(3000);
          
    }

}
