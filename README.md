# Password Strength Checker

A simple, beginner-friendly C++ project that checks the strength of a password based on length, character variety, and common security rules. This tool helps users understand whether their password is weak, medium, or strong.

---

## 🚀 Features

- Evaluates password length  
- Checks for:
  - Uppercase letters  
  - Lowercase letters  
  - Numbers  
  - Special characters  
- Gives a clear strength rating: **Weak**, **Medium**, or **Strong**  
- Console-based and easy to run  
- Perfect for practicing C++ fundamentals  

---

## 📦 Project Structure

PasswordChecker/
│
├── src/
│ └── main.cpp
│
└── README.md


---

## 🛠️ Requirements

- C++ compiler (e.g., `g++`, MSVC, Clang)
- Visual Studio, Code::Blocks, or any IDE you prefer

---

## ▶️ How to Run

### **Using Visual Studio**
1. Open Visual Studio  
2. Create a new **Console App** project  
3. Replace the auto-generated code with the `main.cpp` from this repo  
4. Click **Build → Build Solution**  
5. Run the program with **Ctrl + F5**

### **Using g++ (Terminal)**
```bash
g++ main.cpp -o PasswordChecker
./PasswordChecker
Enter your password: MyPass123!
Strength: Strong
📘 How It Works

The checker scores your password based on:

Length ≥ 8

Contains uppercase letters

Contains lowercase letters

Contains digits

Contains special symbols

Each rule adds to your total score, which decides the final rating.
```
## 📄 License
```
This project is provided for educational and personal use. No warranty is expressed or implied
```
## 🤝 Contributing

Contributions are welcome!
Feel free to open a pull request or report issues
