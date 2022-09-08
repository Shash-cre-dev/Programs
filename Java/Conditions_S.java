import java.util.*;
public class Conditions_S {
    public static void main(String[] args){
    Scanner sc = new Scanner(System.in);
    int num = sc.nextInt();
    
    switch(num){
        case 1:
        System.out.println("Hello");
        break;

        case 2:
        System.out.println("Bonjour");
        break;

        case 3:
        System.out.println("Namaste");
        break;

        default: 
        System.out.println("Invalid Button");
    }
    sc.close();

    }
    
}
