/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UITextGestureCluster.h>

__attribute__((visibility("hidden")))
@interface UITextGestureClusterSelection : UITextGestureCluster

{
    double _lastTapTimestamp;
}

- (void)confirmMarkedText:(id)arg1;
- (_Bool)cluster_gestureRecognizerShouldBegin:(id)arg1;
- (void)oneFingerDoubleTap:(id)arg1;
- (void)oneFingerTap:(id)arg1;
- (void)oneFingerTapSelectsAll:(id)arg1;
- (void)tapAndAHalf:(id)arg1;
- (void)setHybridSelectionWithPoint:(struct CGPoint)arg1;
- (_Bool)shouldHandleOneFingerTapInUneditable:(id)arg1;
- (id)initWithView:(id)arg1 andMode:(int)arg2;
- (void)twoFingerRangedSelectGesture:(id)arg1;

@end
