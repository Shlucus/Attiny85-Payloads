## REQUIREMENTS:

You will need 3 <b>ressources</b> for this Payload:
 1. The `TreeOfLife` Arduino Code
 2. `script.txt` hosted on web (e.g: pastebin, github)
 3. A Webhook (webhook.com or equivalent)

Additionally, you'll need the following <b>conditions</b>:
 1. Physical access to target device
 2. Target device must be unlocked
 3. Has Internet connection
<br><br>

## USAGE:

To set up the payload, do the following:
 1. Create [Webhook](webhook.site) > Copy "Your Unique URL"
 2. Paste your Webhook URL in `script.txt` at `<Your Webhook goes here>`
 3. Upload `script.txt` to [Pastebin.com](pastebin.com) > Copy the <b>RAW</b> URL
 4. Open `TreeOfLife.ino` > Paste your Pastebin URL at `<Your pastebin goes here>`
 5. Upload `TreeOfLife.ino` to DigiSpark Attiny85. Done!

> [!TIP]
> When uploading to Pastebin, use these settings to cover your tracks:\
> <b>Paste Expiration</b>: 1 Hour - 1Day (as needed)\
> <b>Paste Exposure</b>: Unlisted


## PAYLOAD FLOW:
The script works as follows (in simple terms):
 1. <b>ARDUINO</b>: Runs when Digispark is connected to host machine
 2. <b>ARDUINO</b>: Opens Powershell
 3. <b>ARDUINO</b>: Downloads EXTERNAL SCRIPT and Executes it. (This is much faster, because the Digispark only needs to type url>download>execute, as compared to typing entire script>executing)
 4. <b>ARDUINO</b>: Minimize Powershell Window
 5. <b>EXT. Script</b>: Builds a directory tree starting from User's Home directory as a string.
 6. <b>EXT. Script</b>: Uploads/POST the string to WEBHOOK URL
 7. <b>EXT. Script</b>: Deletes itself and closes Powershell window.
 7. <b>WEBHOOK</b>: Recieves POST request (the directory tree) from target machine.



