import java.util.*;

class HashTable {
    public static void main(String[] args) {
        Hashtable<String, Integer> hm = new Hashtable<>();
        hm.put("India", 100);
        hm.put("China", 150);
        hm.put("US", 50);
        hm.put("Indonesia", 60);
        hm.put("Nepal", 70);

        System.out.println(hm);

        hm.put("new three", 3);

        System.out.println(hm);

        hm.remove("new three");

        System.out.println(hm);

        System.out.println(hm.get("India"));

        System.out.println(hm.containsKey("US"));

        System.out.println(hm.containsValue(70));

        System.out.println(hm.size());

        hm.clear();

        System.out.println(hm);
    }
}