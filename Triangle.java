import java.util.*;

public class Triangle {
    
<<<<<<< HEAD
    static HashMap<Double, ArrayList<Double>> hash = new HashMap<Double, ArrayList<Double>>();
=======
    static HashMap<Double, ArrayList<Double>> hash = new HashMap<>();
>>>>>>> 188f1c1d94858765be759c6229824071d1f6b7ca
    public static void sortbykey()
    {
        TreeMap<Double, ArrayList<Double>> sorted = new TreeMap<>();
 
        sorted.putAll(hash);
        for (HashMap.Entry<Double, ArrayList<Double>> entry : sorted.entrySet())
            System.out.println(entry.getValue());       
    }

    public static void main(String[] args) {
        double t = 0;
        Scanner sc = new Scanner(System.in);
        t = sc.nextDouble();
        while(t-->0){
            double a , b, c, p, s, eqn;
<<<<<<< HEAD
            ArrayList<Double> sides = new ArrayList<Double>();
=======
            ArrayList<Double> sides = new ArrayList<>();
>>>>>>> 188f1c1d94858765be759c6229824071d1f6b7ca
            a = sc.nextDouble();
            b = sc.nextDouble();
            c = sc.nextDouble();
            sides.add(a);
            sides.add(b);
            sides.add(c);

            p = (a+b+c)/2;
            eqn = p*(p-a)*(p-b)*(p-c);
            s = Math.sqrt(eqn);
            hash.put(s,sides);
        }
        sortbykey();
        sc.close();
    }
}
