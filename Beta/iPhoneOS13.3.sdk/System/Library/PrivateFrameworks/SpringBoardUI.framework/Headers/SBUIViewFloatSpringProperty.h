/*
 Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import <UIKit/UIViewFloatAnimatableProperty.h>

@interface SBUIViewFloatSpringProperty : UIViewFloatAnimatableProperty

{
    double _dampingRatio;
    double _response;
    double _impulse;
    double _trackingDampingRatio;
    double _trackingResponse;
    double _trackingImpulse;
    _Bool _tracking;
}

@property (nonatomic) double input;
@property (nonatomic) double output;
@property (nonatomic) _Bool tracking;

+ (void)_withoutAnimation:(CDUnknownBlockType)arg1;

- (id)init;
- (void)setDampingRatio:(double)arg1 response:(double)arg2;
- (CDStruct_aa45ca86)parametersForTransitionFromState:(int)arg1 toState:(int)arg2;
- (void)setDampingRatio:(double)arg1 response:(double)arg2 impulse:(double)arg3;
- (void)setTrackingDampingRatio:(double)arg1 response:(double)arg2;
- (void)setTrackingDampingRatio:(double)arg1 response:(double)arg2 impulse:(double)arg3;
- (double)projectForDeceleration:(double)arg1;
- (double)projectForTime:(double)arg1;

@end
