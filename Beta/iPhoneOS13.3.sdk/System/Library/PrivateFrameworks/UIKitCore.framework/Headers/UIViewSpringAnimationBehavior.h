/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@interface UIViewSpringAnimationBehavior : NSObject

{
    double _trackingDampingRatio;
    double _trackingResponse;
    double _dampingRatio;
    double _response;
    double _dampingRatioSmoothing;
    double _responseSmoothing;
    double _inertialTargetSmoothing;
    double _inertialProjectionDeceleration;
}

@property (nonatomic) double inertialTargetSmoothing;
@property (nonatomic) double inertialProjectionDeceleration;

- (id)init;
- (void)setDampingRatio:(double)arg1 response:(double)arg2;
- (void)setTrackingDampingRatio:(double)arg1 response:(double)arg2 dampingRatioSmoothing:(double)arg3 responseSmoothing:(double)arg4;
- (CDStruct_6c8af1d9)parametersForTransitionFromState:(int)arg1 toState:(int)arg2;

@end
