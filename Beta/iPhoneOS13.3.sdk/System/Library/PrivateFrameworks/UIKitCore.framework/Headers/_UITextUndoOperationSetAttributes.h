/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIUndoTextOperation.h>

@class _NSAttributeRun;

__attribute__((visibility("hidden")))
@interface _UITextUndoOperationSetAttributes : _UIUndoTextOperation

{
    _NSAttributeRun *_attributes;
}

- (void)undoRedo;
- (id)initWithAffectedRange:(struct _NSRange)arg1 inputController:(id)arg2;

@end
