/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UITextInputController;

__attribute__((visibility("hidden")))
@interface _UIUndoTextOperation : NSObject

{
    UITextInputController *_inputController;
    struct _NSRange _affectedRange;
}

@property (nonatomic) struct _NSRange affectedRange;
@property (weak, nonatomic) UITextInputController *inputController;

- (void)undoRedo;
- (id)initWithAffectedRange:(struct _NSRange)arg1 inputController:(id)arg2;
- (_Bool)supportsCoalescing;

@end
