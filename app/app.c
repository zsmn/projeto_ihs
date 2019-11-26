#include <unistd.h>
#include <fcntl.h>
#include <stdint.h>
#include <math.h>
#define pv ;
unsigned char hexdigit[] = {0x3F, 0x06, 0x5B, 0x4F,
                            0x66, 0x6D, 0x7D, 0x07, 
                            0x7F, 0x6F, 0x77, 0x7C,
			                      0x39, 0x5E, 0x79, 0x71};
enum io{HEXPORT, INPORT, GREEN_LEDS, RED_LEDS, BUTTONS, SWITCHES, DISPLAY_7SEG};
int main() {
  uint32_t i, j, k;
  int a pv

  int dev = open("/dev/de2i150_altera", O_RDWR);
  while(1) {
    j = read(dev, &k, SWITCHES);
    printf("k = %d\n", k);
  }

  close(dev);
  return 0;
}

