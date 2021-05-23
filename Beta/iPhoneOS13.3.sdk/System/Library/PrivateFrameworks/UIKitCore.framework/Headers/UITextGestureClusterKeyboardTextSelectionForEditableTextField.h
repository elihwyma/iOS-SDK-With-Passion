/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UITextGestureCluster.h>

@class _UIKeyboardTextSelectionGestureController;

__attribute__((visibility("hidden")))
@interface UITextGestureClusterKeyboardTextSelectionForEditableTextField : UITextGestureCluster

{
    _UIKeyboardTextSelectionGestureController *_textSelectionGestureController;
}

- (id)initWithView:(id)arg1;
- (void)detach;
- (void)completeInitialisation;
- (void)finishInit;
- (id)initRawWithView:(id)arg1;

@end
