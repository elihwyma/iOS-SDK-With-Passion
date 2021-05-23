/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

@class HMFUnfairLock, HMSoftwareUpdate, NSString, NSUUID, _HMContext;

@protocol HMSoftwareUpdateManagerDelegate, OS_dispatch_queue;

@interface HMSoftwareUpdateManager : NSObject

{
    HMFUnfairLock *_lock;
    _Bool _started;
    HMSoftwareUpdate *_availableUpdate;
    id <HMSoftwareUpdateManagerDelegate> _delegate;
    _HMContext *_context;
    NSUUID *_identifier;
}

@property (nonatomic, readonly) _HMContext *context;
@property (readonly) NSUUID *identifier;
@property (nonatomic, getter=isStarted) _Bool started;
@property (weak) id <HMSoftwareUpdateManagerDelegate> delegate;
@property (readonly) HMSoftwareUpdate *availableUpdate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;

- (id)init;
- (void)dealloc;
- (void)stop;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)reconnect;
- (id)messageDestination;
- (void)setAvailableUpdate:(id)arg1;
- (void)__registerForMessages;
- (void)_handleUpdatedAvailableUpdate:(id)arg1;
- (void)_handleFetch:(id)arg1;
- (void)_handleStartUpdate:(id)arg1;
- (void)_reallyStartWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)updateAvailableUpdate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
