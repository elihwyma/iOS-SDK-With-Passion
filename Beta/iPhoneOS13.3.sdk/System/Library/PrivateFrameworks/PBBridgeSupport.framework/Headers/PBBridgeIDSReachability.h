/*
 Image: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
 */

#import <Foundation/NSObject.h>

@class IDSService, NSMutableOrderedSet, NSString, PBBridgeIDSReachabilityStatusObject;

@protocol OS_dispatch_queue;

@interface PBBridgeIDSReachability : NSObject

{
    NSMutableOrderedSet *_observers;
    IDSService *_reachabilityService;
    NSObject<OS_dispatch_queue> *_queue;
    struct os_unfair_lock_s _lock;
    PBBridgeIDSReachabilityStatusObject *_activeDeviceStatus;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)deviceStatusFromIDSDevices:(id)arg1 nrDevices:(id)arg2;
+ (id)nrDevices;

- (id)init;
- (void)addObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;
- (void)service:(id)arg1 devicesChanged:(id)arg2;
- (void)service:(id)arg1 nearbyDevicesChanged:(id)arg2;
- (void)service:(id)arg1 connectedDevicesChanged:(id)arg2;
- (void)_processDevices:(id)arg1;
- (id)getDeviceStatusChangeFromIDSDevices:(id)arg1 nrDevices:(id)arg2;
- (unsigned long long)reachabilityForDevice:(id)arg1;
- (void)service:(id)arg1 linkedDevicesChanged:(id)arg2;

@end
