//5.	WAP in Java to find product of two numbers. (Input by the user)

import java.util.Scanner;

public class ProductOfTwoNumbers {

    public static void main(String[] args) {
        // Create a Scanner object to read input
        Scanner scanner = new Scanner(System.in);

        // Prompt user for the first number
        System.out.print("Enter the first number: ");
        double num1 = scanner.nextDouble();

        // Prompt user for the second number
        System.out.print("Enter the second number: ");
        double num2 = scanner.nextDouble();

        // Calculate the product of the two numbers
        double product = num1 * num2;

        // Display the product
        System.out.println("The product of " + num1 + " and " + num2 + " is: " + product);
    }
}
