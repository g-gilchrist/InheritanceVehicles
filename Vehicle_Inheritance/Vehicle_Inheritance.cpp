#include <string>
#include <iostream>
#include <ios>
#include <limits>

using namespace std;

class Vehicle {
public:
    void setMake(string make) {
        Make = make;
    }
    void setModel(string model) {
        Model = model;
    }
    void setYear(int year) {
        Year = year;
    }
    void setDriveTrain(string dt) {
        DriveTrain = dt;
    }
    void setEngine(string eng) {
        Engine = eng;
    }
    void setTransmission(string trans) {
        Transmission = trans;
    }
    void setMPG(int mpg) {
        MPG = mpg;
    }
    void setNumDoors(int doors) {
        NumDoors = doors;
    }
    void setNumSeats(int seats) {
        NumSeats = seats;
    }
    void setConvertible(bool conv) {
        SoftTop = conv;
    }

protected:
    string Make;
    string Model;
    int Year;
    string DriveTrain;
    string Engine;
    string Transmission;
    int MPG;
    int NumDoors;
    int NumSeats;
    bool SoftTop;
};

class Sedan : public Vehicle {
public:

    void getSedan() {
        cout << endl << "-------------------------------------------------- \n\n";
        cout << "Sedan: \n\n";
        cout << "Make: " << Make << endl;
        cout << "Model: " << Model << endl;
        cout << "Year: " << Year << endl;
        cout << "Drive Train: " << DriveTrain << endl;
        cout << "Engine: " << Engine << endl;
        cout << "Transmission: " << Transmission << endl;
        cout << "MPG: " << MPG << endl;
        cout << "Number of Doors: " << NumDoors << endl;
        cout << "Number of Seats " << NumSeats << endl;
        if (SoftTop == true) {
            cout << "Convertible: Yes \n\n";
        }
        else {
            cout << "Convertible: No \n\n";
        }
        cout << "-------------------------------------------------- \n\n";
    }

};

class Minivan : public Vehicle {
public:

    void getMinivan() {
        cout << endl << "-------------------------------------------------- \n\n";
        cout << "Minivan: \n\n";
        cout << "Make: " << Make << endl;
        cout << "Model: " << Model << endl;
        cout << "Year: " << Year << endl;
        cout << "Drive Train: " << DriveTrain << endl;
        cout << "Engine: " << Engine << endl;
        cout << "Transmission: " << Transmission << endl;
        cout << "MPG: " << MPG << endl;
        cout << "Number of Doors: " << NumDoors << endl;
        cout << "Number of Seats " << NumSeats << endl;
        if (SoftTop == true) {
            cout << "Convertible: Yes \n\n";
        }
        else {
            cout << "Convertible: No \n\n";
        }
        cout << "-------------------------------------------------- \n\n";
    }
};

class Crossover : public Vehicle {
public:

    void getCrossover() {
        cout << endl << "-------------------------------------------------- \n\n";
        cout << "Crossover: \n\n";
        cout << "Make: " << Make << endl;
        cout << "Model: " << Model << endl;
        cout << "Year: " << Year << endl;
        cout << "Drive Train: " << DriveTrain << endl;
        cout << "Engine: " << Engine << endl;
        cout << "Transmission: " << Transmission << endl;
        cout << "MPG: " << MPG << endl;
        cout << "Number of Doors: " << NumDoors << endl;
        cout << "Number of Seats " << NumSeats << endl;
        if (SoftTop == true) {
            cout << "Convertible: Yes \n\n";
        }
        else {
            cout << "Convertible: No \n\n";
        }
        cout << "-------------------------------------------------- \n\n";
    }
};

class Coupe : public Vehicle {
public:
    void getCoupe() {
        cout << endl << "-------------------------------------------------- \n\n";
        cout << "Coupe: \n\n";
        cout << "Make: " << Make << endl;
        cout << "Model: " << Model << endl;
        cout << "Year: " << Year << endl;
        cout << "Drive Train: " << DriveTrain << endl;
        cout << "Engine: " << Engine << endl;
        cout << "Transmission: " << Transmission << endl;
        cout << "MPG: " << MPG << endl;
        cout << "Number of Doors: " << NumDoors << endl;
        cout << "Number of Seats " << NumSeats << endl;
        if (SoftTop == true) {
            cout << "Convertible: Yes \n\n";
        }
        else {
            cout << "Convertible: No \n\n";
        }
        cout << "-------------------------------------------------- \n\n";
    }

};

class Convertible : public Vehicle {
public:

    void getConvertible() {

        cout << endl << "-------------------------------------------------- \n\n";
        cout << "Convertible: \n\n";
        cout << "Make: " << Make << endl;
        cout << "Model: " << Model << endl;
        cout << "Year: " << Year << endl;
        cout << "Drive Train: " << DriveTrain << endl;
        cout << "Engine: " << Engine << endl;
        cout << "Transmission: " << Transmission << endl;
        cout << "MPG: " << MPG << endl;
        cout << "Number of Doors: " << NumDoors << endl;
        cout << "Number of Seats " << NumSeats << endl;
        if (SoftTop == true) {
            cout << "Convertible: Yes \n\n";
        }
        else {
            cout << "Convertible: No \n\n";
        }
        cout << "-------------------------------------------------- \n\n";
    }

};

int main() {

    //------------------[ Sedan ]------------------------

    Sedan vehicle1;
    vehicle1.setMake("Mazda");
    vehicle1.setModel("3");
    vehicle1.setYear(2020);
    vehicle1.setDriveTrain("All Wheel Drive");
    vehicle1.setEngine("4-cylinder");
    vehicle1.setTransmission("6-Speed Automatic");
    vehicle1.setMPG(27);
    vehicle1.setNumDoors(2);
    vehicle1.setNumSeats(5);
    vehicle1.setConvertible(false);

    //------------------[ Minivan ]------------------------

    Minivan vehicle2;
    vehicle2.setMake("Honda");
    vehicle2.setModel("Odyssey");
    vehicle2.setYear(2018);
    vehicle2.setDriveTrain("Front Wheel Drive");
    vehicle2.setEngine("V6");
    vehicle2.setTransmission("10-Speed Automatic");
    vehicle2.setMPG(19);
    vehicle2.setNumDoors(4);
    vehicle2.setNumSeats(8);
    vehicle2.setConvertible(false);

    //------------------[ Crossover ]------------------------

    Crossover vehicle3;
    vehicle3.setMake("Mazda");
    vehicle3.setModel("CX-5");
    vehicle3.setYear(2018);
    vehicle3.setDriveTrain("All Wheel Drive");
    vehicle3.setEngine("4-cylinder");
    vehicle3.setTransmission("6-Speed Automatic");
    vehicle3.setMPG(25);
    vehicle3.setNumDoors(4);
    vehicle3.setNumSeats(5);
    vehicle3.setConvertible(false);

    //------------------[ Coupe ]------------------------

    Coupe vehicle4;
    vehicle4.setMake("Chevrolet");
    vehicle4.setModel("Corvette");
    vehicle4.setYear(2019);
    vehicle4.setDriveTrain("Rear Wheel Drive");
    vehicle4.setEngine("V8");
    vehicle4.setTransmission("7-Speed Manual");
    vehicle4.setMPG(16);
    vehicle4.setNumDoors(2);
    vehicle4.setNumSeats(2);
    vehicle4.setConvertible(false);

    //------------------[ Convertible ]------------------------

    Convertible vehicle5;
    vehicle5.setMake("Ford");
    vehicle5.setModel("Mustang");
    vehicle5.setYear(2018);
    vehicle5.setDriveTrain("Rear Wheel Drive");
    vehicle5.setEngine("V8");
    vehicle5.setTransmission("6-Speed Automatic");
    vehicle5.setMPG(21);
    vehicle5.setNumDoors(2);
    vehicle5.setNumSeats(5);
    vehicle5.setConvertible(true);

    //-------------------[ Menu ]------------------------------

    int VehiclePicker;

    while (true) {
        try {
            cout << endl << "What Vehicle features would you like to view? \n"
                << "1) Sedan \n"
                << "2) Minivan \n"
                << "3) Crossover \n"
                << "4) Coupe \n"
                << "5) Convertible \n";

            cin >> VehiclePicker;

            if (!cin) {
                throw 1;
            }

            if (VehiclePicker == 1) {
                vehicle1.getSedan();
                break;
            }
            else if (VehiclePicker == 2) {
                vehicle2.getMinivan();
                break;
            }
            else if (VehiclePicker == 3) {
                vehicle3.getCrossover();
                break;
            }
            else if (VehiclePicker == 4) {
                vehicle4.getCoupe();
                break;
            }
            else if (VehiclePicker == 5) {
                vehicle5.getConvertible();
                break;
            }
            else {
                cout << endl << "Input Error: Please input a number 1-5. \n\n\n";
            }
        } catch (int e) {
            cout << endl << "Input Error: Please input a number 1-5. \n\n\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }

    //-------------------[ Redux ]------------------------------

    string Redo;

    while (true) {
        cout << endl << "Would you like to view another vehicle's features?  (Yes/No) \n";
        cin >> Redo;

        if (Redo == "Yes" || Redo == "yes" || Redo == "Y" || Redo == "y") {
            break;
        }
        else if (Redo == "No" || Redo == "no" || Redo == "N" || Redo == "n") {
            exit(0);
        }
        else {
            cout << endl << "Input Error: Please Input Yes or No. \n\n\n";
        }
    }
    main();

    return 0;
}