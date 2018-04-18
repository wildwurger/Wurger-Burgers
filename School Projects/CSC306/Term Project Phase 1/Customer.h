// Simon Liu
// CSC 306 - Term Project Phase 1
// 04-17-2018
// Header file for customer class

#ifndef CUSTOMER_H
#define CUSTOMER_H

class Customer {
    
public:
    
    // constructors
    Customer();
    Customer(std::string fname, std::string lname, std::string street, std::string city,
             std::string state, int zip, int customerID);
    Customer(const Customer& orig);
    
    // destructor
    virtual ~Customer();
    
    // customer functions
    setName(std::string fname, std::string lname);
    setAddress(std::string street, std::string city, std::string city, std::string state, int zip);
    setID(int customerID);
    std::string getFName();
    std::string getLName();
    std::string getStreet();
    std::string getCity();
    std::string getState();
    int getZip();
    int getID();
    
private:

    std::string fname;
    std::string lname;
    std::string street;
    std::string city;
    std::string state;
    int zip;
    int customerID;
    
};

#endif /* CUSTOMER_H */

