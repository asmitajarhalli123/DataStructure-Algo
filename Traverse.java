//  program of traversing through an array
import java.util.Scanner;

public class Traverse {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int[] a;
        int size;

        System.out.print("Enter size of array: ");
        size = sc.nextInt();
        a = new int[size];

        System.out.print("Enter elements: ");
        for (int i = 0; i < size; i++) {
            a[i] = sc.nextInt();
        }

        System.out.print("Array Elements :");
        for(int i=0 ; i<size ; i++){
            System.out.print(a[i] + " ");
        }

        sc.close();
    }
}