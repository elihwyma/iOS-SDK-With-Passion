/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

#import <HomeKit/Swift-Protocol.h>

@class HMBulletinBoardNotificationServiceGroup, HMFUnfairLock, HMService, NSPredicate, NSString, NSUUID, _HMContext;

@protocol OS_dispatch_queue;

@interface HMBulletinBoardNotification : NSObject <Swift>

{
    HMFUnfairLock *_lock;
    _Bool _enabled;
    NSPredicate *_condition;
    HMBulletinBoardNotificationServiceGroup *_notificationServiceGroup;
    NSUUID *_uniqueIdentifier;
    NSUUID *_targetUUID;
    HMService *_service;
    NSString *_logID;
    _HMContext *_context;
}

@property (copy, nonatomic, readonly) NSUUID *targetUUID;
@property (copy, nonatomic, readonly) NSString *logID;
@property (retain, nonatomic) _HMContext *context;
@property (weak, nonatomic, readonly) HMService *service;
@property (nonatomic, getter=isEnabled) _Bool enabled;
@property (retain, nonatomic) NSPredicate *condition;
@property (nonatomic, readonly) HMBulletinBoardNotificationServiceGroup *notificationServiceGroup;
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
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)logIdentifier;
- (void)commitWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)_registerNotificationHandlers;
- (void)__configureWithContext:(id)arg1;
- (void)_commitWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_handleBulletinBoardNotificationUpdateNotification:(id)arg1;
- (void)_callBulletinBoardNotificationUpdatedDelegate;

@end
