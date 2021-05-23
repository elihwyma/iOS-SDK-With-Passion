/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIForceLevelClassifier.h>

@class _UIPreviewInteractionStateRecognizer;

@interface _UIPreviewInteractionForceLevelClassifier : _UIForceLevelClassifier

{
    _UIPreviewInteractionStateRecognizer *_stateRecognizer;
}

- (id)init;
- (void)reset;
- (void)touchForceMultiplierDidChange;
- (void)observeTouchWithForceValue:(double)arg1 atTimestamp:(double)arg2 withCentroidAtLocation:(struct CGPoint)arg3;
- (_Bool)wantsUnclampedForceValues;
- (id)transformerFromTouchForceMessageToProgressToForceLevel:(long long)arg1 minimumRequiredForceLevel:(long long)arg2;

@end
