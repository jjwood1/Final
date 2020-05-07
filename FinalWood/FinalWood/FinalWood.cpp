#include <iostream>
#include <array>

const int STACK_SIZE = 10;
const int TRANS_SIZE = 100;
class Date {
public:
    int year;
    int month;
    int day;
    Date(){

    }
    Date(int year2, int month2, int day2) {
        year = year2;
        month = month2;
        day = day2;
    }
    void setYear(int year1)
    {
        year = year1;
    }
    void setMonth(int month1)
    {
        month = month1;
    }
    void setDay(int day1)
    {
        day = day1;
    }
};

class Bottle {
public:

    int ID;
    double price;
    std::string type;
 
    Bottle() {

    }
    Bottle(int lastID, std::string type1, double cost1) {
        ID = lastID + 1;
        type = type1;
        price = cost1;
       
    }
    int getID() {
        return ID;
    }
    double getPrice() {
        return price;
    }
    std::string getType() {
        return type;
    }

};
class Transactions {
public:
    int TransactionID;
    Bottle item;
    Date time;
    
    Transactions()
    {
       
        
    }
  
    Transactions(int LastID, Bottle data) {
        TransactionID = LastID + 1;
        item = data;
        
    }
   // Transactions(const Transactions&);
    
    //Transactions& operator=(const Transactions& a);
    Date getDate() {
        return time;
    }
    int getTrans() {
        return TransactionID;
    }
    void setID(int newID)
    {
        TransactionID = newID;
    }
};
class stack {
public:

    int topOfStack;
    Bottle array1[STACK_SIZE];

    stack() {
        topOfStack = -1;
    }
    void push(Bottle item)
    {
        if (topOfStack >= (STACK_SIZE - 1))
        {
            return;
        }
        else {
            array1[++topOfStack] = item;
        }
    }
    Bottle pop() {
        Date hf(1, 1, 1);
        Bottle failed(0, "Stack is empty", 0.0);
        if (topOfStack < 0)
        {
            return failed;
        }
        else {
            Bottle item = array1[topOfStack--];
            return item;
        }
    }
};
class Node {
public:
    int link;
    Transactions Trans;
    
    Node() {

    }
    Node(int link1, Transactions Trans1)
    {
        link = link1 + 1;
        Trans = Trans1;
    }
    
    int getLink() {
        return link;
    }
    Date getDate() {
        return Trans.getDate();
    }
    Transactions getTransactions()
    {
        return Trans;
     
    }
    int getTrans()
    {
        return Trans.getTrans();
    }
};
class list {
public:
    int TopOfList;
    Node Array1[TRANS_SIZE];
    list() {
        TopOfList = -1;
    }
    void insert(Node item) {
        if (TopOfList >= (TRANS_SIZE - 1))
        {
            return;
        }
        else {
            Array1[++TopOfList] = item;
        }
    }
    Node find(int id)
    {
        for (int i = 0; i < TopOfList; i++)
        {
            if (i == Array1[i].getLink())
            {
                if (id == Array1[i].getTrans())
                {
                    return Array1[i];
                }
                else {

                }
            }
            
        }
    }
};
int main()
{
    
    std::cout << "Hello World!\n";
    Bottle yuh(0, "Pepsi", 1.00);
    
    Bottle ay(yuh.getID(), "Pepsi", 1.00);
    Bottle ay1(ay.getID(), "Pepsi", 1.00);
    Bottle ay2(ay1.getID(), "Pepsi", 1.00);
    Bottle ay3(ay2.getID(), "Pepsi", 1.00);
    Bottle ay4(ay3.getID(), "Pepsi", 1.00);
    Bottle ay5(ay4.getID(), "Pepsi", 1.00);
    Bottle ay6(ay5.getID(), "Pepsi", 1.00);
    Bottle ay7(ay6.getID(), "Pepsi", 1.00);
    Bottle ay8(ay7.getID(), "Pepsi", 1.00);
    Bottle ay9(ay8.getID(), "Pepsi", 1.00);
    Bottle ay10(ay9.getID(), "Pepsi", 1.00);
    Bottle ay11(ay10.getID(), "Pepsi", 1.00);

    
    stack f;
    f.push(yuh);
    f.push(ay);
    f.push(ay1);
    f.push(ay2);
    f.push(ay3);
    f.push(ay4);

    f.push(ay5);
    f.push(ay6);
    f.push(ay7);
    f.push(ay8);
    f.push(ay9);
    f.push(ay10);
    f.push(ay11);
    Bottle ay12(ay11.getID(), "Pepsi", 1.00);
    Bottle ay13(ay12.getID(), "Pepsi", 1.00);
    Bottle ay14(ay13.getID(), "Pepsi", 1.00);
    Bottle ay15(ay14.getID(), "Pepsi", 1.00);
    Bottle ay16(ay15.getID(), "Pepsi", 1.00);
    Bottle ay17(ay16.getID(), "Pepsi", 1.00);
    Bottle ay18(ay17.getID(), "Pepsi", 1.00);
    Date fe(2020, 3, 4);
    Date fe2(2020, 3, 5);
    Date fe3(2020, 3, 6);
  
    Transactions k(0,ay12);
    Transactions k1(k.getTrans(), ay13);
    Transactions k2(k1.getTrans(), ay14);
    Transactions k3(k2.getTrans(), ay15);
    Transactions k4(k3.getTrans(), ay16);
    Transactions k5(k4.getTrans(), ay17);
    Transactions k6(k5.getTrans(), ay18);
    Node q(0, k);
    Node q1(q.getLink(), k1);
    Node q2(q1.getLink(), k2);
    Node q3(q2.getLink(), k3);
    Node q4(q3.getLink(), k4);
    Node q5(q4.getLink(), k5);
    Node q6(q5.getLink(), k6);
    list l;
    l.insert(q);
    l.insert(q1);
    l.insert(q2);
    l.insert(q3);
    l.insert(q4);
    l.insert(q5);
    l.insert(q6);
    std::cout << ay.getID() << std::endl;
    Node gg = l.find(3);
    Transactions grgr(k6.getTrans(), ay12);
    gg.getTransactions();
    
    std::cout << gg.getTrans() << std::endl;
    
    
}

