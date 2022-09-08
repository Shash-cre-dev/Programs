import java.util.*;

public class Conditions_1{
    public static void main(String[] args){

    Scanner sc = new Scanner(System.in);
    int Age = sc.nextInt();

    if(Age>18)
        System.out.print("Adult");
    else
        System.out.print("Not an Adult");

    sc.close();

    } 

}
