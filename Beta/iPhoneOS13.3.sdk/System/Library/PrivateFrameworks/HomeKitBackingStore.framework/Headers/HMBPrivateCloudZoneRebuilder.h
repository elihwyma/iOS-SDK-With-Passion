/*
 Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
 */

#import <HMFoundation/HMFObject.h>

@class CKRecord, HMBCloudZone, HMBCloudZoneRebuilderStatus, HMFTimer, HMFUnfairLock, NAFuture, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMBPrivateCloudZoneRebuilder : HMFObject

{
    HMBCloudZoneRebuilderStatus *_rebuilderStatus;
    NAFuture *_rebuildCompleteFuture;
    HMFUnfairLock *_propertyLock;
    CKRecord *_previousSentinelRebuildRecord;
    NSUUID *_lastRebuildUUID;
    HMFTimer *_uploadMonitorWatchdogTimer;
    HMBCloudZone *_cloudZone;
}

@property (nonatomic, readonly) HMFUnfairLock *propertyLock;
@property (retain, nonatomic) CKRecord *previousSentinelRebuildRecord;
@property (retain, nonatomic) NSUUID *lastRebuildUUID;
@property (retain, nonatomic) HMFTimer *uploadMonitorWatchdogTimer;
@property (weak, nonatomic) HMBCloudZone *cloudZone;
@property (retain, nonatomic) NAFuture *rebuildCompleteFuture;
@property (copy) HMBCloudZoneRebuilderStatus *rebuilderStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly, getter=isZoneRebuildInProgress) _Bool zoneRebuildInProgress;

+ (id)logCategory;

- (id)logIdentifier;
- (void)timerDidFire:(id)arg1;
- (void)rebuild;
- (id)zoneStartUp;
- (void)handleIdentityLost;
- (void)handleZoneChanged;
- (id)initWithCloudZone:(id)arg1;

@end
