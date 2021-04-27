public class LinkedList{

   Node head;

   class Node{
       int data;
       Node next;
        Node(int d){
            data = d;
            next = null;
        }
    }
        public void addBeg(int new_data){
            Node newNode = new Node(new_data);
            newNode.next = head;
            head = newNode;
        }
        public void addAfter(Node prev, int new_data){
            if(prev == null){
                System.out.println("Not possible");
            }

            Node newNode = new Node(new_data);
            newNode.next = prev.next;
            prev.next = newNode;
        }
        public void addEnd(int data){
            Node newNode = new Node(data);

            if(head == null){
                head = newNode;
                return;
            }
            
            Node last = head;
            while(last.next != null){
                last = last.next;
            }
            last.next = newNode;
            newNode.next = null;
        }
        public void delKey(int key){
            Node temp = head, prev = null;

            if(temp != null && temp.data == key){
                head = temp.next;
                return;
            }

            while(temp != null && temp.data != key){
                prev = temp;
                temp = temp.next;
            }
            prev.next = temp.next;
        }
        public void delAtPos(int pos){
            Node temp = head;
            if(head == null){
                return;
            }
            if(pos == 0){
                head = temp.next;
            }

            for(int i = 0; temp != null && i < pos-1; i++){
                temp = temp.next;
            }

            if(temp != null && temp.next != null){
                return;
            }
            temp.next = temp.next.next;

        }
        public void printLinkedList(){
            Node temp = head;
            while(temp != null){
                System.out.println(temp.data + " ");
                temp = temp.next;
            }

        }
   
   
    public static void main(String[] args){
        
        LinkedList ll = new LinkedList();
        ll.addBeg(2);
        ll.addBeg(9);
        ll.addBeg(10);
        ll.addBeg(3);
        ll.delAtPos(0);
        ll.addEnd(85);
        ll.addAfter(ll.head.next.next, 23);
        ll.printLinkedList();
        
    }
}