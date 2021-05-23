/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

#import <HomeKit/Swift-Protocol.h>

@class HMFUnfairLock, HMMutableArray, NSHashTable, NSSet, NSString, NSUUID, _HMContext;

@protocol HMSymptomsHandlerDelegate, OS_dispatch_queue;

@interface HMSymptomsHandler : NSObject <Swift>

{
    HMFUnfairLock *_lock;
    NSUUID *_sfDeviceIdentifier;
    NSUUID *_uniqueIdentifier;
    id <HMSymptomsHandlerDelegate> _delegate;
    _HMContext *_context;
    NSHashTable *_fixSessions;
    NSUUID *_uuid;
    HMMutableArray *_currentSymptoms;
}

@property (retain, nonatomic) _HMContext *context;
@property (retain, nonatomic) NSHashTable *fixSessions;
@property (nonatomic, readonly) NSUUID *uuid;
@property (nonatomic, readonly) HMMutableArray *currentSymptoms;
@property (copy, setter=setSFDeviceIdentifier:) NSUUID *sfDeviceIdentifier;
@property (copy, readonly) NSSet *symptoms;
@property (weak) id <HMSymptomsHandlerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *uniqueIdentifier;

+ (_Bool)supportsSecureCoding;
+ (id)logCategory;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1;
- (id)logIdentifier;
- (_Bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)__configureWithContext:(id)arg1;
- (void)registerForMessages;
- (void)_handleSymptomsUpdated:(id)arg1;
- (void)_handleSFDeviceIdentifierUpdated:(id)arg1;
- (void)_addFixSession:(id)arg1;
- (id)_findAndRemoveFixSessionsForSymptom:(id)arg1;
- (void)_callSymptomsUpdatedDelegate:(id)arg1;
- (void)_callFixSessionAvailabilityUpdatedDelegate;
- (id)newFixSessionForSymptom:(id)arg1;
- (void)initiateFixWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
