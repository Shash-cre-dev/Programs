import java.util.*;
public class P01_Calculator {
    public static void main(String[] args){

        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        String o =sc.next();
        int c;

        switch(o){
            case "+":
                c = a+b;
                System.out.println(c);
                break;
            case "-":
                c = a-b;
                System.out.println(c);
                break;
            case "*":
                c = a*b;
                System.out.println(c);
                break;
            case "/":
                c = a/b;
                System.out.println(c);
                break;    
        }
        sc.close();
    }
    
}
