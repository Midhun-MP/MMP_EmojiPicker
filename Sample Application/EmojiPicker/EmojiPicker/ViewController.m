//
//  ViewController.m
//  EmojiPicker
//
//  Created by Midhun on 28/08/14.
//  Copyright (c) 2014 Midhun. All rights reserved.
//

#import "ViewController.h"
#import "MMPEmojiPicker.h"


@interface ViewController () <MMPEmojiPickerDelegate>

@end

@implementation ViewController
{
    MMPEmojiPicker *emojiView;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


- (IBAction)showEmojiPicker:(UIButton *)sender
{
    emojiView = [[MMPEmojiPicker alloc] init];
    [emojiView setDelegate:self];
    [emojiView setEmojiFrame:CGRectMake(10, 0, 300, 200)];
    
    //[emojiView showEmojiPickerOfType:MMPSymbol | MMPPlace | MMPPeople | MMPObject | MMPNature onViewController:self animated:YES];
    [emojiView showEmojiPickerOfType:MMPNature on:self FromRect:sender.frame animated:YES];
}

- (void)emojiPicker:(MMPEmojiPicker *)picker didFinishPickingEmoji:(NSString *)emoji
{
    UIAlertView *alert = [[UIAlertView alloc] initWithTitle:emoji message:emoji delegate:nil cancelButtonTitle:@"Ok" otherButtonTitles: nil];
    [alert show];
}


@end
