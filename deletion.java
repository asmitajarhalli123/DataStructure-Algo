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

       if(pos<= 0 || pos > size){
            System.out.println("invalid position");
       }
        else{
            for(int i=pos-1 ; i<size ; i++){
                a[i] = a[i+1];
            }
            size--;
        }

        

        System.out.println("Array Elements after insertion");
        for(int i = 0 ; i < size ; i++){
            System.out.println(a[i] + " ");
        }
    }
}



       