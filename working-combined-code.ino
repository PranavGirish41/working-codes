  #include <IRremote.h> // >v3.0.0                                       
#define PIN_SEND 3

void setup() {
    // put your setup code here, to run once:
    IrSender.begin(PIN_SEND); // Initializes IR sender
    #define input 5
    pinMode(5,INPUT);
    pinMode(13,OUTPUT);
    Serial.begin(9600);
    
  }
  void loop() 
  {
    {
    while (digitalRead(5)==HIGH)
     {
      Serial.println("Signal detected");
      digitalWrite (13,HIGH);
     }
      Serial.println("signal not detected");
    digitalWrite (13,LOW);
    IrSender.sendNEC(0x0102, 0x34, true, 0); // the address 0x0102 with the command 0x34 is sent
    IrSender.sendSony(0xa90,12);
    delay(1000);
    Serial.println("signal sent");
    // put your main code here, to run repeatedly:
  }
  }
