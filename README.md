# Mobile Management System

A secure C++ implementation of a mobile phone management system with password protection and balance tracking capabilities.
A Mobile Management System where the user sets up a phone, locks/unlocks it with a password, checks phone info, performs a recharge, and makes calls.

## 🗒️ Diagram

![Image](https://github.com/user-attachments/assets/2851e223-6d29-4fbf-af6f-effba82eea5d)

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
g++ -o mobile mobile_management.cpp
```

3. Run the program
```bash
./mobile_management
```

## 💻 Usage

```cpp
// Create a new mobile phone instance
Mobile phone;

// Set up basic information
phone.setOwnerName("Ahnaf Hossain");
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
## Output

![Image](https://github.com/user-attachments/assets/80baf17e-1179-4ac4-afeb-093a9d9b9eff)

## 🤝 Contributing

1. Fork the repository
2. Create your feature branch (`git checkout -b feature/AmazingFeature`)
3. Commit your changes (`git commit -m 'feat: add some AmazingFeature'`)
4. Push to the branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request

## 📄 License

This project is licensed under the MIT License - see the [LICENSE.md](LICENSE.md) file for details

## 👤 Author

MD Ahnaf Hossain - [ahnaf-hossain2](https://github.com/ahnaf-hossain2)

## 🙏 Acknowledgments

- Inspired by modern mobile phone security systems
- Built as part of C++ learning journey
