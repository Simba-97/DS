public class Stack {
    StackNode  root;
    
    static class StackNode {
        int data;
        StackNode next;

        StackNode(int d){
            data = d;
        }
    }

    public boolean isEmpty(){
        if(root == null) {
            return true;
        } else 
            return false;
        
    }

    public void push(int data){
        StackNode newNode = new StackNode(data);

        if(root == null){
            root = newNode;
        } else {
            StackNode temp = root;
            root = newNode;
            newNode.next = temp;
        }
        System.out.println(data + " pushed!");
    }
    public int pop(){
        int popped = Integer.MIN_VALUE;
        if(root == null){
            return -1;
        } else {
            popped = root.data;
            root = root.next;
        }
        return popped;
    }

    public void peek(){
        if(root == null){
            System.out.println("Cannot peek");
        } else {
            System.out.println(root.data);
        }
    }
    public static void main(String[] args){
        Stack s = new Stack();
       
        s.isEmpty();
    }
}
