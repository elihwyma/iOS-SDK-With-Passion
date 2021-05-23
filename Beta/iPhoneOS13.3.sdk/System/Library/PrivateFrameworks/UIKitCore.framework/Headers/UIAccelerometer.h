/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class CMMotionManager;

@protocol UIAccelerometerDelegate;

@interface UIAccelerometer : NSObject

{
    double _updateInterval;
    id <UIAccelerometerDelegate> _delegate;
    struct {
        unsigned int delegateDidAccelerate:1;
        unsigned int reserved:31;
    } _accelerometerFlags;
    CMMotionManager *_motionManager;
}

@property (nonatomic) double updateInterval;
@property (weak, nonatomic) id <UIAccelerometerDelegate> delegate;

+ (id)sharedAccelerometer;

- (id)init;
- (void)dealloc;
- (void)_willResume:(id)arg1;
- (void)_didSuspend:(id)arg1;
- (id)_motionManager;
- (void)_startAccelerometerIfNecessary;
- (void)_stopAccelerometer;
- (void)_acceleratedInX:(double)arg1 y:(double)arg2 z:(double)arg3 timestamp:(double)arg4;

@end
