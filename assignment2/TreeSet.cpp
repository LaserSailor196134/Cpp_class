#include <iostream>
#include <string>
#include "TreeSet.h"

using namespace std;

//Beginning of TreeNode class
TreeNode::TreeNode(const string& value_){
	value = value_;
	left = NULL;
	right = NULL;
}

TreeNode::~TreeNode(){
	if(left != NULL){
		delete(left);
		left = NULL;
	}
	if(right != NULL){
		delete(right);
		right = NULL;
	}
}

string TreeNode::getValue(){
	return value;
}

//end of TreeNode class

TreeSet::TreeSet(){
	root = NULL;
	size_ = 0;
}

TreeSet::TreeSet(string sa[], int len){
	for(int i = 0; i < len; i++){
		add(sa[i]);
	}
}

TreeSet::TreeSet(const TreeSet& tree){
	root->getValue() = tree.root->getValue();
	localTreeSet(root, tree.root);
}

void TreeSet::localTreeSet(TreeNode*& copy, const TreeNode* tree){
	if(tree->left != NULL){
		copy->left = new TreeNode(tree->left->getValue());
		localTreeSet(copy->left, tree->left);
	}
	if(tree->right != NULL){
		copy->right = new TreeNode(tree->right->getValue());
		localTreeSet(copy->right, tree->right);
	}
}

TreeSet::~TreeSet(){
	delete(root);
	root = NULL;
}

bool TreeSet::add(const string& s){
	if(root == NULL){
		root = new TreeNode(s);//this line of code causes a segmentation fault, I have no idea why
		size_++;
		return true;
	}else{
		return(localAdd(s, root));
	}
}

bool TreeSet::localAdd(const string& s, TreeNode* localRoot){
	if(s.compare(localRoot->getValue()) == 0){
		return false;
	}
	if(s.compare(localRoot->getValue()) > 0){
		if(localRoot->right == NULL){
			localRoot->right = new TreeNode(s);
			size_++;
			return true;
		}else{
			return localAdd(s, localRoot->right);
		}
	}
	if(s.compare(localRoot->getValue()) < 0){
		if(localRoot->left == NULL){
			localRoot->left = new TreeNode(s);
			size_++;
			return true;
		}else{
			return localAdd(s, localRoot->left);
		}
	}
	return false;
}

void TreeSet::clear(){
	delete(root);
	root = NULL;
	size_ = 0;
}

bool TreeSet::isempty(){
	if(root == NULL){
		return true;
	}
	return false;
}

bool TreeSet::remove(const string& s){//toarray the set, clear the set, for i in set; add to set
	if(root == NULL){
		return false;
	}
	string* set = new string[size_];
	bool isInSet = false;
	for(int i = 0; i < size_; i++){
		if(set[i] == s){
			set[i] = set[(i + 1) % size_];
			isInSet = true;
		}
	}
	if(isInSet == false){
		return false;
	}
	clear();
	for(int i = 0; i < size_; i++){
		add(set[i]);
	}
	delete[] set;
	return true;
}

int TreeSet::size(){
	return size_;
}

int TreeSet::toArray(string sa[]){
	localToArray(sa, root, 0);
	return size_;
}

void TreeSet::localToArray(string sa[], TreeNode* localRoot, int counter){
	if(localRoot->left != NULL){
		localToArray(sa, localRoot->left, counter);
	}
	sa[counter] = localRoot->getValue();
	counter++;
	if(localRoot->right != NULL){
		localToArray(sa, localRoot->left, counter);
	}
}

int main(){
	cout <<"this sucks";
	TreeSet tree = TreeSet();
	cout <<"I hate c++";
	tree.add("shid");
	delete tree.root;

}
