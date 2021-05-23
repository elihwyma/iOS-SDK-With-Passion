/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <NotesShared/TTFont.h>

@interface TTFont (UI)

+ (struct UIFont *)convertFont:(struct UIFont *)arg1 toBold:(_Bool)arg2 toItalic:(_Bool)arg3;
+ (void)font:(struct UIFont *)arg1 isBold:(_Bool *)arg2 isItalic:(_Bool *)arg3;

- (struct UIFont *)nativeFontForStyle:(unsigned int)arg1 contentSizeCategory:(id)arg2;
- (struct UIFont *)nativeFontForStyle:(unsigned int)arg1;

@end
