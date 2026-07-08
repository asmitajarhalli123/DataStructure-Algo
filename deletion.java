//  program of traversing through an array
import java.util.Scanner;

public class deletion {
    public static void main(String[] args) {
          Scanner sc = new Scanner(System.in);
         int a[]= {10 , 20 , 30 , 40 , 50 , 60};
        int size = 5;

        System.out.println("Array Elements before insertion");
        for(int i = 0 ; i < size ; i++){
            System.out.println(a[i] + " ");
        }

       System.out.println("Enter position for deleting Element index (0-5):");
       int pos = sc.nextInt();

        System.out.println("Enter Element :");
        int elem = sc.nextInt();

        // shift elem to right
        for(int i = size ; i >= pos ; i--){
            a[i] = a[i-1];
        }

        // insert new elem
        a[pos-1] = elem;
        size++;

        System.out.println("Array Elements after insertion");
        for(int i = 0 ; i < size ; i++){
            System.out.println(a[i] + " ");
        }
    }
}



       