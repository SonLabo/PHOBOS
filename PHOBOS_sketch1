// ARDUINO A
// This Sketch is For PHOBOS inter-activity movements at Space apps Challengers //2014 
//                                                  Copy paste this sketch in your arduino UNO
//                                     It size is only 3,7 Ko , connect 8 servo motors on Pins of your Arduino 
//
//
//___________________________________________________________________________________________________________________________________________






#include <Servo.h> 

Servo servo_1;  // create servo object to control a servo 
Servo servo_2;  
Servo servo_3;  
Servo servo_a;  
Servo servo_b;  
Servo servo_c; 
Servo servo_x;
Servo servo_y;


// a maximum of eight servo objects can be created 

int pos_1 = 100 ;  // variable to store the servo position 
int pos_2 = 80 ;  //
int pos_3 = 45 ;
int pos_a = 90 ;
int pos_b = 90 ;
int pos_c = 160 ;
int pos_x= 80 ;
int pos_y= 100 ;

const int ULCD_bit_a = 10 ; 
const int ULCD_bit_b = 11 ;
const int ardu_recv = 12 ;
const int ardu_send =13 ;
int etat_ULCDa ; 
int etat_ULCDb ;
int etat_ardu_recv;


void setup() 

{ 

  servo_1.attach(2);  // attaches the servo on pin 9 to the servo object 
  servo_2.attach(3);
  servo_3.attach(4);
  servo_a.attach(5);
  servo_b.attach(6);
  servo_c.attach(7);
  servo_x.attach(8);
  servo_y.attach(9);

  pinMode(ULCD_bit_a, INPUT) ;
  pinMode(ULCD_bit_b, INPUT) ;
  pinMode(ardu_recv , INPUT) ;
  pinMode(ardu_send , OUTPUT) ; 

} 


void loop () 

{ 

  //we define each angle of the robot 

  //servo_1.write(100);      
  //servo_2.write(80);
  //servo_3.write(0);
  //servo_a.write(90);
  //servo_b.write(90);
  //servo_c.write(180);
  //servo_x.write(80);
  //servo_y.write(100) ;

  //delay(100);

  // we then ask the robot to greet every body _________________________

  etat_ardu_recv = digitalRead (ardu_recv) ;

  if( etat_ardu_recv == HIGH )

  {

    for(pos_a=90 ; pos_a >0 ; pos_a-=1)
    {
      servo_a.write(pos_a);
      delay(50);
    }
    for(pos_b=90 ; pos_b<140 ; pos_b+=1)
    {
      servo_b.write(pos_b);
      delay(50);
    }

    for(pos_x=80 ; pos_x=120 ; pos_x+=1)
    {
      servo_x.write(pos_x) ;
      delay(40);
    }

    for(pos_y=100 ; pos_y=140 ; pos_y+=1)
    {
      servo_y.write(pos_y);
      delay(40);
    }

    //______________________________________________________________SALUTATION__________________________________________________________________

    for(pos_c=180 ; pos_c>90 ; pos_c-=1)
    {
      servo_c.write(pos_c);
      delay(50);
    }
    for( pos_c=90 ; pos_c<180 ; pos_c+=1)
    {
      servo_c.write(pos_c);
      delay(50);
    }
    for( pos_c = 180; pos_c >90 ; pos_c-=1)
    {
      servo_c.write(pos_c);
      delay(50);
    }

    //_________________________________________________________End of salutation______________________________________________________________________________________


    for( pos_a=0 ; pos_a<90 ; pos_a+=1)
    {
      servo_a.write(pos_a);
      delay(50);
    }
    for( pos_b=140 ; pos_b>90 ; pos_b-=1)
    {
      servo_b.write(pos_b);
      delay(50);
    }
    digitalWrite(ardu_send , HIGH); 
    delay(500) ; 

    digitalWrite(ardu_send , LOW) ;
    delay(1000) ;
  }
  //____________________________________________for each right answers the robot manifest his happyness____________________________________________________________}


  etat_ULCDa = digitalRead(ULCD_bit_a);

  if ( etat_ULCDa == HIGH )
  {
    for(pos_y =90 ; pos_y<100 ; pos_y+=1)
    {
      servo_y.write(pos_y);
      delay(20);
    } 
    for(pos_y = 100 ; pos_y >45 ; pos_y-=1)
    {
      servo_y.write(pos_y);
      delay(20);
    }

    for(pos_y=45 ; pos_y<90 ; pos_y+=1)
    {
      servo_y.write(pos_y) ;
      delay(20);
    }


    etat_ULCDb = digitalRead(ULCD_bit_b) ; // he desagree the answer  


    if(etat_ULCDb==HIGH)

    {

      for(pos_x=90 ; pos_x<120 ; pos_x+=1)

      {
        servo_x.write(pos_x) ;
        delay(20) ;
      }  

      for(pos_x=120 ; pos_x>45 ; pos_x-=1)

      {
        servo_x.write(pos_x);
        delay(20) ; 

      }  

    }

  }


}  

