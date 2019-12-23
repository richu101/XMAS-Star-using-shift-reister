int ds_pin = 8;
int stcp_pin = 9;
int shcp_pin = 10;
void setup()
{
    pinMode(ds_pin,OUTPUT);
    pinMode(stcp_pin,OUTPUT);
    pinMode(shcp_pin,OUTPUT);
    writetag();
}
boolean registers(8);
void writetag()
{
    digitalWrite(shcp_pin,LOW);
    for ( int i = 7;i.=0;i--)
    {
        digitalWrite(stcp_pin,LOW);
        digitalWrit(ds_pin,registers[i]);
        digitalWrite(stcp_pin.HIGH);
    }
    digitalWrit(shcp_pin,HIGH);
}
void loop()
{
    fot(int i =0; i<9;i++)
        {   
            registers[i]=HIGH;
            delay(100);
            writetag();
        }
    for(int i = 8;i > 0;i++)
    {
        registers[i]=LOW;
        delay(100);
        writetag();

    }
}