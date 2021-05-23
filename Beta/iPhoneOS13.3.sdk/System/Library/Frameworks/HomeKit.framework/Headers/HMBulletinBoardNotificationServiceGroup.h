/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

#import <HomeKit/Swift-Protocol.h>

@class HMBulletinBoardNotification, HMFUnfairLock, NSArray, NSSet, NSString, NSUUID, _HMContext;

@protocol OS_dispatch_queue;

@interface HMBulletinBoardNotificationServiceGroup : NSObject <Swift>

{
    HMFUnfairLock *_lock;
    NSArray *_cameraProfiles;
    NSArray *_associatedServices;
    NSSet *_cameraProfileUUIDs;
    NSSet *_associatedServiceUUIDs;
    HMBulletinBoardNotification *_bulletinBoardNotification;
    NSUUID *_uniqueIdentifier;
    NSUUID *_targetUUID;
    _HMContext *_context;
    NSString *_logID;
}

@property (retain, nonatomic) _HMContext *context;
@property (retain, nonatomic) NSSet *cameraProfileUUIDs;
@property (retain, nonatomic) NSSet *associatedServiceUUIDs;
@property (retain, nonatomic) NSArray *cameraProfiles;
@property (retain, nonatomic) NSArray *associatedServices;
@property (copy, nonatomic, readonly) NSUUID *targetUUID;
@property (copy, nonatomic, readonly) NSString *logID;
@property (weak, nonatomic, readonly) HMBulletinBoardNotification *bulletinBoardNotification;
@property (copy, nonatomic, readonly) NSUUID *uniqueIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (_Bool)supportsSecureCoding;
+ (id)logCategory;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)logIdentifier;
- (_Bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)_registerNotificationHandlers;
- (void)_requestServiceGroup;
- (void)_handleBulletinBoardNotificationServiceGroupUpdateNotification:(id)arg1;
- (void)handleConfigureNotification:(id)arg1;
- (void)_findObjects;
- (void)_callServiceGroupUpdate;
- (void)__configureWithContext:(id)arg1;

@end
