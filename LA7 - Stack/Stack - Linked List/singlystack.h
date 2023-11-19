// TODO implement the class SinglyStack here
// by inheriting the Stack class
#include <cstdlib>
#include <iostream>
#include "stack.h"
#include "node.h"
using namespace std;


class SinglyStack : public Stack {
    node* _top;
    int _size;

    void push(int num) {
        node* n = (node*) calloc( 1, sizeof(node) );
		n->elem = num;

		if (_size == 0) {
			_top = n;
		} else {
			n->next = _top;
			_top = n;
		}

		_size++;
    }

	int pop() {
        if(_size==0) {
            return 0;
        }
        int elem = _top->elem;
		_top = _top->next;
		_size--;

		return elem;
    }

	int top() {
        if(_size!=0) {
            return _top->elem;
        }

        return 0;
    }

	int size() {
        return _size;
    }

	bool isEmpty() {
        if(_size>0) {
            return false;
        }
        return true;

    }

	void print() {
        node* curr = _top;

    	if (_size == 0) {
    		cout << "Empty" << endl;
		}
		else {
	    	do {
	    		cout << curr->elem;
	    		if (curr->next) {
	    			cout << " -> ";
				} else {
					cout << endl;
				}
	    		curr = curr->next;
			} while (curr);
		}
    }
};
