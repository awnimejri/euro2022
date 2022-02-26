char val;

int md1=5;
int md2=6;
int mg1=9;
int mg2=10;


int x = 250;



void setup(){
Serial.begin(9600);
pinMode(md1,OUTPUT);
pinMode(md2,OUTPUT);
pinMode(mg1,OUTPUT);
pinMode(mg2,OUTPUT);


}
void loop(){
if(Serial.available())
{ val=Serial.read();
Serial.println(val);}

if(val=='0'){                 
x = 0;
}
if(val=='1'){                 
x = 25;
}
if(val=='2'){                 
x = 50;
}
if(val=='3'){                 
x = 75;
}
if(val=='4'){                 
x = 100;
}
if(val=='5'){                 
x = 125;
}
if(val=='6'){                 
x = 150;
}
if(val=='7'){                 
x = 175;
}
if(val=='8'){                 
x = 200;
}
if(val=='9'){                 
x = 225;
}
if(val=='q'){                 
x = 255;
}

if(val=='F'){                 
analogWrite(md1,x);
analogWrite(md2,0);
analogWrite(mg1,x);
analogWrite(mg2,0);


}

if(val=='B'){                 
analogWrite(md1,0);
analogWrite(md2,x);
analogWrite(mg1,0);
analogWrite(mg2,x);


}

if(val=='L'){
analogWrite(md1,x);
analogWrite(md2,0);
analogWrite(mg1,0);
analogWrite(mg2,x);

}

if(val=='R'){                 
analogWrite(md1,0);
analogWrite(md2,x);
analogWrite(mg1,x);
analogWrite(mg2,0);


}

if(val=='G'){                 
analogWrite(md1,0);
analogWrite(md2,0);
analogWrite(mg1,x);
analogWrite(mg2,0);

}

if(val=='I'){                 
analogWrite(md1,0);
analogWrite(md2,0);
analogWrite(mg1,x);
analogWrite(mg2,0);


}

if(val=='H'){                 
analogWrite(md1,0);
analogWrite(md2,x);
analogWrite(mg1,0);
analogWrite(mg2,0);

}

if(val=='J'){                 
analogWrite(md1,0);
analogWrite(md2,0);
analogWrite(mg1,0);
analogWrite(mg2,x);}



if(val=='S'){                 
analogWrite(md1,0);
analogWrite(md2,0);
analogWrite(mg1,0);
analogWrite(mg2,0);

}




}    
   
