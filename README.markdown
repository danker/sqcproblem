#### Solution to the following problem ####
	/*    
	 * If you pay $4.00 for a latte that costs    
	 * $3.10, how much change do you get?    
	*/
	int main() {
		float change = 4.00f - 3.10f;
		printf("change = %10.10f\n", change);
		return 0;
	}
	
#### USAGE ####
`gcc -o SqChange SqChange.c`
 then
`chmod u+x SqChange`
 and finally
`./SqChange`