# Construct Binary Search Tree from A Sorted Array

通过一个排序了的数组构建一个二叉查找树！<br>
这个题使用反向的二叉查找解决：<br>
[1 2 3 4 5]

这个题的思想是很简单的，通过一个简单的例子加上伪代码来表示这样的一个变化情况：
low = 0 , high = 4 -> mid = 2 
TreeNode node = new TreeNode(mid);
node.left = recursiveHelper(nums,low ,mid -1);
node.right = recursiveHelper(nums,mid + 1, high);


```
public TreeNode sortedArrayToBST(int[] num) {
    if (num.length == 0) {
        return null;
    }
    TreeNode head = helper(num, 0, num.length - 1);
    return head;
}

public TreeNode helper(int[] num, int low, int high) {
    if (low > high) { // Done
        return null;
    }
    int mid = (low + high) / 2;
    TreeNode node = new TreeNode(num[mid]);
    node.left = helper(num, low, mid - 1);
    node.right = helper(num, mid + 1, high);
    return node;
}
```