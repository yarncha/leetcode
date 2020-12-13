struct ListNode {
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
public:
	// reverse ListNode recursively
	// 100% runtime

	ListNode* reverseList(ListNode* head) {
		if (head == nullptr || head->next == nullptr)
		{
			return head;
		}

		// 현재 노드를 기점으로 뒤집힌 노드를 가져옴
		// 1-2-3(head)-4-5-nullptr이었다면
		// reversed_node는 5-4-nullptr
		ListNode* reversed_node = reverseList(head->next);

		// head->next는 4이므로 4 다음에 현재 head를 연결시켜주고
		// 현재 head의 next를 삭제
		// 즉, return하는 reversed_node는 5-4-3(head)-nullptr가 된다
		// 이때 중요한 것은 3(head)의 pointer값을 유지하면서 새로 만들지 않고 작성해야 다음에 추가할 곳을 찾을 수 있음
		ListNode* next_node = head->next;
		next_node->next = head;
		head->next = nullptr;

		return reversed_node;
	}
};