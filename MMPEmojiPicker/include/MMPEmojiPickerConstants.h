//
//  MMPEmojiPickerConstants.h
//  MMPEmojiPicker
//
//  Created by Midhun on 29/08/14.
//  Copyright (c) 2014 Midhun. All rights reserved.
//

#ifndef MMPEmojiPicker_MMPEmojiPickerConstants_h
#define MMPEmojiPicker_MMPEmojiPickerConstants_h

#pragma mark - Enums

/**
 * Enum defines the available Emoji types
 * @note MMPNature is the default emoji type
 */

typedef enum : NSUInteger {
    MMPNature = 0,          // Represents the nature emojis
    MMPObject = 1 << 1,     // Represents the object emojis
    MMPPeople = 1 << 2,     // Represents the people emojis
    MMPPlace  = 1 << 3,     // Represents the place emojis
    MMPSymbol = 1 << 4      // Represents the symbol emojis
} MMPEmojiType;


#endif
