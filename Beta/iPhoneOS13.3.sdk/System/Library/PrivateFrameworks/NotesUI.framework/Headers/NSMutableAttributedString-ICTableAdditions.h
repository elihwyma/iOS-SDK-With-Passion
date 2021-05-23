/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <Foundation/NSMutableAttributedString.h>

@interface NSMutableAttributedString (ICTableAdditions)

- (void)ic_convertParagraphStyleToBodyInRange:(struct _NSRange)arg1;
- (void)ic_addTextBlocks:(id)arg1 range:(struct _NSRange)arg2;
- (void)ic_setParagraphStyleForWritingDirection:(long long)arg1 andAlignment:(_Bool)arg2;
- (void)ic_addForgroundColorInRangesWhereNoColorAlreadyExists:(struct UIColor *)arg1;

@end
