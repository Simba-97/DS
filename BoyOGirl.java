import java.util.*;

public class BoyOGirl{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        char[] arr = str.toCharArray();
        Arrays.sort(arr);
        int count = 0;
        for(int i = 0; i < arr.length-1; i++){
            if(arr[i] != arr[i+1]){
                count++;
            }
        }
        count += 1;
        if(count % 2 == 0){
            System.out.println("CHAT WITH HER!");
        } else {
            System.out.println("IGNORE HIM!");
        }
        sc.close();
    }
    
}