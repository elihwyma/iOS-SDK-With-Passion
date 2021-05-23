/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

#import <ARKit/Swift-Protocol.h>

@class ARAccelerometerData, ARGyroscopeData, CMMotionManager, NSString;

@protocol ARSensorDelegate;

@interface ARMotionSensor : NSObject <Swift>

{
    CMMotionManager *_motionManager;
    ARGyroscopeData *_currentGyroData;
    ARAccelerometerData *_currentAccelerometerData;
    id <ARSensorDelegate> _delegate;
    double _interval;
}

@property (nonatomic) double interval;
@property (weak, nonatomic) id <ARSensorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) unsigned long long powerUsage;

- (void)dealloc;
- (void)stop;
- (void)start;
- (double)preferredInterval;
- (unsigned long long)providedDataTypes;
- (void)gyroscopeOutput:(const CDStruct_a1e77815 *)arg1;
- (void)accelerometerOutput:(const CDStruct_a1e77815 *)arg1;
- (id)initWithMotionManager:(id)arg1;

@end
