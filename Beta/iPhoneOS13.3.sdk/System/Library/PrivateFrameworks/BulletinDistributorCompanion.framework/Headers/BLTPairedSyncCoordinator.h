/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <Foundation/NSObject.h>

@class NSString, PSYInitialSyncStateObserver, PSYSyncCoordinator, PSYSyncSessionObserver;

@interface BLTPairedSyncCoordinator : NSObject

{
    _Bool _clientSyncComplete;
    PSYSyncCoordinator *_pairedSyncCoordinator;
    PSYInitialSyncStateObserver *_pairedInitialSyncObserver;
    PSYSyncSessionObserver *_pairedSyncObserver;
}

@property (retain, nonatomic) PSYSyncCoordinator *pairedSyncCoordinator;
@property (retain, nonatomic) PSYInitialSyncStateObserver *pairedInitialSyncObserver;
@property (retain, nonatomic) PSYSyncSessionObserver *pairedSyncObserver;
@property (nonatomic) _Bool clientSyncComplete;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)reportProgress:(double)arg1;
+ (void)syncDidComplete;
+ (id)syncState;

- (id)init;
- (void)_reportProgress:(double)arg1;
- (void)_syncDidComplete;
- (void)initialSyncStateObserver:(id)arg1 syncDidResetForPairingIdentifier:(id)arg2;
- (void)initialSyncStateObserver:(id)arg1 initialSyncDidCompleteForPairingIdentifier:(id)arg2;
- (void)initialSyncStateObserver:(id)arg1 syncDidCompleteForPairingIdentifier:(id)arg2;
- (void)syncCoordinatorDidChangeSyncRestriction:(id)arg1;
- (void)syncCoordinator:(id)arg1 beginSyncSession:(id)arg2;
- (void)syncSessionObserver:(id)arg1 didInvalidateSyncSession:(id)arg2;
- (void)syncSessionObserver:(id)arg1 receivedSyncSession:(id)arg2;
- (void)syncSessionObserver:(id)arg1 didReceiveUpdate:(id)arg2;
- (void)_initInitialSyncStateComplete;

@end
