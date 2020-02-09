//피에조 부저로 IU - 삐삐 연주하기
#include "pitches.h" 

int tonepin = 9;
int melody[] = {
  NOTE_D5,NOTE_D5,NOTE_D5,NOTE_E5,NOTE_G5,NOTE_B5,//Yellow C A R D
  NOTE_G5,NOTE_A5,NOTE_B5,NOTE_A5,NOTE_B5,NOTE_A5,NOTE_B5,NOTE_A5,NOTE_G5,NOTE_G5,//이 선 넘으면 침범이야 beep
  NOTE_D5,NOTE_E5,NOTE_G5,NOTE_A5,NOTE_B5,NOTE_D6,NOTE_B5,NOTE_A5,NOTE_G5,NOTE_G5,NOTE_G5,NOTE_D5,//매너는 여기까지 it's ma ma ma mine
  NOTE_A5,NOTE_B5,NOTE_A5,NOTE_G5,NOTE_G5,NOTE_G5,NOTE_D5//Please keep the la la la line
};
int noteDurations[] = {//음 길이.
  4,4,4,4,2,1,
  4,4,4,4,4,4,4,4,2,1,
  4,4,4,4,4,4,4,4,2,2,2,1,
  4,4,4,4,2,2,2,4
};
void setup(){
  
}
void loop(){
  for(int i = 0; i < sizeof(noteDurations)/sizeof(int); i++){
    int durations = 1000/noteDurations[i]; //음계의 음길이 계산
    tone(tonepin, melody[i], durations);
    int pauseBetweenNotes = durations * 1.3;
    delay(pauseBetweenNotes);
    noTone(tonepin);
  }
  delay(5000);
}
