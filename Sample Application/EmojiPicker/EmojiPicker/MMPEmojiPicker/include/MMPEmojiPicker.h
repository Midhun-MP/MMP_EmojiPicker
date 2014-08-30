/*
 *  MMPEmojiPicker.h
 *  MMPEmojiPicker
 *  Created by Midhun on 29/08/14.
 *  Copyright (c) 2014 Midhun. All rights reserved.
 *  Emoji Picker for iOS application
 */

#import <UIKit/UIKit.h>
#import "MMPEmojiPickerConstants.h"

#pragma mark - Delegate Declaration -

@class MMPEmojiPicker;
@protocol MMPEmojiPickerDelegate <NSObject>

@optional


/**
 * Will be called when user selects an Emoji from the picker
 * @param1 picker The MMPEmojiPicker which triggered the delegate
 * @param2 emoji NSString which contains the emoji code
 * @note : It's an optional delegate method
 */
- (void)emojiPicker:(MMPEmojiPicker *)picker didFinishPickingEmoji:(NSString *)emoji;

@end


#pragma mark - Interface -

// MMPE
@interface MMPEmojiPicker : UIViewController


#pragma mark - Property

// Delegate property
@property (nonatomic, weak) id<MMPEmojiPickerDelegate> delegate;

#pragma mark - Methods

/**
 * Method shows MMPEmojiPicker with specified emoji groups
 * @param 1 type Any type defined in the MMPEmojiType. You can combine multiple types. If you didn't pass a valid type, It'll use MMPNature by default
 * @param2 viewController UIViewController object in which the picker need to be shown.
 * @param3 animated BOOL value, if  it is true picker will be animated when it is shown.
 * @note Use this method when you want to show picker in iPhone and iPod devices.
 * @warning if you use this method on iPad the picker will work, but it's origin will be 0, 0, hence not recommended to use for iPad devices.
 */
- (void)showEmojiPickerOfType:(MMPEmojiType)type onViewController:(UIViewController *)viewController animated:(BOOL)animated;


/**
 * Method shows MMPEmojiPicker with specified emoji groups
 * @param1 type Any type defined in the MMPEmojiType. You can combine multiple types. If you didn't pass a valid type, It'll use MMPNature by default
 * @param2 viewController UIViewController object in which the picker need to be shown.
 * @param3 rect CGRect from where the picker should be shown
 * @param4 animated BOOL value, if  it is true picker will be animated when it is shown.
 * @note Use this method when you want to show picker in iPad devices.
 * @warning if you use this method on iPhone the picker will work, but it won't be displayed at the rect you specified. It's not recommended.
 */
- (void)showEmojiPickerOfType:(MMPEmojiType)type on:(UIViewController *)viewController FromRect:(CGRect)rect animated:(BOOL)animated;

/**
 * Method dismisses the MMPEmojiPicker
 * @param animated (BOOL) - If it is true the picker will be dismisses with an animation
 */
- (void)dismissEmojiPicker:(BOOL)animated;

@end