import java.util.*;

public class HashMapCode{
    static class HashMap<K, V> {
        @SuppressWarnings("unused")
        private class Node {
            K key;
            V value;

            public Node(K key, V value) {
                this.key = key;
                this.value = value;
            }
        }

        @SuppressWarnings("unused")
        private int size;
        private LinkedList<Node> buckets[];

        @SuppressWarnings("unchecked")
        public HashMap() {
            size = 0;
            buckets = new LinkedList[10];
            for (int i = 0; i < 10; i++) {
                buckets[i] = new LinkedList<>();
            }
        }

        private int hashFunction(K keyK){
                    }

        public void put(K key, V value) {
            int bi = hashFunction(key);
            int di = findInBucket(bi, key);
        }
    }
}
