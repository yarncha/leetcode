class Solution {
public:
    void deleteNode(ListNode* node) {
        // 지울 노드가 항상 마지막 노드(tail node)가 아니라고 했으니, 그냥 다음 노드의 val과 next로 바꿔줌
        node->val = (node->next)->val;
        node->next = (node->next)->next;
    }
};