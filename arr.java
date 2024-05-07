import java.util.HashSet;

public class TwoSum {
    public static boolean hasArrayTwoCandidates(int A[], int arr_size, int sum) {
        HashSet<Integer> s = new HashSet<Integer>();
        for (int i = 0; i < arr_size; i++) {
            int temp = sum - A[i];
            if (s.contains(temp)) {
                return true;
            }
            s.add(A[i]);
        }
        return false;
    }

    public static void main(String args[]) {
        int A[] = {0, -1, 42, -3, 1};
        int n = 5;
        int x = -2;

        if (hasArrayTwoCandidates(A, n, x)) {
            System.out.println("Haa Haa Array has two elements with sum " + x);
        } else {
            System.out.println("So sorry oops Array doesn't have two elements with sum " + x);
        }
    }
}
