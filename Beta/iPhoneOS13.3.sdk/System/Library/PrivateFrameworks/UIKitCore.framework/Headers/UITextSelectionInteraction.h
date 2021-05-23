/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UITextInteraction.h>

@class UITextGestureTuning;

__attribute__((visibility("hidden")))
@interface UITextSelectionInteraction : UITextInteraction

{
    double _lastTapTimestamp;
    struct CGPoint _lastTapLocation;
    long long _previousRepeatedGranularity;
    UITextGestureTuning *_gestureTuning;
}

- (void)didMoveToView:(id)arg1;
- (void)confirmMarkedText:(id)arg1;
- (void)_createGestureTuningIfNecessary;
- (void)oneFingerDoubleTap:(id)arg1;
- (void)oneFingerTap:(id)arg1;
- (void)oneFingerTapSelectsAll:(id)arg1;
- (void)tapAndAHalf:(id)arg1;
- (void)setHybridSelectionWithPoint:(struct CGPoint)arg1;
- (_Bool)shouldHandleOneFingerTapInUneditable:(id)arg1;
- (void)twoFingerRangedSelectGesture:(id)arg1;
- (void)toggleSelectionCommands;
- (id)initWithMode:(long long)arg1;
- (_Bool)_isNowWithinRepeatedTapTime;
- (void)finishSetup;
- (id)_transientState;
- (void)_applyTransientState:(id)arg1;
- (_Bool)interaction_gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)_isWithinRepeatedTapTimeForTouch:(id)arg1;
- (void)performTapActionWithDelegate:(id)arg1 atPoint:(struct CGPoint)arg2 granularity:(long long)arg3 modifierFlags:(long long)arg4;
- (_Bool)_isRepeatedTap:(id)arg1 gestureLocationOut:(struct CGPoint *)arg2;
- (_Bool)_isShiftKeyBeingHeldForGesture:(id)arg1;
- (void)_updateTapGestureHistoryWithLocation:(struct CGPoint)arg1;
- (long long)_textGranularityForRepeatedTap:(long long)arg1;
- (void)oneFingerTripleTap:(id)arg1;

@end
