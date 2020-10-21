# Linked List

Implementation of a linked list in c++.

<h2>Class Methods</h2>
<h3> Add Method </h3>
    Add a item on last position list
<h3> Remove Method </h3>
    Remove a item on indicate position
<h3> Get Method </h3>
    Return a item on indicate position
<h3> Size Method </h3>
    Return the size list
<h3> Empty Method </h3>
    Return true, case list is empty.
    Return false, case list is not empty

<h2>Use example</h2>

```
    void example(){
        LinkedList<int> list;
        list.add(1);
        list.add(2);
        int x = list.get(0);
        list.remove(0);
    }
```