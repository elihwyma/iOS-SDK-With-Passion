/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

#import <HomeKit/Swift-Protocol.h>

@class HMDevice, HMFUnfairLock, HMHome, HMMutableArray, HMUser, NSArray, NSDate, NSString, NSUUID, _HMContext;

@protocol OS_dispatch_queue;

@interface HMTrigger : NSObject <Swift>

{
    HMFUnfairLock *_lock;
    _Bool _enabled;
    NSString *_name;
    NSUUID *_uniqueIdentifier;
    NSDate *_lastFireDate;
    NSUUID *_uuid;
    HMHome *_home;
    HMDevice *_ownerDevice;
    HMUser *_owner;
    _HMContext *_context;
    HMMutableArray *_currentActionSets;
}

@property (nonatomic, getter=isEnabled) _Bool enabled;
@property (copy, nonatomic) NSString *name;
@property (nonatomic, readonly) _HMContext *context;
@property (retain, nonatomic) NSUUID *uuid;
@property (retain, nonatomic) HMMutableArray *currentActionSets;
@property (weak, nonatomic) HMHome *home;
@property (copy, nonatomic) NSDate *lastFireDate;
@property (retain, nonatomic) HMDevice *ownerDevice;
@property (weak, nonatomic) HMUser *owner;
@property (nonatomic, readonly) HMDevice *creatorDevice;
@property (weak, nonatomic, readonly) HMUser *creator;
@property (copy, nonatomic, readonly) NSArray *actionSets;
@property (copy, nonatomic, readonly) NSUUID *uniqueIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (void)_invalidate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1;
- (id)_serializeForAdd;
- (_Bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)_registerNotificationHandlers;
- (void)__configureWithContext:(id)arg1 home:(id)arg2;
- (void)_unconfigure;
- (void)_addActionSet:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_updateActionSet:(id)arg1 add:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_removeActionSet:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_updateName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_enable:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addActionSetOfType:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_addActionSetOfType:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_handleTriggerFired:(id)arg1;
- (void)_handleUpdatedActionSetNotification:(id)arg1;
- (void)_handleTriggerRenamedNotification:(id)arg1;
- (void)_handleTriggerActivatedNotification:(id)arg1;
- (void)_handleTriggerFiredNotification:(id)arg1;
- (void)addActionSet:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeActionSet:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)enable:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addActionSetWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)compatibleWithApp;

@end
