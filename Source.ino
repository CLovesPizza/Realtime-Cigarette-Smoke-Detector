int pin = 6;
unsigned long duration;
unsigned long starttime;
unsigned long sampletime_ms = 2000;
unsigned long lowpulseoccupancy = 0;
float ratio = 0;
float concentration = 0;
float LPOpercentage = 0;

void setup() {
    pinMode(13,OUTPUT);
    pinMode(6,INPUT);
    starttime = millis();
}
 
void loop() {
    duration = pulseIn(pin, LOW);
    lowpulseoccupancy = lowpulseoccupancy+duration;
 
    if ((millis()-starttime) >= sampletime_ms)
    {
        ratio = lowpulseoccupancy/(sampletime_ms*10.0);  
        LPOpercentage = lowpulseoccupancy/2000;
        concentration = 1.1*pow(ratio,3)-3.8*pow(ratio,2)+520*ratio+0.62;
    }

    if (LPOpercentage > 2 && LPOpercentage <4)
    {
        checkValues2percent();
    }
    else if (LPOpercentage > 4 && LPOpercentage < 6)
    {
        checkValues4percent();
    }
    else if (LPOpercentage > 6 && LPOpercentage < 8)
    {
        checkValues6percent();
    }
    else if (LPOpercentage > 8 && LPOpercentage < 10)
    {
        checkValues8percent();
    }
    else if (LPOpercentage > 10 && LPOpercentage < 12)
    {
        checkValues10percent();
    }
    else if (LPOpercentage > 12 && LPOpercentage < 14)
    {
        checkValues12percent();
    }
    else if (LPOpercentage > 14 && LPOpercentage < 16)
    {
        checkValues14percent();
    }
    else if (LPOpercentage >16)
    {
        checkValues16percent();
    }
}

void checkValues2percent() {
    if (concentration > 1000)
    {
        digitalWrite(13, HIGH);
    }
    else
    {
        digitalWrite(13, LOW);  
    }
        
        lowpulseoccupancy = 0;
        starttime = millis();
        
        loop;
}

void checkValues4percent() {
    if (concentration > 2100)
    {
        digitalWrite(13, HIGH);
    }
    else
    {
        digitalWrite(13, LOW);  
    }
        
        lowpulseoccupancy = 0;
        starttime = millis();
        
        loop;
}

void checkValues6percent() {
    if (concentration > 3350)
    {
        digitalWrite(13, HIGH);
    }
    else
    {
        digitalWrite(13, LOW);  
    }
        
        lowpulseoccupancy = 0;
        starttime = millis();
        
        loop;
}

void checkValues8percent() {
    if (concentration > 4470)
    {
        digitalWrite(13, HIGH);
    }
    else
    {
        digitalWrite(13, LOW);  
    }
        
        lowpulseoccupancy = 0;
        starttime = millis();
        
        loop;
}

void checkValues10percent() {
    if (concentration > 5800)
    {
        digitalWrite(13, HIGH);
    }
    else
    {
        digitalWrite(13, LOW);  
    }
        
        lowpulseoccupancy = 0;
        starttime = millis();
        
        loop;
}

void checkValues12percent() {
    if (concentration > 7400)
    {
        digitalWrite(13, HIGH);
    }
    else
    {
        digitalWrite(13, LOW);  
    }
        
        lowpulseoccupancy = 0;
        starttime = millis();
        
        loop;
}

void checkValues14percent() {
    if (concentration > 8800)
    {
        digitalWrite(13, HIGH);
    }
    else
    {
        digitalWrite(13, LOW);  
    }
        
        lowpulseoccupancy = 0;
        starttime = millis();
        
        loop;
}

void checkValues16percent() {
    if (concentration > 10900)
    {
        digitalWrite(13, HIGH);
    }
    else
    {
        digitalWrite(13, LOW);  
    }
        
        lowpulseoccupancy = 0;
        starttime = millis();
        
        loop;
}