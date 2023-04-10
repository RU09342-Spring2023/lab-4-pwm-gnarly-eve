#include <msp430.h> 


/**
 * main.c
 * evelyn ll
 */

void LEDSetup();
void ButtonSetup();
void TimerB0Setup();
void TimerB1Setup();

void main()
{
    WDTCTL = WDTPW | WDTHOLD;   // stop watchdog timer
    LEDSetup(); // Initialize our LEDS
    ButtonSetup();  // Initialize our button
    TimerB0Setup(); // Initialize Timer0
    TimerB1Setup(); // Initialize Timer1
     PM5CTL0 &= ~LOCKLPM5;

    __bis_SR_register(LPM0_bits + GIE);
    __no_operation();
}
void LEDSetup()
{
    P1DIR |= BIT0;
    P1OUT &= ~BIT0;

    P6DIR |= BIT6;
    P6OUT &= ~BIT6;
}
void ButtonSetup ()
{
    P4DIR &= ~BIT1;
    P4OUT |= BIT1;
    P4REN |= BIT1;
    P4IES &= ~BIT1;
    P4IE  |= BIT1;

    P2DIR &= ~BIT3;
    P2OUT |= BIT3;
    P2REN |= BIT3;
    P2IES &= ~BIT3;
    P2IE |= BIT3;
    P2IFG &= ~BIT3;

}
void TimerB0Setup()
{
    TB0CTL = TBSSEL__SMCLK | MC__UP | TBIE;
    TB0CCTL1 |= CCIE;
    TB0CCR0 = 1000;
    TB0CCR1 = 1;
}
void TimerB1Setup()
{
    TB1CTL = TBSSEL__SMCLK | MC__UP | TBIE;
    TB1CCTL1 |= CCIE;
    TB1CCR0 = 1000;
    TB1CCR1 = 1;
}

#pragma vector=PORT4_VECTOR
__interrupt void Port_2(void)
{
    if (TB0CCR1 >= 999)
        TB0CCR1 = 1;
    else
        TB0CCR1 += 100;
    }

