
import java.util.*;
public class CORTSENT{
    public static void main(String[] args) {
      Scanner sc = new Scanner(System.in);
      String s = sc.nextLine();
      char[] arr = s.toCharArray();
      char[] newArr = new char[arr.length];
      for(int i = 0; i < arr.length; i++){
        if(arr[i] != '+'){
          newArr[i] = arr[i];
        }
      }
      Arrays.sort(newArr);
      Vector<Character> v = new Vector<>();
      for(int i = 2; i < newArr.length; i++){
        v.add('+');
        v.add(newArr[i]);
      }
      for(int i = 0; i < v.size(); i++){
        System.out.print(v.get(i));
      }
      sc.close();
    }
}