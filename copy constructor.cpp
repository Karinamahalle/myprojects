#include <iostream>
#include <cstring>

class Test {
 public:
    int modelNumber;
    char *modelName;
    static int chassisNumber;
    const int engineNumber;

    // Parameterized constructor
    Test(int model, const char *name, int engine) 
	     : modelNumber(model), engineNumber(engine) {
        modelName = new char[strlen(name) + 1];
        strcpy(modelName, name);
    }

    // Copy constructor (deep copy)
    Test(const Test &other) 
	    : modelNumber(other.modelNumber), engineNumber(other.engineNumber) {
	    	//Deep copy for modelName
        modelName = new char[strlen(other.modelName) + 1];
        strcpy(modelName, other.modelName);
    }

    // Assignment operator
    Test& operator=(const Test &other) {
        if (this != &other) {
        	// Deep copy for modelName
            delete[] modelName;
            // Copy modelNumber and engineNumber
            modelNumber = other.modelNumber;
            modelName = new char[strlen(other.modelName) + 1];
            strcpy(modelName, other.modelName);
        }
        return *this;
    }

            void print()
            {
             cout << "Model Name: " << modelName << endl;
             cout << "Model Number: " << modelNumber << endl;
             cout << "Chassis Number:" << chasisNumber << endl;
             cout << "Engine Number:" << engineNumber << endl;
           }
          
           ~Test()
           {
           	delete[]modelName;
           	cout << "Destructor" << endl; 
		   }
  	};



