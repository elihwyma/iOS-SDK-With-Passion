/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

#import <HomeKit/Swift-Protocol.h>

@class HMEventTrigger, HMFUnfairLock, NSString, NSUUID, _HMContext;

@protocol OS_dispatch_queue;

@interface HMEvent : NSObject <Swift>

{
    HMFUnfairLock *_lock;
    _Bool _endEvent;
    HMEventTrigger *_eventTrigger;
    NSUUID *_uniqueIdentifier;
    _HMContext *_context;
    NSUUID *_uuid;
    NSString *_triggerType;
}

@property (retain, nonatomic) _HMContext *context;
@property (nonatomic, readonly) NSUUID *uuid;
@property (nonatomic, getter=isEndEvent) _Bool endEvent;
@property (nonatomic, readonly) NSString *triggerType;
@property (weak, nonatomic) HMEventTrigger *eventTrigger;
@property (copy, nonatomic, readonly) NSUUID *uniqueIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (_Bool)supportsSecureCoding;
+ (_Bool)sharedTriggerActivationSupportedForHome:(id)arg1;
+ (_Bool)isSupportedForHome:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (void)_invalidate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDict:(id)arg1;
- (void)__configureWithContext:(id)arg1 eventTrigger:(id)arg2;
- (id)_serializeForAdd;
- (void)_handleEventUpdatedNotification:(id)arg1;
- (_Bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)_registerNotificationHandlers;
- (void)_updateTriggerType;

@end
