/*
 Image: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
 */

#import <Foundation/NSObject.h>

@class ATSession, NSMutableDictionary, NSString, NSTimer;

@interface NMSSyncManager : NSObject

{
    ATSession *_observedSession;
    NSTimer *_maskedPendingSyncStateRevealTimer;
    NSMutableDictionary *_syncProgressInfoByAssetType;
    id _activeSyncSessionIdentifier;
}

@property (retain, nonatomic) id activeSyncSessionIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)sharedManager;
+ (unsigned int)_mediaTypeForAssetType:(id)arg1;
+ (id)_gizmoSyncStates;
+ (unsigned long long)_syncStateForProgressInfo:(id)arg1 session:(id)arg2;
+ (unsigned long long)_syncWaitingSubstateForProgressInfo:(id)arg1;

- (id)init;
- (void)dealloc;
- (void)sessionWillBegin:(id)arg1;
- (void)session:(id)arg1 didFinishSessionTask:(id)arg2;
- (void)session:(id)arg1 didUpdateSessionTask:(id)arg2;
- (void)session:(id)arg1 willBeginSessionTask:(id)arg2;
- (void)session:(id)arg1 didBeginSessionTask:(id)arg2;
- (void)sessionDidFinish:(id)arg1;
- (id)_defaultProgressInfoDict;
- (void)_updateSyncProgress;
- (void)_updateObservedSyncSession;
- (void)_handleSyncStateDidChangeNotification;
- (id)_defaultSyncProgressInfoForAssetType:(id)arg1;
- (unsigned long long)_aggregateAssetItemBytesAddedForMediaType:(unsigned int)arg1;
- (id)_assetTypeForMediaType:(unsigned int)arg1;
- (id)_syncProgressInfoByAssetType:(id)arg1;
- (id)progressInfoForMediaType:(unsigned int)arg1;
- (id)_addedTracksQueryForMediaType:(unsigned int)arg1;
- (unsigned long long)_estimatedAssetAggregateItemSizeInBytesWithQuery:(id)arg1;
- (void)_invokeOnMainThread:(CDUnknownBlockType)arg1;
- (void)_stopObservingSyncSession;
- (void)_startObservingSyncSession;
- (id)_updateProgressInfoForAssetType:(id)arg1 assetItemsTotal:(long long)arg2 assetItemsSyncedForSyncSession:(long long)arg3 bytesToSyncTotal:(unsigned long long)arg4 bytesSyncedThisSyncSession:(unsigned long long)arg5;
- (unsigned long long)_numberOfItemsNeedingDownloadForAssetType:(id)arg1;
- (id)_addedTracksPredicateForMediaType:(unsigned int)arg1;
- (id)_tracksQueryWithPredicate:(id)arg1;
- (id)_tracksPredicateWithPersistentIDs:(id)arg1;
- (id)musicProgressInfo;
- (id)podcastsProgressInfo;
- (id)audiobooksProgressInfo;
- (void)beginReceivingSyncProgressUpdates;

@end
