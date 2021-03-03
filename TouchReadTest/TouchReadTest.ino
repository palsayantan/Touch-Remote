// ESP32 Touch Test

void setup()
{
  Serial.begin(115200);
  delay(1000); // give me time to bring up serial monitor
  Serial.println("ESP32 Touch Test");
}

void loop()
{
  Serial.print("T0="); 
  Serial.print(touchRead(T0));  // get value using T0 --> D4
  Serial.print(" | T1="); 
  Serial.print(touchRead(T1));  // get value using T1 --> D0
  Serial.print(" | T2="); 
  Serial.print(touchRead(T2));  // get value using T2 --> D2
  Serial.print(" | T3="); 
  Serial.print(touchRead(T3));  // get value using T3 --> D15
  Serial.print(" | T4="); 
  Serial.print(touchRead(T4));  // get value using T4 --> D13
  Serial.print(" | T5="); 
  Serial.print(touchRead(T5));  // get value using T5 --> D12
  Serial.print(" | T6="); 
  Serial.print(touchRead(T6));  // get value using T6 --> D14
  Serial.print(" | T7="); 
  Serial.print(touchRead(T7));  // get value using T7 --> D27
  Serial.print(" | T8="); 
  Serial.print(touchRead(T8));  // get value using T8 --> D32
  Serial.print(" | T9="); 
  Serial.print(touchRead(T9));  // get value using T9 --> D33
  Serial.print("\n");
  delay(1000);
}
