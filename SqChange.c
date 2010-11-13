#include <stdio.h>

/*    
 * If you pay $4.00 for a latte that costs    
 * $3.10, how much change do you get?    
 */
int main() {
	long change = 400 - 310;
	printf("change = $%ld.%02ld\n", change/100, change%100);
	return 0;
}