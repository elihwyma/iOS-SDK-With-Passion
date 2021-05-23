/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UITextGestureClusterKeyboardTextSelectionForEditableTextField.h>

@class NSString, UIKeyboardTaskQueue, _UIKeyboardTextSelectionController;

__attribute__((visibility("hidden")))
@interface UITextGestureClusterKeyboardTextSelectionForNonEditableTextField : UITextGestureClusterKeyboardTextSelectionForEditableTextField

{
    _UIKeyboardTextSelectionController *_textSelectionController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UIKeyboardTaskQueue *taskQueue;
@property (nonatomic, readonly) _UIKeyboardTextSelectionController *textSelectionController;
@property (nonatomic, readonly) double timestampOfLastTouchesEnded;

- (id)initWithView:(id)arg1;
- (_Bool)shouldAllowSelectionGestures:(_Bool)arg1 atPoint:(struct CGPoint)arg2 toBegin:(_Bool)arg3;
- (void)detach;
- (void)willBeginGesture;
- (void)didEndGesture;

@end
