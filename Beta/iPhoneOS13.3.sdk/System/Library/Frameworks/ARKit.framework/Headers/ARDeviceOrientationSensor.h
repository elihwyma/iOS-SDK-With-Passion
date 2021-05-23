/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@class ARDeviceOrientationData, CMMotionManager, NSOperationQueue, NSString;

@protocol ARSensorDelegate;

@interface ARDeviceOrientationSensor : NSObject

{
    CMMotionManager *_motionManager;
    ARDeviceOrientationData *_currentOrientationData;
    NSOperationQueue *_errorQueueDeviceMotion;
    double _previousCaptureEndingTimestamp;
    id <ARSensorDelegate> _delegate;
    long long _worldAlignment;
}

@property (weak, nonatomic) id <ARSensorDelegate> delegate;
@property (nonatomic, readonly) long long worldAlignment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) unsigned long long powerUsage;

- (void)dealloc;
- (void)stop;
- (void)start;
- (id)currentData;
- (unsigned long long)providedDataTypes;
- (id)initWithMotionManager:(id)arg1 alignment:(long long)arg2;

@end
