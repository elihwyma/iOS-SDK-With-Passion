/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSUUID, SFDeviceDiscovery;

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface PKProximityDetector : NSObject

{
    SFDeviceDiscovery *_nearbyInfoDiscovery;
    _Bool _advertisingDeviceNearby;
    NSObject<OS_dispatch_source> *_timer;
    NSObject<OS_dispatch_queue> *_timerQueue;
    NSObject<OS_dispatch_queue> *_discoveryQueue;
    unsigned int _powerAssertionIdentifier;
    _Bool _isDetecting;
    NSUUID *_advertisingDeviceUUID;
    CDUnknownBlockType _handler;
}

@property (nonatomic, readonly) NSUUID *advertisingDeviceUUID;
@property (copy, nonatomic) CDUnknownBlockType handler;
@property (nonatomic, readonly) _Bool isDetecting;

- (void)dealloc;
- (void)endDetecting;
- (void)_createPowerAssertion;
- (CDUnknownBlockType)_createDeviceFoundBlockWithName:(id)arg1;
- (CDUnknownBlockType)_createDeviceLostBlockWithName:(id)arg1;
- (CDUnknownBlockType)_createDiscoveryActivationBlockWithName:(id)arg1 duration:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_queue_endDetecting;
- (void)_endPowerAssertion;
- (id)initWithAdvertisingDeviceUUID:(id)arg1;
- (void)startDetectingWithDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;

@end
