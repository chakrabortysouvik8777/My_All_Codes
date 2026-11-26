
class Solution {
    public int compress(char[] chars) {
        int i = 0, k = 0;
        int n = chars.length;

        while (i < n) {
            int j = i;
            int count = 1;

            while ((j + 1 < n) && (chars[j + 1] == chars[i])) {
                count++;
                j++;
            }

            chars[k++] = chars[i];
            if (count > 1) {
                for (char c : String.valueOf(count).toCharArray()) {
                    chars[k++] = c;
                }
            }

            i = j + 1;
        }

        return k;
    }
}
