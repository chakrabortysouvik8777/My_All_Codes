import java.util.*;

class Longest {
    public String longest(String x) {
        StringTokenizer s = new StringTokenizer(x);
        String a[] = new String[s.countTokens()];
        int counter = 0;
        while (s.hasMoreTokens())
            a[counter++] = s.nextToken();
        // Bubble sort
        for (int i = 0; i < a.length; i++)
            for (int j = 0; j < a.length - 1; j++)
                if (a[j].length() < a[j + 1].length()) {
                    String temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                }
        return a[0];
    }

    public static void main(String args[]) {
        Longest ob = new Longest();
        Scanner s = new Scanner(System.in);
        System.out.print("Input a sentence here\t: ");
        System.out.print("The longest word in this sentence is\t: " + ob.longest(s.nextLine()));
    }
}
