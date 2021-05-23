/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIUndoTextOperation.h>

@class NSAttributedString;

__attribute__((visibility("hidden")))
@interface _UITextUndoOperationReplace : _UIUndoTextOperation

{
    struct _NSRange _replacementRange;
    NSAttributedString *_attributedString;
}

- (void)undoRedo;
- (id)initWithAffectedRange:(struct _NSRange)arg1 inputController:(id)arg2 replacementRange:(struct _NSRange)arg3;

@end
