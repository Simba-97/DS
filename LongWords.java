import java.util.Scanner;

public class LongWords {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n;
        n = sc.nextInt();
        while(n-->0){
            String str = sc.next();
            char[] arr = str.toCharArray();
            if(arr.length > 10){
                String res = arr[0] + Integer.toString(arr.length-2) + arr[arr.length-1];
                System.out.println(res);//+ arr[arr.length-1]);
            } else {
                System.out.println(str);
            }
        }
        sc.close();
    }
}
