#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <fstream>
#include <windows.h>
using namespace std;

class Bank {
    private:
        string pin;
        float balance;
        string id, pass, name, fname,address,phoneNumber;

    public:
    void menu();
    void bank_management();
    void atm_management();
    void new_user();
    void already_user();
    void deposit();
    void withdraw();
    void transfer();
    void payment();
    void search();
    void edit();
    void del();
    void show_records();
    void show_payment();
    void user_balance();
    void withdraw_atm();
    void check_detail();

};

void introduction() {
    cout<<"\n\n\n\n\n\t";
    for (int i = 1; i <= 60; i++)
        cout<<"*";
    cout<<"\n\t";
    for (int i = 1; i <= 58; i++)
        cout<<"*";
    cout<<"\n\t ";
    for (int i = 1; i <= 56; i++)
        cout<<"*";
    cout<<"\n\n\t\tBanking & ATM Management System\n\t\t\t\tProject in C++\n\n\t   ";
    for (int i = 1; i <= 56; i++)
        cout<<"*";
    cout<<"\n\t ";
    for (int i = 1; i <= 58; i++)
        cout<<"*";
    cout<<"\n\t ";
    for (int i = 1; i <= 60; i++)
        cout<<"*";
    getch();
    system("cls");
    cout<<"\n\n\n\n\n\n\t\t\t";
    for (int i = 1; i <= 30; i++)
        cout<<"*";
    cout<<"\n\t\t\t";
    for (int i = 1; i <= 30; i++)
        cout<<"*";
    cout<<"\n\n\t\t\t      Ciupitu Claudiu-Marius\n\n\t\t\t";
    for (int i = 1; i <= 30; i++)
        cout<<"*";
    cout<<"\n\t\t\t";
    for (int i = 1; i <= 30; i++)
        cout<<"*";
    getch();

}

void Bank::menu() {
    p:
    system("cls");
    int option;
    char ch;
    string pin, pass, email;
    cout<<"\n\n\t\t\tControl Panel";
    cout<<"\n\n\t\t\t1. Bank Management";
    cout<<"\n\n\t\t\t2. ATM Management";
    cout<<"\n\n\t\t\t3. Exit";
    cout<<"\n\n\t\t\tEnter Your Choice: ";
    cin>>option;
    switch(option) {
        case 1:
            cout<<"\n\n\t\t\tLogin Account";
            cout<<"\n\n\t\t\tEnter Username: ";
            cin>>email;
            cout<<"\n\n\t\t\tPin Code: ";
            for (int i = 1; i <= 4; i++) {
                ch = getch();
                pin += ch;
                cout<<"*";
            }
            cout<<"\n\n\t\t\t Password: ";
            for (int i = 1; i <= 6; i++) {
                ch = getch();
                pass += ch;
                cout<<"*";
            }
            if (email == "claudiu@gmail.com" && pin == "9999" && pass == "123456") {
                bank_management();
            } else {
                cout<<"\n\n\t\t\tLogin Failed";
            }
            break;
        case 2: atm_management();
            break;
        case 3: exit(0);
        default:
            cout<<"Invalid Choice...Please Try again...";
    }
    getch();
    goto p;
}
void Bank::bank_management() {
    p:
    system("cls");
    int option;
    cout<<"\n\n\t\t\tBank Management";
    cout<<"\n\n\t\t\t1. New User";
    cout<<"\n\n\t\t\t2. Already User";
    cout<<"\n\n\t\t\t3. Deposit Option ";
    cout<<"\n\n\t\t\t4. Withdraw Option";
    cout<<"\n\n\t\t\t5. Transfer Option";
    cout<<"\n\n\t\t\t6. Payment Option";
    cout<<"\n\n\t\t\t7. Search User Record ";
    cout<<"\n\n\t\t\t8. Edit User Record";
    cout<<"\n\n\t\t\t9. Detele User Record";
    cout<<"\n\n\t\t\t10. Show All Records";
    cout<<"\n\n\t\t\t11. Payment All Records";
    cout<<"\n\n\t\t\t12. Go Back";
    cout<<"\n\n\t\t\t Enter Your choice : ";
    cin>>option;
    switch (option) {
         case 1:
            new_user();
            break;
         case 2:
            already_user();
            break;
         case 3:
            deposit();
            break;
         case 4:
            withdraw();
            break;
         case 5:
            transfer();
            break;
         case 6:
            payment();
            break;
         case 7:
            search();
            break;
         case 8:
            edit();
            break;
         case 9:
            del();
            break;
         case 10:
            show_records();
            break;
         case 11:
            show_payment();
            break;
         case 12:
            menu();
         default:
            cout<<"Invalid Choice...Please Try again...";
    }
    getch();
    goto p;
}

void Bank::atm_management() {
    p:
    system("cls");
    int option;
    cout<<"\n\n\t\t\tATM Management";
    cout<<"\n\n\t\t\t1. New User && Check Balance";
    cout<<"\n\n\t\t\t2. Withdraw Amount";
    cout<<"\n\n\t\t\t3. Account Detailes";
    cout<<"\n\n\t\t\t4. Go Back";
    cout<<"\n\n\t\t\tEnter Your choice : ";
    cin>>option;
    switch (option) {
        case 1:
            user_balance();
            break;
        case 2:
            withdraw_atm();
            break;
        case 3:
            check_detail();
            break;
        case 4:
            menu();
        default:
            cout<<"Invalid Choice...Please Try again...";
    }
    getch();
    goto p;
}

void Bank::new_user() {
    p:
    system("cls");
    fstream file;
    int p;
    float b;
    string n,f,pa,a,ph,i;
    cout<<"\n\n\t\t\tAdd New User: ";
    cout<<"\n\n\t\t\t User ID : ";
    cin>>id;
    cout<<"\n\n\t\t\tName: ";
    cin>>name;
    cout<<"\n\n\t\t\t Father Name: ";
    cin>>fname;
    cout<<"\n\n\t\t\tAddress: ";
    cin>>address;
    cout<<"\n\n\t\t\t Pin Code (4 digits): ";
    cin>>pin;
    cout<<"\n\n\t\t\tPassword: ";
    cin>>pass;
    cout<<"\n\n\t\t\t Phone Number: ";
    cin>>phoneNumber;
    cout<<"\n\n\t\t\tCurrent Balance : ";
    cin>>balance;
    file.open("bank.txt", ios::in);
    if (!file) {
        file.open("bank.txt", ios::app | ios::out);
        file<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phoneNumber<<" "<<balance<<"\n";
        file.close();
    }
    else {
        file>>i>>n>>f>>a>>p>>pa>>ph>>b;
        while (!file.eof()) {
            if (i == id) {
                cout<<"\n\n User ID Already Exist...";
                getch();
                goto p;
            }
            file>>i>>n>>f>>a>>p>>pa>>ph>>b;
        }
        file.close();
        file.open("bank.txt", ios::app | ios::out);
        file<<" "<<id<<" "<<name<<" "<<fname<<" "<<address<<" "<<pin<<" "<<pass<<" "<<phoneNumber<<" "<<balance<<"\n";
        file.close();
    }
    cout<<"\n\n\t\t\t New User Account Created Successfully...";
}

void Bank::already_user() {
    system("cls");
    ifstream file; // Folosim ifstream pentru citire clară
    string t_id;
    bool found = false;

    cout << "\n\n\t\t\tAlready User Account";

    file.open("bank.txt"); // Deschidere simplă pentru citire

    if (!file) {
        cout << "\n\n\t\t\t File Opening Error / File doesn't exist";
        return;
    }

    cout << "\n\n\t\t\t User ID: ";
    cin >> t_id;

    // Citim datele din fișier în variabilele clasei până la finalul fișierului
    while (file >> id >> name >> fname >> address >> pin >> pass >> phoneNumber >> balance) {
        if (t_id == id) {
            system("cls");
            cout << "\n\n User Account Already Exists...";
            cout << "\n\n User ID: " << id
                 << "\n Pin Code : " << pin
                 << "\n Password: " << pass;
            found = true;
            break; // Oprim căutarea dacă l-am găsit
        }
    }

    file.close();

    if (!found) {
        cout << "\n\n User ID Not Found...";
    }
}

void Bank::deposit() {
    fstream file, file1;
    string t_id;
    float dep;
    bool found = false;

    system("cls");
    cout << "\n\n\t\t\tDeposit Amount Option";

    file.open("bank.txt", ios::in);
    if (!file) {
        cout << "\n\n\t\t\t File Opening Error";
        return;
    }

    cout << "\n\n\t\t\t User ID: ";
    cin >> t_id;

    file1.open("bank1.txt", ios::app | ios::out);

    while (file >> id >> name >> fname >> address >> pin >> pass >> phoneNumber >> balance) {
        if (t_id == id) {
            cout << "\n\n Amount For Deposit: ";
            cin >> dep;

            if (dep < 0) {
                cout << "\n\n\t\t\t Invalid Amount! Deposit cannot be negative.";

            } else {
                balance += dep;
                found = true;
                cout << "\n\n\t\t\t Your Amount " << dep << " Successfully Deposited...";
            }
        }

        file1 << " " << id << " " << name << " " << fname << " " << address
              << " " << pin << " " << pass << " " << phoneNumber << " " << balance << "\n";
    }

    file.close();
    file1.close();

    remove("bank.txt");
    rename("bank1.txt", "bank.txt");

    if (!found) {
        cout << "\n\n User ID Not Found or Invalid Amount...";
    }
}

void Bank::withdraw() {
    fstream file, file1;
    string t_id;
    float with;
    bool found = false;

    system("cls");
    cout << "\n\n\t\t\tWithdraw Amount Option";

    file.open("bank.txt", ios::in);
    if (!file) {
        cout << "\n\n\t\t\t File Opening Error";
        return;
    }

    cout << "\n\n\t\t\t User ID: ";
    cin >> t_id;

    file1.open("bank1.txt", ios::out);
    while (file >> id >> name >> fname >> address >> pin >> pass >> phoneNumber >> balance) {
        if (t_id == id) {
            found = true;
            cout << "\n\n Your Current Balance: " << balance;
            cout << "\n\n Amount For Withdraw: ";
            cin >> with;

            if (with <= 0) {
                cout << "\n\n\t\t\t Invalid Amount! Please enter a positive value.";
            }
            else if (with <= balance) {
                balance -= with;
                cout << "\n\n\t\t\t Your Amount " << with << " Successfully Withdrawn...";
            }
            else {
                cout << "\n\n\t\t\t Insufficient Funds! Your Current Balance is " << balance;
            }
        }

        file1 << " " << id << " " << name << " " << fname << " " << address
              << " " << pin << " " << pass << " " << phoneNumber << " " << balance << "\n";
    }

    file.close();
    file1.close();

    remove("bank.txt");
    rename("bank1.txt", "bank.txt");

    if (!found) {
        cout << "\n\n User ID Not Found...";
    }
}

void Bank::transfer() {
    fstream file, file1;
    string r_id, s_id;
    float amount;
    int found = 0;
    bool sender_ok = false;
    bool receiver_exists = false;

    system("cls");
    cout << "\n\n\t\t\tPayment Transfer Option";

    file.open("bank.txt", ios::in);
    if (!file) {
        cout << "\n\n\t\t\t File Opening Error...";
        return;
    }

    cout << "\n\n Sender User ID: ";
    cin >> s_id;
    cout << "\n Reciever User ID: ";
    cin >> r_id;
    cout << "\n Enter Transfer Amount: ";
    cin >> amount;

    while (file >> id >> name >> fname >> address >> pin >> pass >> phoneNumber >> balance) {
        if (s_id == id && balance >= amount) {
            sender_ok = true;
        }
        if (r_id == id) {
            receiver_exists = true;
        }
    }
    file.close();

    if (sender_ok && receiver_exists && s_id != r_id) {
        file.open("bank.txt", ios::in);
        file1.open("bank1.txt", ios::out);

        while (file >> id >> name >> fname >> address >> pin >> pass >> phoneNumber >> balance) {
            if (s_id == id) {
                balance -= amount;
            }
            else if (r_id == id) {
                balance += amount;
            }

            file1 << " " << id << " " << name << " " << fname << " " << address
                  << " " << pin << " " << pass << " " << phoneNumber << " " << balance << "\n";
        }

        file.close();
        file1.close();
        remove("bank.txt");
        rename("bank1.txt", "bank.txt");
        cout << "\n\n\t\t\t Transaction Successful!";
    }
    else {
        cout << "\n\n\t\t\t Invalid IDs, Same ID used or Insufficient Balance!";
    }
}

void Bank::payment() {
    system("cls");
    fstream file, file1;
    string t_id, b_name;
    float amount;
    bool found = false;
    SYSTEMTIME x;

    cout << "\n\n\t\t\tBills Payment Option";

    file.open("bank.txt", ios::in);
    if (!file) {
        cout << "\n\n\t\t\t File Opening Error...";
        return;
    }

    cout << "\n\nUser ID: "; cin >> t_id;
    cout << "\nBill Name: "; cin >> b_name;
    cout << "\nBill Amount: "; cin >> amount;

    file1.open("bank1.txt", ios::out);

    while (file >> id >> name >> fname >> address >> pin >> pass >> phoneNumber >> balance) {
        if (t_id == id && amount <= balance) {
            balance -= amount;
            found = true;
        }

        file1 << " " << id << " " << name << " " << fname << " " << address
              << " " << pin << " " << pass << " " << phoneNumber << " " << balance << "\n";
    }

    file.close();
    file1.close();
    remove("bank.txt");
    rename("bank1.txt", "bank.txt");

    if (found) {
        GetLocalTime(&x);
        file.open("bill.txt", ios::app | ios::out);
        file << t_id << " " << b_name << " " << amount << " "
             << x.wDay << "/" << x.wMonth << "/" << x.wYear << "\n";
        file.close();
        cout << "\n\n\t\t\tBill Payment Successful!";
    } else {
        cout << "\n\n\t\t\t Payment Failed (Invalid ID or Insufficient Balance)!";
    }
}

void Bank::search() {
    system("cls");
    ifstream file;
    string t_id;
    bool found = false;

    cout << "\n\n\t\t\tSearch User Record Option";

    file.open("bank.txt");
    if (!file) {
        cout << "\n\n\t\t\t File Opening Error...";
        return;
    }

    cout << "\n\n\t\t\t Enter User ID: ";
    cin >> t_id;

    while (file >> id >> name >> fname >> address >> pin >> pass >> phoneNumber >> balance) {
        if (t_id == id) {
            system("cls");
            cout << "\n\n\t\t\t --- User Record Found ---";
            cout << "\n\n User ID:       " << id;
            cout << "\n Name:          " << name;
            cout << "\n Father's Name: " << fname;
            cout << "\n Address:       " << address;
            cout << "\n Pin Code:      " << pin;
            cout << "\n Password:      " << pass;
            cout << "\n Phone Number:  " << phoneNumber;
            cout << "\n Balance:       " << balance;
            cout << "\n\n ---------------------------------------";

            found = true;
            break;
        }
    }

    file.close();

    if (!found) {
        cout << "\n\n\t\t\t User Record Not Found!";
    }
}

void Bank::edit() {
    system("cls");
    fstream file, file1;
    string t_id, n, f, a, p, ph;
    int pi;
    bool found = false;

    cout << "\n\n\t\t\tEdit User Record Option";
    file.open("bank.txt", ios::in);

    if (!file) {
        cout << "\n\n\t\t\t File Opening Error...";
        return;
    }

    cout << "\n\n\t\t\tUser ID to Edit: ";
    cin >> t_id;

    file1.open("bank1.txt", ios::out);

    while (file >> id >> name >> fname >> address >> pin >> pass >> phoneNumber >> balance) {
        if (t_id == id) {
            cout << "\n\n\t\t\t--- New Data ---";
            cout << "\n\n\t\t\tName: "; cin >> n;
            cout << "\n\t\t\tFather Name: "; cin >> f;
            cout << "\n\t\t\tAddress: "; cin >> a;
            cout << "\n\t\t\tPin Code (4 digits): "; cin >> pi;
            cout << "\n\t\t\tPassword: "; cin >> p;
            cout << "\n\t\t\tPhone Number: "; cin >> ph;

            file1 << " " << id << " " << n << " " << f << " " << a
                  << " " << pi << " " << p << " " << ph << " " << balance << "\n";
            found = true;
            cout << "\n\n\t\t\tRecord Updated Successfully!";
        }
        else {

            file1 << " " << id << " " << name << " " << fname << " " << address
                  << " " << pin << " " << pass << " " << phoneNumber << " " << balance << "\n";
        }
    }

    file.close();
    file1.close();
    remove("bank.txt");
    rename("bank1.txt", "bank.txt");

    if (!found) {
        cout << "\n\n\t\t\t User Record Not Found!";
    }
}

void Bank::del() {
    system("cls");
    fstream file, file1;
    string t_id, n, f, a, p, ph;
    int pi;
    bool found = false;

    cout << "\n\n\t\t\tDelete User Record Option";
    file.open("bank.txt", ios::in);

    if (!file) {
        cout << "\n\n\t\t\t File Opening Error...";
        return;
    }

    cout << "\n\n\t\t\tUser ID to Delete: ";
    cin >> t_id;

    file1.open("bank1.txt", ios::out);

    while (file >> id >> name >> fname >> address >> pin >> pass >> phoneNumber >> balance) {
        if (t_id == id) {
             found = true;
            cout << "\n\n\t\t\tRecord Deleted Successfully!";
        }
        else {

            file1 << " " << id << " " << name << " " << fname << " " << address
                  << " " << pin << " " << pass << " " << phoneNumber << " " << balance << "\n";
        }
    }

    file.close();
    file1.close();
    remove("bank.txt");
    rename("bank1.txt", "bank.txt");

    if (!found) {
        cout << "\n\n\t\t\t User Record Not Found!";
    }
}

void Bank::show_records() {
    system("cls");
    fstream file,file1;

    int found = false;
    cout<<"\n\n\t\t\t Show All User's Records";
    file.open("bank.txt", ios::in);
    if (!file) {
        cout << "\n\n\t\t\t File Opening Error...";
    }
    else {

        while (file >> id >> name >> fname >> address >> pin >> pass >> phoneNumber >> balance) {
            cout<<"\n\n\n User ID : "<< id;
            cout<<"\n Name : "<< name;
            cout<<"\n Father Name : "<< fname;
            cout<<"\n Address : "<< address;
            cout<<"\n Pin Code (4 digits): "<< pin;
            cout<<"\n Password: "<< pass;
            cout<<"\n Phone Number: "<< phoneNumber;
            cout<<"\n Current Balance : "<< balance;
            cout<<"\n\n=====================================================";

        }
        file.close();
        if (found == false) {
            cout << "\n\n\t\t\t Database is empty!";
        }
    }
}

void Bank::show_payment() {
    system("cls");
    fstream file;
    float amount;
    string c_date;
    bool found = false;

    cout << "\n\n\t\t\t --- ALL BILL PAYMENTS HISTORY ---";
    file.open("bill.txt", ios::in);

    if (!file) {
        cout << "\n\n\t\t\t File Opening Error or No History Found...";
    }
    else {
        file >> id >> name >> amount >>c_date;
        while (!file.eof()) {

            cout << "\n\n User ID    : " << id;
            cout << "\n Bill Name  : " << name;
            cout << "\n Amount     : " << amount;
            cout << "\n Date Paid  : " << c_date;
            cout << "\n -----------------------------------------------------";
            found = true;
            file >> id >> name >> amount >> c_date;
        }

        file.close();

        if (found == false) {
            cout << "\n\n\t\t\t No bill records found in database!";
        }

        cout << "\n\n Press any key to return to menu...";
    }
}

void Bank::user_balance() {
    system("cls");
    fstream file;
    int found = false;
    string t_id, t_pass="", t_pin="";
    char ch;
    cout<<"\n\n\t\t\tUser Login & Check Balance";
    file.open("bank.txt", ios::in);
    if (!file) {
        cout << "\n\n\t\t\t File Opening Error or No History Found...";
    }
    else {
        cout<<"\n\n User ID : ";
        cin>>t_id;
        cout<<"\n\n\t\t\tPin Code : ";
        for (int i = 1; i <= 4; i++) {
            ch = getch();
            t_pin += ch;
            cout<<"*";
        }
        cout<<"\n\n\t\t\tPassword : ";
        for (int i = 1; i <= 6; i++) {
            ch = getch();
            t_pass += ch;
            cout<<"*";
        }
        file>>id>>name>>fname>>address>>pin>>pass>>phoneNumber>>balance;
        while (!file.eof()) {
            if (t_id == id && t_pin == pin && t_pass == pass) {
                cout<<"\n\n\t\t\tYour Current Balance : "<<balance;
                found = true;
            }
            file>>id>>name>>fname>>address>>pin>>pass>>phoneNumber>>balance;

        }
        file.close();
        if (found == false) {
            cout << "\n\n\t\t\t User ID, pin & password Invalid...!";
        }

    }
}

void Bank::withdraw_atm() {
    fstream file, file1;
    string t_id, t_pass = "", t_pin = "";
    char ch;
    float with;
    bool found = false;

    system("cls");
    cout << "\n\n\t\t\t--- ATM WITHDRAWAL ---";

    file.open("bank.txt", ios::in);
    if (!file) {
        cout << "\n\n\t\t\t File Opening Error";
        return;
    }

    cout << "\n\n\t\t\t User ID: ";
    cin >> t_id;

    cout << "\n\t\t\t Pin Code (4 digits): ";
    for (int i = 0; i < 4; i++) {
        ch = getch();
        t_pin += ch;
        cout << "*";
    }

    cout << "\n\t\t\t Password (6 chars): ";
    for (int i = 0; i < 6; i++) {
        ch = getch();
        t_pass += ch;
        cout << "*";
    }

    file1.open("bank1.txt", ios::out);

    while (file >> id >> name >> fname >> address >> pin >> pass >> phoneNumber >> balance) {

        if (t_id == id && t_pin == pin && t_pass == pass) {
            found = true;
            cout << "\n\n\t\t\t Your Current Balance: " << balance;
            cout << "\n\n\t\t\t Amount For Withdraw: ";
            cin >> with;

            if (with <= 0) {
                cout << "\n\n\t\t\t Invalid Amount!";
            }
            else if (with <= balance) {
                balance -= with;
                cout << "\n\n\t\t\t Transaction Successful!";
                cout << "\n\t\t\t Amount Withdrawn: " << with;
                cout << "\n\t\t\t Remaining Balance: " << balance;
            }
            else {
                cout << "\n\n\t\t\t Insufficient Funds!";
            }
        }

        file1 << " " << id << " " << name << " " << fname << " " << address
              << " " << pin << " " << pass << " " << phoneNumber << " " << balance << "\n";
    }

    file.close();
    file1.close();
    remove("bank.txt");
    rename("bank1.txt", "bank.txt");

    if (!found) {
        cout << "\n\n\t\t\t Authentication Failed or User Not Found!";
    }

    cout << "\n\n Press any key to continue...";
    getch();
}

void Bank::check_detail() {
     fstream file;
    string t_id, t_pass = "", t_pin = "";
    char ch;
    bool found = false;

    system("cls");
    cout << "\n\n\t\t\t--- Check Details Option ---";

    file.open("bank.txt", ios::in);
    if (!file) {
        cout << "\n\n\t\t\t File Opening Error";
        return;
    }

    cout << "\n\n\t\t\t User ID: ";
    cin >> t_id;

    cout << "\n\t\t\t Pin Code (4 digits): ";
    for (int i = 0; i < 4; i++) {
        ch = getch();
        t_pin += ch;
        cout << "*";
    }

    cout << "\n\t\t\t Password (6 chars): ";
    for (int i = 0; i < 6; i++) {
        ch = getch();
        t_pass += ch;
        cout << "*";
    }

    while (file >> id >> name >> fname >> address >> pin >> pass >> phoneNumber >> balance) {

        if (t_id == id && t_pin == pin && t_pass == pass) {
            cout<<"\n\n\n User ID : "<< id;
            cout<<"\n Name : "<< name;
            cout<<"\n Father Name : "<< fname;
            cout<<"\n Address : "<< address;
            cout<<"\n Pin Code (4 digits): "<< pin;
            cout<<"\n Password: "<< pass;
            cout<<"\n Phone Number: "<< phoneNumber;
            cout<<"\n Current Balance : "<< balance;
            found = true;
            }

        }


    file.close();

    if (!found) {
        cout << "\n\n\t\t\t Authentication Failed or User Not Found!";
    }

    cout << "\n\n Press any key to continue...";
    getch();
}


int main() {

    Bank obj;
    introduction();
    obj.menu();
    return 0;
}
