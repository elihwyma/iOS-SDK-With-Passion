/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

#import <HomeKit/Swift-Protocol.h>

@class HMAccessory, HMFUnfairLock, HMHome, NSArray, NSString, NSUUID, _HMContext;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _HMAccessoryProfile : NSObject <Swift>

{
    HMFUnfairLock *_lock;
    NSUUID *_uniqueIdentifier;
    _HMContext *_context;
    HMAccessory *_accessory;
    HMHome *_home;
    NSUUID *_profileUniqueIdentifier;
    NSArray *_services;
}

@property (nonatomic, readonly) _HMContext *context;
@property (weak, nonatomic, readonly) HMAccessory *accessory;
@property (weak, nonatomic, readonly) HMHome *home;
@property (copy, nonatomic, readonly) NSUUID *profileUniqueIdentifier;
@property (nonatomic, readonly) NSArray *services;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSUUID *uniqueIdentifier;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)_registerNotificationHandlers;
- (void)handleRuntimeStateUpdate:(id)arg1;
- (id)initWithUUID:(id)arg1 services:(id)arg2;
- (void)__configureWithContext:(id)arg1 accessory:(id)arg2;

@end
