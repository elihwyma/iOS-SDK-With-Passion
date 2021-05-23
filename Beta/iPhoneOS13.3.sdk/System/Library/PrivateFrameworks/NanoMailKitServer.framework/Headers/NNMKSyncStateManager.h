/*
 Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

#import <Foundation/NSObject.h>

@class BLTPingSubscriber, NSString, PSYSyncCoordinator;

@protocol NNMKSyncStateManagerDelegate;

@interface NNMKSyncStateManager : NSObject

{
    id <NNMKSyncStateManagerDelegate> delegate;
    BLTPingSubscriber *_notificationsPingSubscriber;
    PSYSyncCoordinator *_initialSyncCoordinator;
}

@property (retain, nonatomic) BLTPingSubscriber *notificationsPingSubscriber;
@property (retain, nonatomic) PSYSyncCoordinator *initialSyncCoordinator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <NNMKSyncStateManagerDelegate> delegate;

- (id)init;
- (void)dealloc;
- (void)syncCoordinator:(id)arg1 beginSyncSession:(id)arg2;
- (void)syncCoordinator:(id)arg1 didInvalidateSyncSession:(id)arg2;
- (id)pairingStorePath;
- (_Bool)pairedDeviceSupportsMultipleMailboxes;
- (_Bool)pairedDeviceSupportsStandaloneMode;
- (void)reportInitialSyncProgress:(double)arg1;
- (void)reportInitialSyncDidCompleteSending;
- (void)reportInitialSyncDidComplete;
- (void)reportInitialSyncDidFailWithError:(id)arg1;
- (_Bool)willPresentNotificationForMessage:(id)arg1;
- (void)_handleDidUnpairNotification:(id)arg1;
- (void)_handlePairedDeviceChangedNotification:(id)arg1;
- (id)_pairedNanoRegistryDevice;
- (id)_bbSubsectionIdsForMessage:(id)arg1;
- (_Bool)isInitialSyncRestricted;
- (id)pairedDeviceScreenSize;
- (id)pairedDeviceScreenScale;
- (_Bool)pairedDeviceSupportsMailContentProtectedChannel;

@end
