/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/_UIScrollDynamics.h>

__attribute__((visibility("hidden")))
@interface _UIScrollDynamicsiOSMac : _UIScrollDynamics

{
    double _durationUntilStop;
    double _durationUntilStopIgnoringRubberbanding;
    struct CGSize _absDisplacementVectorIgnoringRubberbanding;
    double _linearDisplacementIgnoringRubberbanding;
    struct CGPoint _destinationIgnoringRubberbanding;
    double _durationUntilRubberband;
    struct CGPoint _initialRubberbandingOrigin;
    struct CGVector _initialRubberbandingVelocity;
    double _decelerationRate;
}

- (id)init;
- (void)calculateDecelerationTarget;
- (void)calculateToReachDecelerationTarget;
- (double)durationUntilStop;
- (double)speedAfterDuration:(double)arg1;
- (struct CGVector)velocityAfterDuration:(double)arg1;
- (struct CGPoint)positionAfterDuration:(double)arg1;
- (_Bool)isRubberBandingAfterDuration:(double)arg1;

@end
