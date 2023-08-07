import java.util.Scanner;

public class LegalAge{
    public static void main (String[] args){
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter your Age:");
        int age = scan.nextInt();
        if (age<18){
            System.out.println("Under 18 teen are not allowed here. Get off here.");
        } else {
            System.out.println("You are allowed here.");
        }
        scan.close();
    }
}