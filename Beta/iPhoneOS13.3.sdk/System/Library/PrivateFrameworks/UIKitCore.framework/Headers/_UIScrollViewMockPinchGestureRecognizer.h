/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class UIScrollViewPinchGestureRecognizer;

__attribute__((visibility("hidden")))
@interface _UIScrollViewMockPinchGestureRecognizer : NSObject

{
    double _scale;
    double _velocity;
    long long _state;
    UIScrollViewPinchGestureRecognizer *_gestureRecognizer;
}

@property (retain, nonatomic) UIScrollViewPinchGestureRecognizer *gestureRecognizer;
@property (nonatomic) long long state;

- (id)forwardingTargetForSelector:(SEL)arg1;
- (double)scale;
- (double)velocity;
- (struct CGPoint)anchorPoint;
- (id)_activeTouchesForEvent:(id)arg1;
- (void)simulateScale:(double)arg1 velocity:(double)arg2;

@end
