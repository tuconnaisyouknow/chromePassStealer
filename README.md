# 🥷 ChromePassStealer  
🚨 **This project is no longer updated.** If you want a better script, click [here](https://github.com/tuconnaisyouknow/BadUSB_passStealer).  
## ⚠️ Warning  
Everything in this repository is **strictly** for educational purposes. **I am not responsible** for any stolen data. **You are responsible** for your actions when using this script with **BadUSB**.  
## ℹ️ About  
Many people who are not well-informed about **cybersecurity** save their **passwords** in **Google Chrome** for convenience. This script **exploits** this weakness to **steal** all saved passwords.  
### 🛠️ How it works:  
1️⃣ **Disables Windows password** using PowerShell.  
2️⃣ **Opens Google Chrome** and downloads a **.csv file** containing all saved passwords.  
3️⃣ **Sends the file by email** via PowerShell.  
4️⃣ **Deletes traces** by removing the file and closing Chrome.  
## 🔑 Key Information for Users  
### 🎹 Important Note #1 – Keyboard Layout Adaptation  
Sometimes, you might see this in the code:  
```arduino
Keyboard.press(KEY_LEFT_CTRL);
Keyboard.press(KEY_LEFT_ALT);
Keyboard.press(173);
Keyboard.releaseAll();
```
This is used to type characters like `@` or `\`, but it depends on the **keyboard layout**. 👉 **Adapt these characters** using this [ASCII table](https://www.csee.umbc.edu/portal/help/theory/ascii.txt) or simply **switch the keyboard layout to French**.  
### 👀 Important Note #2 – Visibility Issue  
⚠️ The script **is not yet optimized** for stealth. The victim **can see** their computer acting on its own.  
### 🕒 Important Note #3 – Adjusting Delay  
You can **customize the delay** based on how fast you plug in the **BadUSB**.  
## 🚀 Getting Started  
## 📌 Requirements  
✔️ A **BadUSB**  
✔️ Install **Arduino software** [here](https://www.arduino.cc/en/software)  
✔️ A **Gmail** account with **"Less Secure Apps"** enabled [here](https://www.google.com/settings/security/lesssecureapps) *(if required)*  
## ⚙️ Installation  
1️⃣ **Download this repository**  
🔹 **Linux:**  
```bash
git clone https://github.com/tuconnaisyouknow/ChromePassStealer
cd ChromePassStealer
```  
🔹 **Windows:**  
- Click the **green "Code" button** at the top right.  
- Click **"Download ZIP"** and extract it.  
2️⃣ **Replace your email and password** in:  
- [`ChromePassStealer.ino`](https://github.com/tuconnaisyouknow/ChromePassStealer/blob/main/ChromePassStealer.ino)  
*(Lines 238, 245, 253, 264)*  
3️⃣ **Upload the script to your BadUSB** using **Arduino software**.  
4️⃣ **Find a victim and enjoy!** 🎭  
## 🖥️ Requirements for the Victim's PC  
✔️ **Turn off Caps Lock**  
✔️ **Switch the keyboard layout to French** *(or adapt the code accordingly)*  
## 🆘 Help Me ⛑️  
I want to **make the script run in the background** and perform all actions from **Chrome directly via PowerShell**. If you have any ideas, feel free to contribute! 🚀  
