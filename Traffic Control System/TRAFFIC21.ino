int Lanel[] = {13,12,11}; // Lane 1 Red, Yellow and Green
int Lane2[] = {10,9,8};// Lane 2 Red, Yellow and Green 
int Lane3[] = {7,6,5};// Lane 3 Red, Yellow and Green
int Lane4[]= {4,3,2};// Lane 4 Red, Yellow and Green
int Gotime;
int waitTime;

void setup()
{

for (int i = 0; i < 3; i++)
{
pinMode (Lanel[i], OUTPUT);
pinMode (Lane2[i], OUTPUT); 
pinMode (Lane3[i], OUTPUT);
pinMode (Lane4[i], OUTPUT);
}

for (int i = 0; i < 3; i++)
{
digitalWrite(Lanel[i], LOW); 
digitalWrite(Lane2[i], LOW);
digitalWrite(Lane3[i], LOW);
digitalWrite(Lane4[i], LOW);
}
}
void loop()
{

digitalWrite(Lanel[2], HIGH);
digitalWrite(Lane3[0], HIGH);
digitalWrite(Lane4[0], HIGH);
digitalWrite(Lane2[0], HIGH);
delay(Gotime);

digitalWrite(Lanel[2], LOW);
digitalWrite(Lane3[0], LOW);
digitalWrite(Lanel[1], HIGH);
digitalWrite(Lane3[1], HIGH);
delay(waitTime);

digitalWrite(Lanel[1], LOW);
digitalWrite(Lane3[1], LOW);
digitalWrite(Lanel[0], HIGH); 
digitalWrite (Lane3[2], HIGH);
delay(Gotime);

digitalWrite(Lane3[2], LOW);
digitalWrite(Lane4[0], LOW);
digitalWrite(Lane3[1], HIGH);
digitalWrite(Lane4[1], HIGH);
delay(waitTime);

digitalWrite(Lane3[1], LOW); 
digitalWrite(Lane4[1], LOW);
digitalWrite(Lane3[0], HIGH);
digitalWrite(Lane4[2], HIGH);
delay(Gotime);


digitalWrite(Lane4 [2], LOW);
digitalWrite(Lane2[0], LOW); 
digitalWrite (Lane4[1], HIGH);
digitalWrite(Lane2[1], HIGH);
delay(waitTime);

digitalWrite(Lane4[1],LOW); 
digitalWrite(Lane2[1], LOW);
digitalWrite (Lane4[0], HIGH);
digitalWrite(Lane2[2], HIGH);
delay(Gotime);

digitalWrite (Lanel[0], LOW);
digitalWrite (Lane2[2], LOW);
digitalWrite(Lanel[1], HIGH);
digitalWrite(Lane2[1], HIGH);
delay(waitTime);

digitalWrite(Lane2[1], LOW); 
digitalWrite(Lanel[1], LOW);
}
