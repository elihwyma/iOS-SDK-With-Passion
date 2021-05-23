/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

#import <HomeKit/Swift-Protocol.h>

@class HMApplicationData, HMFUnfairLock, HMHome, HMMutableArray, NSArray, NSString, NSUUID, _HMContext;

@protocol OS_dispatch_queue;

@interface HMServiceGroup : NSObject <Swift>

{
    HMFUnfairLock *_lock;
    NSUUID *_uniqueIdentifier;
    NSUUID *_uuid;
    NSString *_name;
    HMHome *_home;
    HMApplicationData *_applicationData;
    _HMContext *_context;
    HMMutableArray *_currentServices;
}

@property (retain, nonatomic) _HMContext *context;
@property (retain, nonatomic) HMMutableArray *currentServices;
@property (nonatomic, readonly) NSUUID *uuid;
@property (weak, nonatomic) HMHome *home;
@property (copy, nonatomic, readonly) NSString *name;
@property (copy, nonatomic, readonly) NSArray *services;
@property (copy, nonatomic, readonly) NSUUID *uniqueIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) HMApplicationData *applicationData;
@property (copy, readonly) NSUUID *applicationDataIdentifier;

+ (_Bool)supportsSecureCoding;
+ (id)logCategory;

- (id)init;
- (void)dealloc;
- (void)_invalidate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setName:(id)arg1;
- (id)logIdentifier;
- (void)updateApplicationData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setApplicationData:(id)arg1;
- (_Bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)_registerNotificationHandlers;
- (void)__configureWithContext:(id)arg1 home:(id)arg2;
- (void)_unconfigure;
- (void)_updateName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_findService:(id)arg1;
- (void)_addService:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_removeService:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_handleServiceAddedNotification:(id)arg1;
- (void)_handleServiceRemovedNotification:(id)arg1;
- (void)_handleServiceGroupRenamedNotification:(id)arg1;
- (id)initWithName:(id)arg1 uuid:(id)arg2;
- (void)_removeServices:(id)arg1;
- (void)addService:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeService:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
