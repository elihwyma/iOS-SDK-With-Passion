/*
 Image: /System/Library/PrivateFrameworks/IMSharedUI.framework/IMSharedUI
 */

#import <UIKit/NSTextStorage.h>

@interface NSTextStorage (IMChatTranscriptSupport)

+ (id)createLayoutTextStorage;
+ (id)defaultLayoutTextStorage;

- (struct IMTextLayoutResults)sizeForAttributedString:(id)arg1 maxWidth:(double)arg2;

@end
