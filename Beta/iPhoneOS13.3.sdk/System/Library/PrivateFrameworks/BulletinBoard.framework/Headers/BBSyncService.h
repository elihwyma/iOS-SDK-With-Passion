/*
 Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import <Foundation/NSObject.h>

@class IDSService, NSMutableArray, NSString;

@protocol BBSyncServiceDelegate, OS_dispatch_queue;

@interface BBSyncService : NSObject

{
    IDSService *_service;
    NSMutableArray *_pendingDismissalDictionaries;
    NSMutableArray *_pendingDismissalIDs;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _queuedFeed;
    NSString *_queuedSectionID;
    NSString *_queuedUniversalSectionID;
    id <BBSyncServiceDelegate> _delegate;
}

@property (nonatomic, readonly) unsigned long long pairedDeviceCount;
@property (weak, nonatomic) id <BBSyncServiceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithQueue:(id)arg1;
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4;
- (void)sendPendingSyncedRemovals;
- (void)enqueueSyncedRemovalForBulletin:(id)arg1 feeds:(unsigned long long)arg2;
- (id)dismissalSectionIdentifierForIncomingMessage:(id)arg1;
- (void)_sendSyncMessage:(id)arg1;
- (_Bool)_hasDestination;
- (void)_reallyEnqueueBulletin:(id)arg1 feeds:(unsigned long long)arg2;
- (id)_syncAccount;
- (_Bool)_syncHasDefaultPairedDevice;
- (id)_dismissalDictionaryForBulletin:(id)arg1;
- (id)_syncLocalDevices;
- (void)sendSyncedRemovalForBulletin:(id)arg1 feeds:(unsigned long long)arg2;

@end
