/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class MPAVItem, MPQueuePlayer, NSArray, NSHashTable, NSMutableSet, NSOperationQueue, NSString;

@protocol MPAVQueueCoordinatingDataSource;

@interface MPAVQueueCoordinator : NSObject

{
    NSOperationQueue *_assetQueue;
    unsigned long long _backgroundTaskIdentifier;
    unsigned long long _backgroundTasks;
    _Bool _holdingPlaybackTransactionForFirstItem;
    _Bool _isPendingPlayerItemSync;
    _Bool _isSyncingPlayerItems;
    NSHashTable *_itemsPendingAssetLoading;
    MPAVItem *_lastItemAnchor;
    unsigned long long _lastPreferredQueueDepth;
    _Bool _needsCurrentItemUpdateAfterPlayerItemSync;
    _Bool _preventLoadingItems;
    NSMutableSet *_reusableItems;
    _Bool _shouldExpectEmptyQueue;
    _Bool _shouldDeferItemLoading;
    MPAVItem *_currentItem;
    NSArray *_items;
    MPQueuePlayer *_player;
    id <MPAVQueueCoordinatingDataSource> _dataSource;
    CDUnknownBlockType _equilibriumAchievedHandler;
}

@property (nonatomic, readonly) MPQueuePlayer *player;
@property (weak, nonatomic, readonly) id <MPAVQueueCoordinatingDataSource> dataSource;
@property (copy, nonatomic) CDUnknownBlockType equilibriumAchievedHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) MPAVItem *currentItem;
@property (nonatomic) _Bool shouldExpectEmptyQueue;
@property (nonatomic) _Bool shouldDeferItemLoading;
@property (nonatomic, readonly) NSArray *items;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)reset;
- (void)reloadItemsKeepingCurrentItem:(_Bool)arg1;
- (id)initWithPlayer:(id)arg1 dataSource:(id)arg2;
- (void)_currentItemHasFinishedDownloadingDidChangeNotification:(id)arg1;
- (void)_beginBackgroundTaskAssertion;
- (void)_endBackgroundTaskAssertion;
- (void)_dequeueFailedItem:(id)arg1;
- (_Bool)_hasAchievedEquilibrium;
- (void)_loadAssetForItem:(id)arg1;
- (unsigned long long)_preferredQueueDepthWithFirstItem:(id)arg1;
- (void)_reloadItemsKeepingCurrentItem:(_Bool)arg1;
- (void)_syncItemsWithPreviousItems:(id)arg1;
- (void)_syncPlayerItems;
- (id)_playerItems;
- (void)_removeItemFromPlayer:(id)arg1;
- (void)_sendItemsDidChange;
- (void)_updateCurrentItem;
- (void)_updateQueueDepthIfNeeded;

@end
