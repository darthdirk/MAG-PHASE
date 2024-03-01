#include <stdio.h>
#include <math.h>


int main() {
    // Example values for the real and imaginary parts
    double real = 0.15673799;
    double imag = 0.21489200;

    // Calculate magnitude
    double magnitude = sqrt(real*real + imag*imag);

    // Convert Magnitude to dB
    double magnitude_dB = 20 * log10(magnitude);

    // Calculate phase in radians
    double phase = atan2(imag, real);

    // Convert phase to degrees (optional)
    double phase_degrees = phase * (180.0 / M_PI);

    printf("Magnitude: %f\n", magnitude);
    printf("Magnitude (dB): %f\n", magnitude_dB);
    printf("Phase (radians): %f\n", phase);
    printf("Phase (degrees): %f\n", phase_degrees);

    return 0;
}

