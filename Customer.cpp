// Simon Liu
// CSC 306 - Term Project Phase 1
// 04-17-2018
// Customer class

#include "Customer.h"

/* Variables
 * string fname, lname
 * string street, city, state
 * int zip, customerID
 */

// constructors and destructor

/**
 * Default constructor for customer
 */
Customer::Customer() {
    
    fname = "N/A";
    lname = "N/A";
    street = "N/A";
    city = "N/A";
    state = "N/A";
    zip = 11111;
    customerID = 0;
    
} // end of Customer (default)

/**
 * Constructor for a new customer
 * @param fn: first name of customer
 * @param ln: last name of the customer
 * @param strt: street address of customer
 * @param cit: city of customer
 * @param st: state of customer
 * @param z: zip code of customer
 * @param id: customer id
 */
Customer::Customer(std::string fn, std::string ln, std::string strt, std::string cit, std::string st, int z, int id) {
    
    fname = fn;
    lname = ln;
    street = strt;
    city = cit;
    state = st;
    zip = z;
    customerID = id;
    
} // end of Customer

/**
 * Copy constructor for customer
 * @param orig: the customer we are copying;
 */
Customer::Customer(const Customer& orig) {
    
    this->fname = orig.fname;
    this->lname = orig.lname;
    this->street = orig.street;
    this->city = orig.city;
    this->state = orig.state;
    this->zip = orig.zip;
    this->customerID = orig.customerID;
    
} // end of Customer (copy)

Customer::~Customer() {
    
    // do nothing for now
    
} // end of ~Customer (destructor)

// set functions

/**
 * Function setName
 * sets a customer's first and last name
 * @param fn
 * @param ln
 */
void Customer::setName(std::string fn, std::string ln) {
    
    fname = fn;
    lname = ln;
    
} // end of setName

/**
 * Function setAddress
 * sets a customer's whole address, street, city, state, zip code
 * @param strt
 * @param cit
 * @param st
 * @param z
 */
void Customer::setAddress(std::string strt, std::string cit, std::string st, int z) {
    
    street = strt;
    city = cit;
    state = st;
    zip = z;
    
} // end of setAddress

/**
 * Function setID
 * sets a customer's customer id
 * @param id
 */
void Customer::setID(int id) {
    
    customerID = id;
    
} // end of setID

// get functions

std::string Customer::getFName() {
    return fname;
}

std::string Customer::getLName() {
    return lname;
}

std::string Customer::getStreet() {
    return street;
}

std::string Customer::getCity() {
    return city;
}

std::string Customer::getState() {
    return state;
}

int Customer::getZip() {
    return zip;
}

int Customer::getID() {
    return customerID;
}