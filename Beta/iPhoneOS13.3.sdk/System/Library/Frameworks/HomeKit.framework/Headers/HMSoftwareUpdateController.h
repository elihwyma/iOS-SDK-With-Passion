/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

@class HMAccessory, HMFUnfairLock, HMSoftwareUpdate, NSString, NSUUID, _HMContext;

@protocol HMSoftwareUpdateControllerDelegate, OS_dispatch_queue;

@interface HMSoftwareUpdateController : NSObject

{
    HMFUnfairLock *_lock;
    HMSoftwareUpdate *_availableUpdate;
    HMAccessory *_accessory;
    id <HMSoftwareUpdateControllerDelegate> _delegate;
    NSUUID *_uniqueIdentifier;
    _HMContext *_context;
}

@property (retain, nonatomic) _HMContext *context;
@property (weak) HMAccessory *accessory;
@property (retain) HMSoftwareUpdate *availableUpdate;
@property (readonly, getter=isControllable) _Bool controllable;
@property (weak) id <HMSoftwareUpdateControllerDelegate> delegate;
@property (copy, nonatomic, readonly) NSUUID *uniqueIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;
+ (id)namespace;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)logIdentifier;
- (_Bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (id)messageDestination;
- (void)configureWithContext:(id)arg1;
- (id)initWithAccessory:(id)arg1;
- (void)fetchAvailableUpdateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)startUpdate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
