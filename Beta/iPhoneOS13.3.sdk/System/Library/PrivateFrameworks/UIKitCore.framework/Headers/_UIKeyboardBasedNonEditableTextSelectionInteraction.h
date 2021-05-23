/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIKeyboardBasedTextSelectionInteraction.h>

__attribute__((visibility("hidden")))
@interface _UIKeyboardBasedNonEditableTextSelectionInteraction : _UIKeyboardBasedTextSelectionInteraction

{
    _Bool _isShiftKeyBeingHeld;
}

- (void)oneFingerForcePan:(id)arg1;
- (void)oneFingerForcePress:(id)arg1;
- (void)transitionFromBlockMagnifyToBlockSelectWithLocation:(struct CGPoint)arg1 viaDrag:(_Bool)arg2;
- (void)_synchronousGranularityExpandingGestureWithTimeInterval:(double)arg1 timeGranularity:(double)arg2 isMidPan:(_Bool)arg3;

@end
