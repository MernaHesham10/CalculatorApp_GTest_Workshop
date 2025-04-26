# GTest Calculator Application

## 📌 Overview

This repository contains a **Google Test (GTest) suite** for testing a basic **Calculator** application. The tests cover:

- ✅ Basic mathematical operations (Addition, Subtraction, Multiplication, Division)
- ✅ Fixture-based tests
- ✅ Parameterized tests
- ✅ Death tests (error handling)
- ✅ Disabled tests

---

## 🛠 Installation & Setup

### **1. Clone the Repository**

```sh
git clone https://github.com/your-repo-url.git
cd your-repo-folder
```

### **2. Install Google Test**

Use **vcpkg** (Recommended):

```sh
./vcpkg.exe install gtest
./vcpkg.exe integrate install

## 🚀 Usage

### **Build & Run Tests**

#### **Command Line**

```sh
./CalculatorTest.exe
```

#### **Visual Studio**

1. Open the **Test Explorer**.
2. Click **Run All Tests**.

---

## 📜 Test Cases

| Test Type               | Description                                                  |
| ----------------------- | ------------------------------------------------------------ |
| **Basic Tests**         | Tests basic operations like Add, Subtract, Multiply, Divide. |
| **Fixture Tests**       | Uses `TEST_F` for shared setup.                              |
| **Parameterized Tests** | Uses `TEST_P` to test multiple inputs.                       |
| **Death Tests**         | Ensures `DivideByZero` triggers a failure.                   |
| **Disabled Tests**      | Tests that are skipped unless explicitly enabled.            |

---
