/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

#import <ARKit/Swift-Protocol.h>

@class ARAccelerometerData, ARGyroscopeData, NSString;

@protocol ARSensorDelegate, OS_dispatch_queue;

@interface ARIOMotionSensor : NSObject <Swift>

{
    struct __IOHIDEventSystemClient *_accelerometerSystemClient;
    struct __IOHIDServiceClient *_accelerometerService;
    struct __IOHIDEventSystemClient *_gyroSystemClient;
    struct __IOHIDServiceClient *_gyroService;
    NSObject<OS_dispatch_queue> *_imuDataQueue;
    ARGyroscopeData *_currentGyroData;
    ARAccelerometerData *_currentAccelerometerData;
    id <ARSensorDelegate> _delegate;
}

@property (weak, nonatomic) id <ARSensorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) unsigned long long powerUsage;

- (id)init;
- (void)dealloc;
- (void)stop;
- (void)start;
- (long long)preferredSampleRate;
- (unsigned long long)providedDataTypes;
- (void)accelerometerDidOutputEvent:(struct __IOHIDEvent *)arg1 timestamp:(double)arg2;
- (void)gyroscopeDidOutputEvent:(struct __IOHIDEvent *)arg1 timestamp:(double)arg2;

@end
