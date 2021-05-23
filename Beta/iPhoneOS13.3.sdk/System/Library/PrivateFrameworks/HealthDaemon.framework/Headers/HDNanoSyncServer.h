/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <HealthDaemon/HDSubserver.h>

@class HDNanoSyncManager, NSString;

@interface HDNanoSyncServer : HDSubserver

{
    HDNanoSyncManager *_nanoSyncManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)remote_fetchNanoSyncPairedDevicesWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_forceNanoSyncWithOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_resetNanoSyncWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_waitForLastChanceSyncWithDevicePairingID:(id)arg1 timeout:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithParentServer:(id)arg1;

@end
