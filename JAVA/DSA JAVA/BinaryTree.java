import java.util.Scanner;

class Node {
    int data;
    Node l, r;

    Node(int data) {
        this.data = data;
        this.l = null;
        this.r = null;
    }
}

public class BinaryTree {
    public static Node buildTree(Scanner sc) {
        System.out.print("Enter the value (-1 to stop) : ");
        int data = sc.nextInt();

        // Base case: -1 signifies null
        if (data == -1) {
            return null;
        }

        Node root = new Node(data);

        System.out.println("Enter Left Child of " + data + " : ");
        root.l = buildTree(sc);
        
        System.out.println("Enter Right Child of " + data + " : ");
        root.r = buildTree(sc);

        return root;
    }

    public static void preOrder(Node root) {
        if (root != null) {
            System.out.print(root.data + " ");
            preOrder(root.l);
            preOrder(root.r);
        }
    }

    public static void inOrder(Node root) {
        if (root != null) {
            inOrder(root.l);
            System.out.print(root.data + " ");
            inOrder(root.r);
        }
    }

    public static void postOrder(Node root) {
        if (root != null) {
            postOrder(root.l);
            postOrder(root.r);
            System.out.print(root.data + " ");
        }
    }

    public static Node invert(Node root) {
        if (root == null)
            return null;

        Node temp = root.l;
        root.l = root.r;
        root.r = temp;

        invert(root.l);
        invert(root.r);

        return root;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        Node root = buildTree(sc);

        System.out.println("\n--- Tree Traversal ---");
        System.out.print("PreOrder: "); preOrder(root); System.out.println();
        System.out.print("InOrder: "); inOrder(root); System.out.println();
        System.out.print("PostOrder: "); postOrder(root); System.out.println();
        
        root = invert(root);
        System.out.print("Inverted InOrder: "); inOrder(root); System.out.println();
        
        sc.close();        
    }
}
