/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@class MISSING_TYPE;

@interface ARCoachingMotionTracker : NSObject

{
    MISSING_TYPE *_velocities[5];
    MISSING_TYPE *_lastPosition;
    double _lastTime;
    int _velocityIndex;
    double _lastThresholdBreakTime;
    int _thresholdBreakCount;
    _Bool _wasMoving;
    _Bool _isMoving;
}

@property (nonatomic) _Bool isMoving;
@property (nonatomic, readonly) _Bool didStartMoving;
@property (nonatomic, readonly) _Bool didStopMoving;

- (id)init;
- (void)clear;
- (void)updateWithFrame:(id)arg1;
- (MISSING_TYPE *)calcAverageVelocity;

@end
