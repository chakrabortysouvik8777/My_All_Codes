import java.util.Scanner;

class Node {
    int coeff, pow;
    Node next;

    public Node(int coeff, int pow) {
        this.coeff = coeff;
        this.pow = pow;
        this.next = null;
    }
}

class Poly {
    private static Node insert(Node head, int coeff, int pow) {
        if (coeff == 0) 
            return head;

        Node n = new Node(coeff, pow);

        if (head == null || pow > head.pow) {
            n.next = head;
            return n;
        }
        
        if (head.pow == pow) {
            head.coeff += coeff;
            return head;
        }

        Node temp = head;
        while (temp.next != null && temp.next.pow > pow) {
            temp = temp.next;
        }

        if (temp.next != null && temp.next.pow == pow) {
            temp.next.coeff += coeff;
        } else {
            n.next = temp.next;
            temp.next = n;
        }

        return head;
    }

    private static Node removeZeroTerms(Node head) {
        while (head != null && head.coeff == 0) {
            head = head.next;
        }
        
        if (head == null) 
            return null;
        
        for (Node curr = head; curr.next != null; ) {
            if (curr.next.coeff == 0) {
                curr.next = curr.next.next;
            } else {
                curr = curr.next;
            }
        }
        return head;
    }

    public static Node createPoly(Scanner sc) {
        Node p = null;
        boolean f = true;

        do {
            System.out.print("Enter Coeff & Pow: ");

            int coeff = sc.nextInt();
            int pow = sc.nextInt();

            p = insert(p, coeff, pow);

            System.out.print("Add More? 1. Yes | 0. No: ");
            f = (sc.nextInt() == 1);
        } while (f);

        return p;
    }

    public static Node add(Node p1, Node p2) {
        Node res = null;

        for (Node temp = p1; temp != null; temp = temp.next) {
            res = insert(res, temp.coeff, temp.pow);
        }

        for (Node temp = p2; temp != null; temp = temp.next) {
            res = insert(res, temp.coeff, temp.pow);
        }
        return removeZeroTerms(res);
    }
    
    public static Node multiply(Node p1, Node p2) {
        if (p1 == null || p2 == null) return null;

        Node res = null;

        for (Node i = p1; i != null; i = i.next) {
            for (Node j = p2; j != null; j = j.next) {
                res = insert(res, i.coeff * j.coeff, i.pow + j.pow);
            }
        }

        return removeZeroTerms(res);
    }

    public static void display(Node head) {
        if (head == null) {
            System.out.println("0");
            return;
        }

        Node temp = head;
        boolean isFirst = true;

        while (temp != null) {
            if (temp.coeff != 0) {
                System.out.print(
                    (isFirst ? (temp.coeff < 0 ? "-" : "") : (temp.coeff > 0 ? " + " : " - "))
                    + (Math.abs(temp.coeff) == 1 && temp.pow > 0 ? "" : Math.abs(temp.coeff))
                    + (temp.pow == 0 ? "" : (temp.pow == 1 ? "x" : "x^" + temp.pow))
                );
                isFirst = false;
            }
            temp = temp.next;
        }

        if (isFirst) {
            System.out.print("0");
        }
        System.out.println();
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("=== 1st Polynomial ===");
        Node poly1 = createPoly(sc);

        System.out.println("\n=== 2nd Polynomial ===");
        Node poly2 = createPoly(sc);

        System.out.print("\nPoly 1: ");
        display(poly1);

        System.out.print("Poly 2: ");
        display(poly2);

        Node sum = add(poly1, poly2);

        System.out.print("Sum : ");
        display(sum);

        Node prod = multiply(poly1, poly2);

        System.out.print("Product : ");
        display(prod);

        sc.close();
    }
}
