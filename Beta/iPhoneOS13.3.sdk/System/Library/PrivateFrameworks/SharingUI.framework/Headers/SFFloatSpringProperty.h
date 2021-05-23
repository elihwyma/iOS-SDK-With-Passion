/*
 Image: /System/Library/PrivateFrameworks/SharingUI.framework/SharingUI
 */

#import <UIKit/UIViewFloatAnimatableProperty.h>

__attribute__((visibility("hidden")))
@interface SFFloatSpringProperty : UIViewFloatAnimatableProperty

{
    double _dampingRatio;
    double _response;
    double _trackingDampingRatio;
    double _trackingResponse;
    _Bool _primed;
    _Bool _tracking;
}

@property (nonatomic) _Bool primed;
@property (nonatomic) double input;
@property (nonatomic) double output;
@property (nonatomic) _Bool tracking;

+ (void)_withoutAnimation:(CDUnknownBlockType)arg1;

- (id)init;
- (void)setDampingRatio:(double)arg1 response:(double)arg2;
- (CDStruct_aa45ca86)parametersForTransitionFromState:(int)arg1 toState:(int)arg2;
- (void)setTrackingDampingRatio:(double)arg1 response:(double)arg2;
- (double)projectForDeceleration:(double)arg1;
- (double)projectForTime:(double)arg1;

@end
