#include <stdio.h>
#include <stdint.h>

// Function to get a random number using RDRAND
int rdrand32(uint32_t *rand) {
    unsigned char success;

    // Inline assembly to execute RDRAND
    __asm__ volatile (
        "rdrand %0; setc %1"
        : "=r" (*rand), "=qm" (success)
    );

    return success; // Returns 1 if successful, 0 otherwise
}

int main() {
    uint32_t random_number;

    if (rdrand32(&random_number)) {
        printf("Random number generated using RDRAND: %u\n", random_number);
    } else {
        printf("RDRAND failed to generate a random number.\n");
    }
    return 0;
}
