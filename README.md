# 🏦 Banking & ATM Management System

> A console-based Banking and ATM Management System built in C++, featuring file-based persistent storage, user account management, and secure ATM operations.

---

## 📋 Table of Contents

- [Overview](#overview)
- [Features](#features)
- [Project Structure](#project-structure)
- [Prerequisites](#prerequisites)
- [Getting Started](#getting-started)
- [Usage](#usage)
- [Default Admin Credentials](#default-admin-credentials)
- [Data Storage](#data-storage)
- [Known Limitations](#known-limitations)
- [Author](#author)

---

## Overview

The **Banking & ATM Management System** is a C++ console application that simulates core banking operations. It provides two main modules: a **Bank Management** panel for administrative operations, and an **ATM Management** panel for customer self-service. All data is persisted locally using plain text files.

---

## Features

### 🏛️ Bank Management (Admin)
| Feature | Description |
|---|---|
| New User | Register a new bank account |
| Already User | Look up an existing account |
| Deposit | Credit an amount to a user's account |
| Withdraw | Debit an amount from a user's account |
| Transfer | Move funds between two accounts |
| Payment | Pay bills and log payment history |
| Search | Find and display a user record by ID |
| Edit | Update user profile information |
| Delete | Remove a user record from the system |
| Show All Records | Display every account in the database |
| Payment History | View all logged bill payments |

### 🏧 ATM Management (Customer)
| Feature | Description |
|---|---|
| Check Balance | Authenticate and view current balance |
| Withdraw | Securely withdraw funds via PIN + password |
| Account Details | View full account details after authentication |

---

## Project Structure

```
banking-system/
│
├── bank.cpp         # Main source file — all logic resides here
├── bank.txt         # Auto-generated: user account database
└── bill.txt         # Auto-generated: bill payment history log
```

---

## Prerequisites

- **OS:** Windows (uses `<windows.h>`, `<conio.h>`, and `system("cls")`)
- **Compiler:** MinGW (g++) or MSVC
- **C++ Standard:** C++11 or later

> ⚠️ This project is **Windows-only** due to its use of `<conio.h>` (`getch()`) and the Windows API (`SYSTEMTIME`).

---

## Getting Started

### Compile with g++ (MinGW)

```bash
g++ bank.cpp -o bank.exe
```

### Run the application

```bash
./bank.exe
```

---

## Usage

On launch, the application displays an intro screen and then presents the **Control Panel**:

```
Control Panel

1. Bank Management
2. ATM Management
3. Exit
```

### Bank Management
Requires admin login credentials. After successful authentication, all administrative operations are accessible from the Bank Management menu.

### ATM Management
Accessible without admin login. Customers authenticate using their **User ID**, **4-digit PIN**, and **6-character password** to perform self-service operations.

---

## Default Admin Credentials

> ⚠️ These credentials are hardcoded in the source. Change them before any real-world deployment.

| Field | Value |
|---|---|
| Username | `claudiu@gmail.com` |
| PIN | `9999` |
| Password | `123456` |

---

## Data Storage

User data is stored in plain text (`bank.txt`) with the following format per line:

```
<UserID> <Name> <FatherName> <Address> <PIN> <Password> <PhoneNumber> <Balance>
```

Bill payment history is stored in `bill.txt`:

```
<UserID> <BillName> <Amount> <DD/MM/YYYY>
```

---

## Known Limitations

- **No encryption** — sensitive data (PIN, password, balance) is stored in plain text.
- **Single-word fields only** — names and addresses containing spaces will be read incorrectly.
- **Windows-only** — not portable to Linux/macOS without replacing `<conio.h>` and Windows API calls.
- **Hardcoded admin credentials** — should be stored securely and made configurable.
- **No input validation** — malformed input may cause unexpected behavior.
- **Concurrent access not supported** — file-based storage is not safe for simultaneous use.

---

## Author

**Ciupitu Claudiu-Marius**

---

> 📌 *This project was developed as an educational exercise in C++ OOP, file I/O, and console application design.*
