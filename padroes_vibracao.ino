// Pattern:
// rampUp(400) --> vibrate(400ms) -->
// rampDown(400) --> silence(1200ms)

int motorPin = 9;
int maxspeed = 40;

int vibrar = 0;
void setup()
{
pinMode (motorPin, OUTPUT);
Serial.begin(9600);
while (!Serial) {
  ; // wait for serial port to connect. Needed for Native USB only
}
}

void loop()
{
  if (Serial.available())  //verifica se tem dados diponível para leitura
  {

   switch (Serial.read()){
      case '1': // primeiro padrao
        for( int i=0; i<= maxspeed; i++ )
        {
          analogWrite(motorPin, i);
          delay(10);
        }
  // hold at top speed
        delay(400);
  // decrease speed from maxspeed to 0
        for( int i= maxspeed; i>=0; i-- )
        {
          analogWrite(motorPin, i);
          delay(10);
        }
  // hold at 0
        delay(1200);
      break;
        
      case '2': // segundo padrao
  
  // accelerate motor from 0 to maxspeed
        for( int i=0; i<= maxspeed; i++ )
        {
          analogWrite(motorPin, 40);
          delay(10);
        }
  // hold at top speed
        delay(400);
  // decrease speed from maxspeed to 0
        for( int i= maxspeed; i>=0; i-- )
        {
          analogWrite(motorPin, 40);
          delay(10);
        }
  // hold at 0
        delay(1200);
      break;
  
      case '3': //terceiro padrao
  
  // accelerate motor from 0 to maxspeed -- primeiro padrao
        for( int i=0; i<= maxspeed; i++ )
        {
          analogWrite(motorPin, i);
          delay(10);
        }
  // hold at top speed
        delay(400);
  // decrease speed from maxspeed to 0
        for( int i= maxspeed; i>=0; i-- )
        {
          analogWrite(motorPin, i);
          delay(10);
        }
  // hold at 0
        delay(1200);
  
        for( int i=0; i<= maxspeed; i++ )
        {
          analogWrite(motorPin, i);
          delay(5);
        }
        delay(200);
        for( int i= maxspeed; i>=0; i-- )
        {
          analogWrite(motorPin, i);
           delay(5); 
        }
        delay(1800);
        for( int i=0; i<= maxspeed; i++ )
        {
          analogWrite(motorPin, i);
          delay(10);
        }
  // hold at top speed
        delay(400);
  // decrease speed from maxspeed to 0
        for( int i= maxspeed; i>=0; i-- )
        {
          analogWrite(motorPin, i);
          delay(10);
        }
        delay(1200);
        for( int i=0; i<= maxspeed; i++ )
        {
          analogWrite(motorPin, i);
          delay(15);
        }
  // hold at top speed
        delay(600);
  // decrease speed from maxspeed to 0
        for( int i= maxspeed; i>=0; i-- )
        {
          analogWrite(motorPin, i);
          delay(15);
        }
        delay(600);
      break;
        
      case '4': // quarto padrao
  
  // accelerate motor from 0 to maxspeed -- primeiro padrao
        for( int i=0; i<= maxspeed; i++ )
        {
          analogWrite(motorPin, i);
          delay(10);
        }
  // hold at top speed
        delay(400);
  // decrease speed from maxspeed to 0
        for( int i= maxspeed; i>=0; i-- )
        {
          analogWrite(motorPin, 40);
          delay(10);
        }
  // hold at 0
        delay(1200);
  
        for( int i=0; i<= maxspeed; i++ )
        {
          analogWrite(motorPin, 40);
          delay(5);
        }
        delay(200);
        for( int i= maxspeed; i>=0; i-- )
        {
          analogWrite(motorPin, 40);
          delay(5); 
        }
        delay(1800);
        for( int i=0; i<= maxspeed; i++ )
        {
          analogWrite(motorPin, 40);
          delay(10);
        }
  // hold at top speed
        delay(400);
  // decrease speed from maxspeed to 0
        for( int i= maxspeed; i>=0; i-- )
        {
          analogWrite(motorPin, 40);
          delay(10);
        }
        delay(1200);
        for( int i=0; i<= maxspeed; i++ )
        {
          analogWrite(motorPin, 40);
          delay(15);
        }
  // hold at top speed
        delay(600);
  // decrease speed from maxspeed to 0
        for( int i= maxspeed; i>=0; i-- )
        {
          analogWrite(motorPin, 40);
          delay(15);
        }
        delay(600);
      break;
  
      case '5': //quinto padrao
  
  // accelerate motor from 0 to maxspeed -- primeiro padrao
        for( int i=0; i<= maxspeed; i++ )
        {
          analogWrite(motorPin, i);
          delay(5);
        }
  // hold at top speed
        delay(200);
  // decrease speed from maxspeed to 0
        for( int i= maxspeed; i>=0; i-- )
        {
          analogWrite(motorPin, i);
          delay(5);
        }
        for( int i=0; i<= maxspeed; i++ )
        {
          analogWrite(motorPin, i);
          delay(5);
        }
    // hold at top speed
        delay(200);
  // decrease speed from maxspeed to 0
        for( int i= maxspeed; i>=0; i-- )
        {
          analogWrite(motorPin, i);
          delay(5);
        }
  // hold at 0
        delay(1200);
      break;
        
      case '6': // sexto padrao
  
  // accelerate motor from 0 to maxspeed -- primeiro padrao
        for( int i=0; i<= maxspeed; i++ )
        {
          analogWrite(motorPin, maxspeed);
          delay(5);
        }
  // hold at top speed
        delay(200);
  // decrease speed from maxspeed to 0
        for( int i= maxspeed; i>=0; i-- )
        {
          analogWrite(motorPin, maxspeed);
          delay(5);
        }
        delay(100);
        for( int i=0; i<= maxspeed; i++ )
        {
          analogWrite(motorPin, maxspeed);
          delay(5);
        }
  // hold at top speed
        delay(200);
  // decrease speed from maxspeed to 0
        for( int i= maxspeed; i>=0; i-- )
        {
            analogWrite(motorPin, maxspeed);
            delay(5);
        }
  // hold at 0
        delay(1100);
      break;
  
      case '7': //setimo padrao
  
  // accelerate motor from 0 to maxspeed -- primeiro padrao
        for( int i=0; i<= maxspeed; i++ )
        {
          analogWrite(motorPin, i);
          delay(5);
        }
  // hold at top speed
        delay(200);
  // decrease speed from maxspeed to 0
        for( int i= maxspeed; i>=0; i-- )
        {
          analogWrite(motorPin, i);
          delay(5);
        }
        for( int i=0; i<= maxspeed; i++ )
        {
          analogWrite(motorPin, i);
          delay(5);
        }
  // hold at top speed
        delay(200);
  // decrease speed from maxspeed to 0
        for( int i= maxspeed; i>=0; i-- )
        {
          analogWrite(motorPin, i);
          delay(5);
        }
  // hold at 0
        delay(1200);
  
        for( int i=0; i<= maxspeed; i++ )
        {
          analogWrite(motorPin, i);
          delay(3);
        }
  // hold at top speed
        delay(120);
  // decrease speed from maxspeed to 0
        for( int i= maxspeed; i>=0; i-- )
        {
          analogWrite(motorPin, i);
          delay(3);
        }
        delay(120);
        for( int i=0; i<= maxspeed; i++ )
        {
          analogWrite(motorPin, i);
          delay(3);
        }
  // hold at top speed
        delay(120);
    // decrease speed from maxspeed to 0
        for( int i= maxspeed; i>=0; i-- )
        {
          analogWrite(motorPin, i);
          delay(3);
        }
        delay(1560);
  
        for( int i=0; i<= maxspeed; i++ )
        {
          analogWrite(motorPin, i);
          delay(5);
        }
  // hold at top speed
        delay(200);
  // decrease speed from maxspeed to 0
        for( int i= maxspeed; i>=0; i-- )
        {
          analogWrite(motorPin, i);
          delay(5);
        }
        for( int i=0; i<= maxspeed; i++ )
        {
          analogWrite(motorPin, i);
          delay(5);
        }
  // hold at top speed
        delay(200);
  // decrease speed from maxspeed to 0
        for( int i= maxspeed; i>=0; i-- )
        {
          analogWrite(motorPin, i);
          delay(5);
        }
  // hold at 0
        delay(1200);
        for( int i=0; i<= maxspeed; i++ )
        {
          analogWrite(motorPin, i);
          delay(7);
        }
  // hold at top speed
        delay(280);
  // decrease speed from maxspeed to 0
        for( int i= maxspeed; i>=0; i-- )
        {
          analogWrite(motorPin, i);
          delay(7);
        }
        for( int i=0; i<= maxspeed; i++ )
        {
          analogWrite(motorPin, i);
          delay(7);
        }
  // hold at top speed
        delay(280);
  // decrease speed from maxspeed to 0
        for( int i= maxspeed; i>=0; i-- )
        {
            analogWrite(motorPin, i);
            delay(7);
        }
  // hold at 0
        delay(720);
      break;
  
      case '8':// oitavo padrao 
  
  // accelerate motor from 0 to maxspeed -- primeiro padrao
        for( int i=0; i<= maxspeed; i++ )
        {
          analogWrite(motorPin, maxspeed);
          delay(5);
        }
  // hold at top speed
        delay(200);
  // decrease speed from maxspeed to 0
        for( int i= maxspeed; i>=0; i-- )
        {
          analogWrite(motorPin, maxspeed);
          delay(5);
        }
        delay(100);
        for( int i=0; i<= maxspeed; i++ )
        {
          analogWrite(motorPin, maxspeed);
          delay(5);
        }
  // hold at top speed
        delay(200);
  // decrease speed from maxspeed to 0
        for( int i= maxspeed; i>=0; i-- )
        {
          analogWrite(motorPin, maxspeed);
          delay(5);
        }
  // hold at 0
        delay(1100);
  
        for( int i=0; i<= maxspeed; i++ )
        {
          analogWrite(motorPin, maxspeed);
          delay(3);
        }
  // hold at top speed
        delay(120);
  // decrease speed from maxspeed to 0
        for( int i= maxspeed; i>=0; i-- )
        {
          analogWrite(motorPin, maxspeed);
          delay(3);
        }
        delay(100);
        for( int i=0; i<= maxspeed; i++ )
        {
          analogWrite(motorPin, maxspeed);
          delay(3);
        }
    // hold at top speed
        delay(120);
  // decrease speed from maxspeed to 0
        for( int i= maxspeed; i>=0; i-- )
        {
          analogWrite(motorPin, maxspeed);
          delay(3);
        }
        delay(1580);
    
        for( int i=0; i<= maxspeed; i++ )
        {
          analogWrite(motorPin, maxspeed);
          delay(5);
        }
  // hold at top speed
        delay(200);
  // decrease speed from maxspeed to 0
        for( int i= maxspeed; i>=0; i-- )
        {
          analogWrite(motorPin, maxspeed);
          delay(5);
        }
        delay(100);
        for( int i=0; i<= maxspeed; i++ )
        {
          analogWrite(motorPin, maxspeed);
          delay(5);
        }
  // hold at top speed
        delay(200);
  // decrease speed from maxspeed to 0
        for( int i= maxspeed; i>=0; i-- )
        {
          analogWrite(motorPin, maxspeed);
          delay(5);
        }
  // hold at 0
        delay(1100);
        for( int i=0; i<= maxspeed; i++ )
        {
          analogWrite(motorPin, maxspeed);
          delay(7);
        }
  // hold at top speed
        delay(280);
  // decrease speed from maxspeed to 0
        for( int i= maxspeed; i>=0; i-- )
        {
          analogWrite(motorPin, maxspeed);
          delay(7);
        }
          delay(100);
        for( int i=0; i<= maxspeed; i++ )
        {
          analogWrite(motorPin, maxspeed);
          delay(7);
        }
  // hold at top speed
        delay(280);
  // decrease speed from maxspeed to 0
        for( int i= maxspeed; i>=0; i-- )
        {
          analogWrite(motorPin, maxspeed);
          delay(7);
        }
  // hold at 0
        delay(620);
      break;
   }
  }  
}


