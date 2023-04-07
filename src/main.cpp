#include <Arduino.h>
#include <DigiKeyboard.h>

void setup() {

    // Não é necessário, mas em computadores antigos evita a perda do primeiro caractere.
    DigiKeyboard.sendKeyStroke(0);
    // Win + R
    DigiKeyboard.sendKeyStroke(KEY_R , MOD_GUI_LEFT);
    // Escreve
    DigiKeyboard.println("notepad");
    // Enter
    DigiKeyboard.sendKeyStroke(KEY_ENTER);
    // Espera 1000 milisegundos
    DigiKeyboard.delay(1000);
    // Escreve 
    DigiKeyboard.println("Guilherme Biancardi");

}

void loop() {
    
}
