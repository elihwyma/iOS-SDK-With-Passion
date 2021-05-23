/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

#import <HomeKit/Swift-Protocol.h>

@class HMApplicationData, HMFUnfairLock, HMHome, HMMutableArray, NSDate, NSDictionary, NSSet, NSString, NSUUID, _HMContext;

@protocol OS_dispatch_queue;

@interface HMActionSet : NSObject <Swift>

{
    HMFUnfairLock *_lock;
    _Bool _executionInProgress;
    NSUUID *_uniqueIdentifier;
    NSString *_name;
    HMHome *_home;
    HMApplicationData *_applicationData;
    NSDate *_lastExecutionDate;
    NSString *_actionSetType;
    _HMContext *_context;
    HMMutableArray *_currentActions;
    NSUUID *_uuid;
}

@property (copy, readonly) NSDictionary *shortcutsDictionaryRepresentation;
@property (retain, nonatomic) _HMContext *context;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) HMMutableArray *currentActions;
@property (weak, nonatomic) HMHome *home;
@property (nonatomic, readonly) NSUUID *uuid;
@property (nonatomic) _Bool executionInProgress;
@property (copy, nonatomic, readonly) NSSet *actions;
@property (nonatomic, readonly, getter=isExecuting) _Bool executing;
@property (copy, nonatomic, readonly) NSString *actionSetType;
@property (copy, nonatomic, readonly) NSUUID *uniqueIdentifier;
@property (copy, nonatomic, readonly) NSDate *lastExecutionDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) HMApplicationData *applicationData;
@property (copy, readonly) NSUUID *applicationDataIdentifier;

+ (_Bool)supportsSecureCoding;
+ (id)actionSetFromProtoBuf:(id)arg1 home:(id)arg2;
+ (id)allowedActionClasses;
+ (id)shortcutsComponentActionSet;

- (id)init;
- (void)dealloc;
- (void)_invalidate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)updateApplicationData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setApplicationData:(id)arg1;
- (_Bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (_Bool)requiresDeviceUnlock;
- (id)encodeAsProtoBuf;
- (id)initWithShortcutsDictionaryRepresentation:(id)arg1 home:(id)arg2;
- (void)_registerNotificationHandlers;
- (void)__configureWithContext:(id)arg1 home:(id)arg2;
- (void)_unconfigure;
- (void)_updateName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_updateAction:(id)arg1 changes:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithName:(id)arg1 type:(id)arg2 uuid:(id)arg3;
- (void)_addAction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_doAddAction:(id)arg1 uuid:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_removeAction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_doRemoveActionWithUUID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setLastExecutionDate:(id)arg1;
- (void)_handleActionAddedNotification:(id)arg1;
- (void)_handleActionRemovedNotification:(id)arg1;
- (void)_handleActionUpdatedNotification:(id)arg1;
- (void)_handleActionSetRenamedNotification:(id)arg1;
- (void)_handleActionSetStartExecutionNotification:(id)arg1;
- (void)_handleActionSetExecutedNotification:(id)arg1;
- (void)addAction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeAction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
