/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIKeyboardTextSelectionInteraction.h>

@class UITextGestureTuning;

__attribute__((visibility("hidden")))
@interface _UIKeyboardBasedTextSelectionInteraction : _UIKeyboardTextSelectionInteraction

{
    UITextGestureTuning *_gestureTuning;
}

@property (nonatomic, readonly) UITextGestureTuning *gestureTuning;

- (void)dealloc;
- (id)owner;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)didMoveToView:(id)arg1;
- (void)oneFingerForcePan:(id)arg1;
- (void)oneFingerForcePress:(id)arg1;
- (_Bool)enclosingScrollViewIsScrolling;
- (void)_createGestureTuningIfNecessary;
- (void)transitionFromBlockMagnifyToBlockSelectWithLocation:(struct CGPoint)arg1 viaDrag:(_Bool)arg2;
- (void)_processGestureForCustomHighlighter:(id)arg1;
- (void)endOneFingerSelectWithExecutionContext:(id)arg1;
- (void)updateOneFingerSelectWithTranslation:(struct CGPoint)arg1 executionContext:(id)arg2;
- (void)beginOneFingerSelectWithTranslation:(struct CGPoint)arg1 executionContext:(id)arg2;

@end
