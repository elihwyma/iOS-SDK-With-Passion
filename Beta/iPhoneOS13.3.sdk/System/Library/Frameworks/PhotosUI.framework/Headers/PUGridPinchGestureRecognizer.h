/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <UIKit/UIPinchGestureRecognizer.h>

__attribute__((visibility("hidden")))
@interface PUGridPinchGestureRecognizer : UIPinchGestureRecognizer

{
    struct CGPoint _touch0InitialLocation;
    struct CGPoint _touch1InitialLocation;
    double _lastTransitionProgress;
    unsigned long long _transitionDirection;
}

@property (nonatomic, readonly) double transitionProgress;
@property (nonatomic, readonly) struct CGSize centerOffset;
@property (nonatomic, readonly) unsigned long long transitionDirection;
@property (nonatomic, readonly) _Bool transitionShouldFinish;

- (void)reset;
- (void)setState:(long long)arg1;
- (void)_resetTransitionState;

@end
