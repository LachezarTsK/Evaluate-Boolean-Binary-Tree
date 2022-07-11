
/**
 * @param {TreeNode} root
 * @return {boolean}
 */
var evaluateTree = function (root) {
    if (root.val === 0) {
        return false;
    }
    if (root.val === 1) {
        return true;
    }

    let left = evaluateTree(root.left);
    let right = evaluateTree(root.right);
    return root.val === 2 ? (left || right) : (left && right);
};

/*
 Function TreeNode is in-built in the solution file on leetcode.com. 
 When running the code on the website, do not include this function.
 */
function TreeNode(val, left, right) {
    this.val = (val === undefined ? 0 : val);
    this.left = (left === undefined ? null : left);
    this.right = (right === undefined ? null : right);
}
