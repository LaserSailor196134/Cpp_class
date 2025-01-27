#include <iostream>
#include <string>

using namespace std;

class TreeNode{
	public:
		TreeNode(const string&);
		TreeNode* left;
		TreeNode* right;
		~TreeNode();
		string getValue();
	private:
		string value;
};

class TreeSet{
	public:
		TreeSet();
		TreeSet(string*, int);
		TreeSet(const TreeSet&);
		~TreeSet();
		bool add(const string&);
		void clear();
		bool isempty();
		bool remove(const string&);
		int size();
		int toArray(string*);
		TreeNode* root;
		int size_;
	private:
		bool localAdd(const string&, TreeNode*);
		void localToArray(string*, TreeNode*, int);
		void localTreeSet(TreeNode*&, const TreeNode*);
};

