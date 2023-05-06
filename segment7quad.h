int bits[10] = {
  0b1111110,
  0b0110000,
  0b1101101,
  0b1111001,
  0b0110011,
  0b1011011,
  0b1011111,
  0b1110100,
  0b1111111,
  0b1111011
};

int mask[7] = {
  0b1000000,
  0b0100000,
  0b0010000,
  0b0001000,
  0b0000100,
  0b0000010,
  0b0000001
};

int pin[] = {4, 5, 6, 7, 8, 9, 10};

void write7segment(int pin[], int number, int state){
  if(state){
    for(int i = 0; i < 7; i++){
      digitalWrite(pin[i], bits[number] & mask[i]);
  	}
  }else{
    for(int i = 0; i < 7; i++){
      digitalWrite(pin[i], 0);
  	}
  }
}