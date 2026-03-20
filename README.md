# 🛒 Inventory & Store Billing System (C Language)

## 📌 Project Overview

This project is a simple **Inventory and Store Billing System** developed using the C programming language. It allows users to manage products, track inventory, and generate bills efficiently through a console-based interface.

---

## 🚀 Features

* ➕ Add new products to inventory
* 📋 View all available products
* 🧾 Generate bills for purchases
* 📦 Automatically update stock after billing
* ❌ Exit system safely

---

## 🛠️ Technologies Used

* **Language:** C
* **Concepts:** Structures, Arrays, Loops, Conditional Statements

---

## 📂 Structure Used

```c
struct Product {
    int id;
    char name[30];
    float price;
    int quantity;
};
```

---

## ▶️ How to Run the Program

1. Copy the code into a file named:

   ```
   inventory.c
   ```

2. Compile the program using a C compiler:

   ```
   gcc inventory.c -o inventory
   ```

3. Run the executable:

   ```
   ./inventory
   ```

---

## 📖 How It Works

### 1. Add Product

* Enter product ID, name, price, and quantity.
* Product is stored in memory.

### 2. View Products

* Displays all added products in tabular format.

### 3. Generate Bill

* Enter product ID to purchase.
* Enter quantity.
* System:

  * Checks stock availability
  * Updates inventory
  * Calculates total bill

### 4. Exit

* Closes the application.

---

## ⚠️ Limitations

* Maximum of 50 products only
* No file storage (data is lost after program exit)
* No validation for duplicate product IDs
* Simple text-based UI

---

## 🔮 Future Improvements

* 💾 Add file handling for permanent storage
* 🔍 Search and delete products
* 🧠 Improve input validation
* 🖥️ Create GUI version
* 📊 Add sales reports

---

## 👨‍💻 Author

**Arnab Dutta**

---

## ⭐ Conclusion

This project is a beginner-friendly implementation of inventory management using C. It helps in understanding core programming concepts like structures, loops, and real-world problem solving.

---
