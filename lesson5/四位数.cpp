#define IN1 2
#define IN2 3
#define IN3 4
#define IN4 5
#define S1 8
#define S2 9
#define S3 10
#define S4 11
#define LT 6
#define BT 7
void setup()
{
  pinMode(IN1, OUTPUT);//����1
  pinMode(IN2, OUTPUT);//����2
  pinMode(IN3, OUTPUT);//����3
  pinMode(IN4, OUTPUT);//����4
  pinMode(S1, OUTPUT);//Ƭѡ1
  pinMode(S2, OUTPUT);//Ƭѡ2
  pinMode(S3, OUTPUT);//Ƭѡ3
  pinMode(S4, OUTPUT);//Ƭѡ4
  pinMode(LT,OUTPUT);//����
  pinMode(BT,OUTPUT);//����
  digitalWrite(LT,HIGH);
  digitalWrite(BT,HIGH);
  digitalWrite(S1,HIGH);
  digitalWrite(S2,HIGH);
  digitalWrite(S3,HIGH);
  digitalWrite(S4,HIGH);
  Serial.begin(9600) ;
  
}
byte income=0;
int i=3; 
void loop()
{
	
if (Serial.available()>0)
{
	i=3;
	if (i==3)
	{
		digitalWrite(S1,LOW);
		income=Serial.read();
		Serial.println("FIRST");
		income=income-'0';
		digitalWrite(IN1,income&0x1);
		digitalWrite(IN2,(income>>1)&0x1);
		digitalWrite(IN3,(income>>2)&0x1);
		digitalWrite(IN4,(income>>3)&0x1);
		digitalWrite(S1,HIGH);
		i--;
		delay(1000) ;
	}
    	if (i==2)
	{
		digitalWrite(S2,LOW);
		income=Serial.read();
		Serial.println("SECOND");
		income=income-'0';
		digitalWrite(IN1,income&0x1);
		digitalWrite(IN2,(income>>1)&0x1);
		digitalWrite(IN3,(income>>2)&0x1);
		digitalWrite(IN4,(income>>3)&0x1);
		digitalWrite(S2,HIGH);
		i--;
		delay(1000);
	}
		if (i==1)
	{
		digitalWrite(S3,LOW);
		income=Serial.read();
		Serial.println("THIRD");
		income=income-'0';
		digitalWrite(IN1,income&0x1);
		digitalWrite(IN2,(income>>1)&0x1);
		digitalWrite(IN3,(income>>2)&0x1);
		digitalWrite(IN4,(income>>3)&0x1);
		digitalWrite(S3,HIGH);
		i--;
		delay(1000);
	}
		if (i==0)
	{
		digitalWrite(S4,LOW);
		income=Serial.read();
		Serial.println("FOURTH");
		income=income-'0';
		digitalWrite(IN1,income&0x1);
		digitalWrite(IN2,(income>>1)&0x1);
		digitalWrite(IN3,(income>>2)&0x1);
		digitalWrite(IN4,(income>>3)&0x1);
		digitalWrite(S4,HIGH);
		delay(1000);
	}
}
}
