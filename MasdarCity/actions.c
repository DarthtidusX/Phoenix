#include "actions.h"

/*****************************************************************************/
/******************** Ab hier erfolgt die Implementierung ********************/
/*****************************************************************************/
void drive()
{
    //Linker und rechter Motor muessen sich entgegengesetzt drehen
    motor_richtung(MOTOR_LINKS, MOTOR_RICHTUNG_VORWAERTS);
    motor_pwm(MOTOR_LINKS, SPEED);
    motor_richtung(MOTOR_RECHTS, MOTOR_RICHTUNG_RUECKWAERTS);
    motor_pwm(MOTOR_RECHTS, SPEED);
    return 0;
}

void stop()
{
    //linkes und rechtes Rad stoppen
    motor_richtung(MOTOR_LINKS, MOTOR_RICHTUNG_VORWAERTS);
    motor_pwm(MOTOR_LINKS, STOP);
    motor_richtung(MOTOR_RECHTS, MOTOR_RICHTUNG_VORWAERTS);
    motor_pwm(MOTOR_RECHTS, STOP);
    return 0;
}

void back()
{
    //Wie drive nur umgekehrt
    motor_richtung(MOTOR_LINKS, MOTOR_RICHTUNG_RUECKWAERTS);
    motor_pwm(MOTOR_LINKS, SPEED);
    motor_richtung(MOTOR_RECHTS, MOTOR_RICHTUNG_VORWAERTS);
    motor_pwm(MOTOR_RECHTS, SPEED);
    return 0;
}

void change_direction_left()
{
    //linkes Rad stoppen, rechtes Rad drehen
    motor_richtung(MOTOR_LINKS, MOTOR_RICHTUNG_VORWAERTS);
    motor_pwm(MOTOR_LINKS, STOP);
    motor_richtung(MOTOR_RECHTS, MOTOR_RICHTUNG_RUECKWAERTS);
    motor_pwm(MOTOR_RECHTS, SPEED);
    return 0;
}

void change_direction_right()
{
    //linkes Rad drehen, rechtes Rad stoppen
    motor_richtung(MOTOR_LINKS, MOTOR_RICHTUNG_VORWAERTS);
    motor_pwm(MOTOR_LINKS, SPEED);
    motor_richtung(MOTOR_RECHTS, MOTOR_RICHTUNG_RUECKWAERTS);
    motor_pwm(MOTOR_RECHTS, STOP);
    return 0;
}

void change_direction()
{
    /* Momentan Pseudocode!!

    //if (linker Optokoppler schwarz => Wert > 150 && rechter Optokoppler weiß => Wert < 150)
    //{
    //  change_direction_right();
    //}
    else if(wie davor nur umgekehrt)
    //{
    //  change_direction_left();
    //}
    //else
    //{
    //  drive();
    //}*/
}

void spin_around()
{
    //linkes Rad und rechtes Rad in gleiche Richtung drehen
    motor_richtung(MOTOR_LINKS, MOTOR_RICHTUNG_RUECKWAERTS);
    motor_pwm(MOTOR_LINKS, SPEED);
    motor_richtung(MOTOR_RECHTS, MOTOR_RICHTUNG_RUECKWAERTS);
    motor_pwm(MOTOR_RECHTS, SPEED);
    return 0;
}


