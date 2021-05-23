/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UITextInteraction.h>

@class UITextGestureTuning;

__attribute__((visibility("hidden")))
@interface UITextPhraseBoundaryInteraction : UITextInteraction

{
    UITextGestureTuning *_gestureTuning;
}

- (void)didMoveToView:(id)arg1;
- (struct CGPoint)pointIfPlacedCarefully:(struct CGPoint)arg1;
- (struct CGPoint)touchAlignedPointForPoint:(struct CGPoint)arg1 translation:(struct CGPoint)arg2;
- (id)initWithTextInput:(id)arg1;
- (void)_createGestureTuningIfNecessary;
- (void)updateVisibilityOffsetForGesture:(id)arg1;
- (id)_phraseBoundaryGestureRecognizer;
- (void)_phraseBoundaryGesture:(id)arg1;

@end
