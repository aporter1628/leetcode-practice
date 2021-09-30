public class evenFib {
	public static void main(String[]args){
		int i, fib, sum;
		sum = 2;
		fib = 0;

		int [] fibArr = new int[2];
		fibArr[0] = 1;
		fibArr[1] = 2;

		for(i = 0; fib <= 4000000; i++){
			fib = fibArr[0] + fibArr[1];

			if(fib >= 4000000){
				break;
			}

			if(fib % 2 == 0){
				System.out.print(fib + " ");
				sum += fib;
			}

			fibArr[0] = fibArr[1];
			fibArr[1] = fib;

			/*if(i < 10){
				System.out.print(fib + " ");
			}*/
		}

		System.out.println("Sum is " + sum);
	}
}