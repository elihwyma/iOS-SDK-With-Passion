/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIUndoTextOperation.h>

@class NSMutableAttributedString;

__attribute__((visibility("hidden")))
@interface _UITextUndoOperationTyping : _UIUndoTextOperation

{
    struct _NSRange _replacementRange;
    NSMutableAttributedString *_attributedString;
}

- (void)undoRedo;
- (_Bool)supportsCoalescing;
- (id)initWithAffectedRange:(struct _NSRange)arg1 inputController:(id)arg2 replacementRange:(struct _NSRange)arg3;
- (_Bool)coalesceAffectedRange:(struct _NSRange)arg1 replacementRange:(struct _NSRange)arg2 selectedRange:(struct _NSRange)arg3 textStorage:(id)arg4;

@end
