
void test_integer_queue() {

    cout << "Test integer queue" << endl;
    DataStruct<int> *q1 = new queue::Queue<int>();
    cout << *q1;
    q1->push(1);
    cout << *q1;
    q1->push(2);
    cout << *q1;
    q1->push(3);
    
    queue::Queue<int>* q1_ptr= dynamic_cast<queue::Queue<int>*>(q1);
    queue::Queue<int> q1_copy(*q1_ptr);

    cout << *q1;
    q1->push(4);
    cout << *q1;

    queue::Queue<int> *q1_params = new queue::Queue<int>(q1->get_elems(), q1->get_no_elems());

    q1->pop();
    cout << *q1;
    q1->pop();
    cout << *q1;
    q1->pop();
    cout << *q1;
    q1->pop();
    cout << *q1;
    q1->pop();
    cout << *q1 << endl;

    cout << "Integer queue copy " << endl;
    cout << q1_copy << endl;
    cout << "Integer queue param constructor " << endl;
    cout << *q1_params << endl;
}

void test_string_queue() {
    cout << "Test string queue" << endl;
    queue::Queue<string> *q2 = new queue::Queue<string>();
    cout << *q2;
    q2->push("Marian");
    cout << *q2;
    q2->push("Petrisor");

    queue::Queue<string> *q2_params = new queue::Queue<string>(q2->get_elems(), q2->get_no_elems());
    
    cout << *q2;
    q2->push("Paraschivescu");

    queue::Queue<string>* q2_ptr= dynamic_cast<queue::Queue<string>*>(q2);
    queue::Queue<string> q2_copy(*q2_ptr);

    cout << *q2;
    q2->push("11120");
    cout << *q2;
    q2->pop();
    cout << *q2;
    q2->pop();
    cout << *q2;
    q2->pop();
    cout << *q2;
    q2->pop();
    cout << *q2;
    q2->pop();
    cout << *q2 << endl;

    cout << "String queue copy " << endl;
    cout << q2_copy << endl;
    cout << "String queue param constructor " << endl;
    cout << *q2_params << endl;
 }

void test_float_queue() {
    cout << "Test float queue" << endl;
    queue::Queue<float> *q3 = new queue::Queue<float>();

    cout << *q3;
    q3->push(1.2);
    cout << *q3;
    q3->push(0.32);
    cout << *q3;
    q3->push(0.54);
    cout << *q3;
    q3->push(0.3);
    cout << *q3;
    q3->pop();
    cout << *q3;

    queue::Queue<float>* q3_ptr= dynamic_cast<queue::Queue<float>*>(q3);
    queue::Queue<float> q3_copy(*q3_ptr);

    q3->pop();
    cout << *q3;

    queue::Queue<float> *q3_params = new queue::Queue<float>(q3->get_elems(), q3->get_no_elems());

    q3->pop();
    cout << *q3;
    q3->pop();
    cout << *q3;
    q3->pop();
    cout << *q3 << endl;

    cout << "Float queue param constructor " << endl;
    cout << *q3_params << endl;
    cout << "Float queue copy " << endl;
    cout << q3_copy << endl;
}

void test_queue() {
    test_integer_queue();
    test_string_queue();
    test_float_queue();
}

void test_integer_stack() {
    cout << "Test integer stack" << endl;
    stack::Stack<int> *s1 = new stack::Stack<int>();
    cout << *s1;
    s1->push(1);
    cout << *s1;
    s1->push(2);
    cout << *s1;
    s1->push(3);

    stack::Stack<int>* s1_ptr= dynamic_cast<stack::Stack<int>*>(s1);
    stack::Stack<int> s1_copy(*s1_ptr);

    cout << *s1;
    s1->push(4);
    cout << *s1;
    s1->pop();
    cout << *s1;
    s1->pop();
    cout << *s1;
    s1->pop();
    cout << *s1;
    s1->pop();
    cout << *s1;
    s1->pop();
    cout << *s1 << endl;

    cout << "Integer stack copy " << endl;
    cout << s1_copy << endl;
}

void test_string_stack() {
    cout << "Test string stack" << endl;
    stack::Stack<string> *s2 = new stack::Stack<string>();
    cout << *s2;
    s2->push("Marian");
    cout << *s2;
    s2->push("Petrisor");
    cout << *s2;
    s2->push("Paraschivescu");

    stack::Stack<string>* s2_ptr= dynamic_cast<stack::Stack<string>*>(s2);
    stack::Stack<string> s2_copy(*s2_ptr);

    cout << *s2;
    s2->push("11120");
    cout << *s2;
    s2->pop();
    cout << *s2;
    s2->pop();
    cout << *s2;
    s2->pop();
    cout << *s2;
    s2->pop();
    cout << *s2;
    s2->pop();
    cout << *s2 << endl;
    cout << "String stack copy " << endl;
    cout << s2_copy << endl;
}

void test_float_stack() {
    cout << "Test float stack" << endl;
    stack::Stack<float> *s3 = new stack::Stack<float>();
    cout << *s3;
    s3->push(1.2);
    cout << *s3;
    s3->push(0.32);
    cout << *s3;
    s3->push(0.54);
    cout << *s3;
    s3->push(0.3);
    cout << *s3;
    s3->pop();
    cout << *s3;

    stack::Stack<float>* s3_ptr= dynamic_cast<stack::Stack<float>*>(s3);
    stack::Stack<float> s3_copy(*s3_ptr);
    
    s3->pop();
    cout << *s3;
    s3->pop();
    cout << *s3;
    s3->pop();
    cout << *s3;
    s3->pop();
    cout << *s3 << endl;
    cout << "Float stack copy " << endl;
    cout << s3_copy << endl;    
}

void test_stack() {
    test_integer_stack();
    test_string_stack();
    test_float_stack();
}

void test() {
    test_queue();
    test_stack();
}
