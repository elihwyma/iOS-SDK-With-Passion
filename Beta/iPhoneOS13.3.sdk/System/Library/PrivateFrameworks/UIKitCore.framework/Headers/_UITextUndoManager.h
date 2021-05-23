/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSUndoManager.h>

@class UITextInputController;

__attribute__((visibility("hidden")))
@interface _UITextUndoManager : NSUndoManager

{
    UITextInputController *_inputController;
}

@property (weak, nonatomic) UITextInputController *inputController;

- (void)removeAllActions;

@end
