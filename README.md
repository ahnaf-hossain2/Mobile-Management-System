# Mobile Management System

A secure C++ implementation of a mobile phone management system with password protection and balance tracking capabilities.

## 🚀 Features

- **Secure Phone Management**
  - Password-based locking system
  - Failed attempt tracking
  - Automatic blocking after multiple failed attempts
  - Secure password change functionality

- **Balance Management**
  - Real-time balance tracking
  - Recharge capability
  - Per-minute call cost calculation (0.5 Taka/minute)
  - Low balance alerts

- **User Information**
  - Store owner details
  - Mobile number management
  - OS information
  - Detailed information display

## 📋 Prerequisites

- C++ Compiler (GCC 7.0+)
- Make (optional, for build automation)
- Basic understanding of terminal/command line

## 🛠️ Setup

1. Clone the repository
```bash
git clone https://github.com/yourusername/Mobile-Management-System-CPP.git
cd Mobile-Management-System-CPP
```

2. Compile the project
```bash
g++ -o mobile main.cpp Mobile.cpp
```

3. Run the program
```bash
./mobile
```

## 💻 Usage

```cpp
// Create a new mobile phone instance
Mobile phone;

// Set up basic information
phone.setOwnerName("John Doe");
phone.setMobileNumber("01712345678");
phone.setOsName("Android");

// Set password and manage security
phone.setPassword(1234);
phone.unlock(1234);  // Unlock with password

// Perform operations
phone.recharge(100);
phone.callSomeone(10);  // 10-minute call
phone.showInfo();
```

## 🔒 Security Features

- Maximum 3 failed password attempts
- 30-second blocking period after maximum attempts
- Automatic locking after password change
- Failed attempts reset after successful unlock

## 📱 Class Structure

```cpp
class Mobile {
private:
    string ownerName;
    string mobileNumber;
    double mobileBalance;
    string osName;
    bool lockStatus;
    int password;
    int failedAttempts;

public:
    // Constructors and methods
    ...
};
```

## 🤝 Contributing

1. Fork the repository
2. Create your feature branch (`git checkout -b feature/AmazingFeature`)
3. Commit your changes (`git commit -m 'feat: add some AmazingFeature'`)
4. Push to the branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request

## 📄 License

This project is licensed under the MIT License - see the [LICENSE.md](LICENSE.md) file for details

## 👤 Author

Your Name - [Your GitHub Profile](https://github.com/yourusername)

## 🙏 Acknowledgments

- Inspired by modern mobile phone security systems
- Built as part of C++ learning journey
