/*
 Image: /System/Library/PrivateFrameworks/EmojiFoundation.framework/EmojiFoundation
 */

#import <Foundation/NSString.h>

@interface NSString (EMFEmojiExtras)

- (_Bool)_containsEmoji;
- (void)_enumerateEmojiTokensInRange:(struct _NSRange)arg1 block:(CDUnknownBlockType)arg2;
- (_Bool)_isSingleEmoji;

@end
