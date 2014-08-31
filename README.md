MMP_EmojiPicker
=========

MMP_EmojiPicker is an Emoji Picker for iOS applicaions.

- It's an universal library (Works both on iPad and iPhone devices)
- You can specify the emoji types you want to display

Version
----
1.0

Usage
--------------

You need to include the Library folder to your XCode project. Make sure that the `libMMPEmojiPicker.a` file is listed under the `Link Binary With Libraries session` under the `Build Phases` tab.

Import the `MMPEmojiPicker.h` header file where you need to use the picker.

###Available Emoji Types
```
typedef enum : NSUInteger {
    MMPNature = 0,          // Represents the nature emojis
    MMPObject = 1 << 1,     // Represents the object emojis
    MMPPeople = 1 << 2,     // Represents the people emojis
    MMPPlace  = 1 << 3,     // Represents the place emojis
    MMPSymbol = 1 << 4      // Represents the symbol emojis
} MMPEmojiType;
```

###Displaying Picker

#####iPad
```
MMPEmojiPicker *emojiView = [[MMPEmojiPicker alloc] init];
[emojiView setDelegate:self];
[emojiView showEmojiPickerOfType:MMPNature on:self FromRect:sender.frame animated:YES];
```
![ipad](https://github.com/Midhun-MP/MMP_EmojiPicker/blob/master/Images/iPad.png)

#####iPhone
```
MMPEmojiPicker *emojiView = [[MMPEmojiPicker alloc] init];
[emojiView setDelegate:self];
[emojiView showEmojiPickerOfType:MMPNature onViewController:self animated:YES];
```
![iPhone](https://github.com/Midhun-MP/MMP_EmojiPicker/blob/master/Images/iPhone.png)

You can combine multiple types like:

```
[emojiView showEmojiPickerOfType:MMPSymbol | MMPPlace | MMPPeople | MMPObject | MMPNature onViewController:self animated:YES];
```

For getting the selected value back, you need to implement the `MMPEmojiPickerDelegate` delegate method.

```
- (void)emojiPicker:(MMPEmojiPicker *)picker didFinishPickingEmoji:(NSString *)emoji
{
    UIAlertView *alert = [[UIAlertView alloc] initWithTitle:@"Selected Emoji" message:emoji delegate:nil cancelButtonTitle:@"Ok" otherButtonTitles: nil];
    [alert show];
}
```

Contact
-------
Midhun M P
Email : midhunmp7@gmail.com