#include <bits/stdc++.h>
class LRUCache {
public:
  class node {
  public:
    int key, val;
    node *next, *prev;
    node(int k, int v) {
      key = k;
      val = v;
    }
  };
  unordered_map<int, node *> m;
  node *head = new node(-1, -1);
  node *tail = new node(-1, -1);
  int cap;
  LRUCache(int capacity) {
    // Write your code here
    cap = capacity;
    head->next = tail;
    tail->prev = head;
  }

  void addnode(node *gg) {
    node *temp = head->next;
    gg->next = temp;
    gg->prev = head;
    head->next = gg;
    temp->prev = gg;
  }

  void deletenode(node *gg) {
    node *gg_n = gg->next;
    node *gg_p = gg->prev;
    gg_p->next = gg_n;
    gg_n->prev = gg_p;
  }

  int get(int key) {
    // Write your code here
    if (m.find(key) != m.end()) {
      node *resnode = m[key];
      int res = resnode->val;
      m.erase(key);
      deletenode(resnode);
      addnode(resnode);
      m[key] = head->next;
      return res;
    }
    return -1;
  }

  void put(int key, int value) {
    // Write your code here
    if (m.find(key) != m.end()) {
      node *resnode = m[key];
      m.erase(key);
      deletenode(resnode);
    }
    if (m.size() == cap) {
      m.erase(tail->prev->key);
      deletenode(tail->prev);
    }
    addnode(new node(key, value));
    m[key] = head->next;
  }
};

