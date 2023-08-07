import java.util.Scanner;

public class RectangleArea{
	public static void main (String[] args){
		Scanner scan = new Scanner(System.in);
		System.out.print("Enter the Length of Rectangle:");
		int length = scan.nextInt();

		System.out.print("Enter the Width of Rectangle:");
		int width = scan.nextInt();
		System.out.printf("The Area of Your reactangle having Length: %d and Width: %d is: %d \n",length,width,length*width);
		scan.close();
	}
}
