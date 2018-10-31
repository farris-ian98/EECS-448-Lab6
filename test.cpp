#include "test.h"
#include <iostream>
#include <vector>
using namespace std;

test::test()
{
}

void test::runTests()
{
  if (test1() == true){
		cout << "Empty list isEmpty is true: Passed\n";
	}
  else{
    cout << "Empty list size is true: Failed\n";
  }
  if (test2() == true){
		cout << "Empty list size is 0: Passed\n";
	}
  else{
    cout << "Empty list size is 0: Failed\n";
  }
  if (test3() == true){
		cout << "addBack adds to the back of list: Passed\n";
	}
  else{
    cout << "addBack adds to the back of list: Failed\n";
  }
  if (test4() == true){
		cout << "addFront adds to the front of list: Passed\n";
	}
  else{
    cout << "addFront adds to the front of list: Failed\n";
  }
  if (test5() == true){
		cout << "size increments when adding to the front: Passed\n";
	}
  else{
    cout << "size increments when adding to the front: Failed\n";
  }
  if (test6() == true){
		cout << "size increments when adding to the back: Passed\n";
	}
  else{
    cout << "size increments when adding to the back: Failed\n";
  }
  if (test7() == true){
		cout << "search returns false if element is not in list: Passed\n";
	}
  else{
    cout << "search returns false if element is not in list: Failed\n";
  }
  if (test8() == true){
		cout << "search returns true if element is in list: Passed\n";
	}
  else{
    cout << "search returns true if element is in list: Failed\n";
  }
  if (test9() == true){
		cout << "removeFront decrements the list size: Passed\n";
	}
  else{
    cout << "removeFront decrements the list size: Failed\n";
  }
  if (test10() == true){
		cout << "removeBack decrements the list size: Passed\n";
	}
  else{
    cout << "removeBack decrements the list size: Failed\n";
  }
  if (test11() == true){
		cout << "removeBack removes the back element of the list: Passed\n";
	}
  else{
    cout << "removeBack removes the back element of the list: Failed\n";
  }
  if (test12() == true){
		cout << "removeFront removes the front element of the list: Passed\n";
	}
  else{
    cout << "removeFront removes the front element of the list: Failed\n";
  }
  if (test13() == true){
		cout << "isEmpty returns false on a list with values: Passed\n";
	}
  else{
    cout << "isEmpty returns false on a list with values: Failed\n";
  }
  if (test14() == true){
		cout << "size of list returns proper number: Passed\n";
	}
  else{
    cout << "size of list returns proper number: Failed\n";
  }
}

bool test::test1(){
  bool passed;
  LinkedListOfInts* m_ll = new LinkedListOfInts;
  passed = m_ll->isEmpty();
  delete m_ll;
  return passed;
}

bool test::test2(){
  bool passed;
  LinkedListOfInts* m_ll = new LinkedListOfInts;
  if (m_ll->size() == 0){
    passed = true;
  }
  else{
    passed = false;
  }
  delete m_ll;
  return passed;
}

bool test::test3(){
  bool passed;
  vector<int> v1;
  v1.push_back(3);
  v1.push_back(2);
  v1.push_back(1);

  LinkedListOfInts* m_ll = new LinkedListOfInts;
  m_ll->addBack(3);
  m_ll->addBack(2);
  m_ll->addBack(1);

  if(v1 == m_ll->toVector()){
    passed = true;
  }
  else{
    passed = false;
  }
  delete m_ll;
  return passed;
}

bool test::test4(){
  bool passed;
  vector<int> v1;
  v1.push_back(1);
  v1.push_back(2);
  v1.push_back(3);

  LinkedListOfInts* m_ll = new LinkedListOfInts;
  m_ll->addFront(3);
  m_ll->addFront(2);
  m_ll->addFront(1);

  if(v1 == m_ll->toVector()){
    passed = true;
  }
  else{
    passed = false;
  }
  delete m_ll;
  return passed;
}

bool test::test5(){
  bool passed;
  LinkedListOfInts* m_ll = new LinkedListOfInts;
  m_ll->addFront(3);
  m_ll->addFront(2);
  m_ll->addFront(1);


  if(m_ll->size() == 3){
    passed = true;
  }
  else{
    passed = false;
  }
  delete m_ll;
  return passed;
}

bool test::test6(){
  bool passed;
  LinkedListOfInts* m_ll = new LinkedListOfInts;
  m_ll->addBack(3);
  m_ll->addBack(2);
  m_ll->addBack(1);

  if(m_ll->size() == 3){
    passed = true;
  }
  else{
    passed = false;
  }
  delete m_ll;
  return passed;
}

bool test::test7(){
  LinkedListOfInts* m_ll = new LinkedListOfInts;
  m_ll->addFront(3);
  m_ll->addFront(2);
  m_ll->addFront(1);

  if(m_ll->search(5) == false){
    delete m_ll;
    return true;
  }
  else{
    delete m_ll;
    return false;
  }
}

bool test::test8(){
  LinkedListOfInts* m_ll = new LinkedListOfInts;
  m_ll->addFront(3);
  m_ll->addFront(2);
  m_ll->addFront(1);

  if(m_ll->search(3) == true){
    delete m_ll;
    return true;
  }
  else{
    delete m_ll;
    return false;
  }
}

bool test::test9(){

  LinkedListOfInts* m_ll = new LinkedListOfInts;
  m_ll->addFront(3);
  m_ll->addFront(2);
  m_ll->addFront(1);
  m_ll->removeFront();

  if(m_ll->size() == 2){
    delete m_ll;
    return true;
  }
  else{
    delete m_ll;
    return false;
  }

}

bool test::test10(){

  LinkedListOfInts* m_ll = new LinkedListOfInts;
  m_ll->addFront(3);
  m_ll->addFront(2);
  m_ll->addFront(1);
  m_ll->removeBack();
  if(m_ll->size() == 2){
    delete m_ll;
    return true;
  }
  else{
    delete m_ll;
    return false;
  }

}

bool test::test11(){
  vector<int> v1;
  v1.push_back(1);
  v1.push_back(2);
  LinkedListOfInts* m_ll = new LinkedListOfInts;

  m_ll->addFront(3);
  m_ll->addFront(2);
  m_ll->addFront(1);
  m_ll->removeBack();

  if(v1 == m_ll->toVector()){
    delete m_ll;
    return true;
  }
  else{
    delete m_ll;
    return false;
  }

}

bool test::test12(){

  vector<int> v1;
  v1.push_back(2);
  v1.push_back(3);
  LinkedListOfInts* m_ll = new LinkedListOfInts;
  m_ll->addFront(3);
  m_ll->addFront(2);
  m_ll->addFront(1);
  m_ll->removeFront();
  if(v1 == m_ll->toVector()){
    delete m_ll;
    return true;
  }
  else{
    delete m_ll;
    return false;
  }
}

bool test::test13(){
  LinkedListOfInts* m_ll = new LinkedListOfInts;
  m_ll->addFront(3);
  m_ll->addFront(2);
  m_ll->addFront(1);
  if(m_ll->isEmpty() == false){
    delete m_ll;
    return true;
  }
  else{
    delete m_ll;
    return false;
  }
}

bool test::test14(){
  LinkedListOfInts* m_ll = new LinkedListOfInts;
  m_ll->addFront(3);
  m_ll->addFront(2);
  m_ll->addFront(1);
  if(m_ll->size() == 3){
    delete m_ll;
    return true;
  }
  else{
    delete m_ll;
    return false;
  }
}
