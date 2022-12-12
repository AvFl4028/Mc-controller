#include <BoardNames.h>
#include <MCreatorLink.h>
    //TEST OF FUNCTIONALITY OF THE BUTTONS
int push1 = 3;
int push2 = 4;
int push3 = 5;
int push4 = 6;
int led = 2;

void setup()
{
    Serial.begin(115200);
    Serial.setTimeout(20);
    MCreatorLink.setup(Serial);
    //TEST OF FUNCTIONALITY OF THE BUTTONS
	pinMode(push1, INPUT);
    pinMode(push2, INPUT);
    pinMode(push3, INPUT);
    pinMode(push4, INPUT);
    pinMode(led, OUTPUT);
}

void loop()
{
    //TEST OF FUNCTIONALITY OF THE BUTTONS
	if (digitalRead(push1) == HIGH)
    {
        digitalWrite(led, HIGH);
        Serial.print("Push 1");
    }
    else if (digitalRead(push2) == HIGH)
    {
        digitalWrite(led, HIGH);
        Serial.print("Push 2");
    }
    else if (digitalRead(push3) == HIGH)
    {
        digitalWrite(led, HIGH);
        Serial.print("Push 3");
    }
    else if (digitalRead(push4) == HIGH)
    {
        digitalWrite(led, HIGH);
        Serial.print("Push 4");
    }else
    {
        digitalWrite(led, LOW);
    }
    MCreatorLink.loop();
}
