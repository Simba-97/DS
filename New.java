import java.util.Scanner;

class New{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long t = sc.nextLong();
        while(t-->0){
            long a, b, c;
            a = sc.nextLong();
            b = sc.nextLong();
            c = sc.nextLong();
            long ans = 0;
            for(long i = 1; i <= c; i++){
                if(i == 1 || i % 2 != 0){
                    ans += a; 
                } else {
                    ans -= b;
                }
            }
            System.out.println(ans);
        }
        sc.close();
    }
}