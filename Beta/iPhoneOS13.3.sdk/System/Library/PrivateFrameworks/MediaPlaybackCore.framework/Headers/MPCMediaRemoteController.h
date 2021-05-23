/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <Foundation/NSObject.h>

@class MPCFuture, MPCPlayerPath, MSVLRUDictionary, NSMapTable, NSMutableArray, NSMutableDictionary, NSString;

@protocol MPArtworkDataSource, OS_dispatch_queue;

@interface MPCMediaRemoteController : NSObject

{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    MPCFuture *_playbackStateFuture;
    long long _playbackStateCacheState;
    MPCFuture *_supportedCommandsFuture;
    long long _supportedCommandsCacheState;
    MPCFuture *_playingItemIdentifierFuture;
    long long _playingIdentifierCacheState;
    NSString *_playingItemIdentifier;
    MPCFuture *_queueIdentifierFuture;
    long long _queueIdentifierCacheState;
    NSString *_queueIdentifier;
    struct _MSVSignedRange _loadedContentItemsRange;
    struct _MSVSignedRange _requestedContentItemsRange;
    NSMutableArray *_contentItemIDs;
    MSVLRUDictionary *_contentItems;
    NSMutableDictionary *_optimisticStateContentItems;
    NSMutableDictionary *_contentItemChanges;
    MSVLRUDictionary *_contentItemArtwork;
    NSMutableDictionary *_contentItemArtworkIdentifiers;
    NSMapTable *_contentItemIDsFutures;
    NSMapTable *_contentItemFutures;
    NSMutableDictionary *_contentItemArtworkFutures;
    unsigned long long _stateHandle;
    id <MPArtworkDataSource> _mediaRemoteArtworkDataSource;
    MPCPlayerPath *_resolvedPlayerPath;
    id _invalidationToken;
}

@property (retain, nonatomic) MPCPlayerPath *resolvedPlayerPath;
@property (nonatomic, readonly) id <MPArtworkDataSource> mediaRemoteArtworkDataSource;
@property (nonatomic, readonly) id <MPArtworkDataSource> remotePlayerArtworkDataSource;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *calloutQueue;
@property (retain, nonatomic) id invalidationToken;
@property (nonatomic, readonly) long long playbackStateCacheState;
@property (nonatomic, readonly) MPCFuture *playbackState;
@property (nonatomic, readonly) long long supportedCommandsCacheState;
@property (nonatomic, readonly) MPCFuture *supportedCommands;
@property (nonatomic, readonly) long long playingIdentifierCacheState;
@property (nonatomic, readonly) MPCFuture *playingIdentifier;
@property (nonatomic, readonly) long long queueIdentifierCacheState;
@property (nonatomic, readonly) MPCFuture *queueIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)sendCommand:(unsigned int)arg1 options:(id)arg2 toPlayerPath:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (id)controllerForPlayerPath:(id)arg1;
+ (_Bool)_shouldRegisterForNotifications;
+ (void)_sendLocalCommand:(unsigned int)arg1 playbackIntent:(id)arg2 options:(id)arg3 toPlayerPath:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)_sendRemoteCommand:(unsigned int)arg1 playbackIntent:(id)arg2 options:(id)arg3 toPlayerPath:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)_sendCommand:(unsigned int)arg1 options:(id)arg2 appOptions:(unsigned int)arg3 toPlayerPath:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (id)mediaRemoteReplyQueue;

- (void)dealloc;
- (id)_init;
- (void)_playbackStateDidChangeNotification:(id)arg1;
- (CDUnknownBlockType)artworkCatalogBlockForContentItem:(id)arg1;
- (void)dictionary:(id)arg1 willRemoveObject:(id)arg2 forKey:(id)arg3;
- (id)playQueueIdentifiersForRequest:(void *)arg1;
- (id)contentItemForIdentifier:(id)arg1;
- (void)sendCommand:(unsigned int)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (long long)playQueueIdentifiersCacheStateForRange:(struct _MSVSignedRange)arg1;
- (id)playQueueIdentifiersForRange:(struct _MSVSignedRange)arg1;
- (long long)contentItemCacheStateForIdentifier:(id)arg1;
- (id)contentItemArtworkForContentItemIdentifier:(id)arg1 artworkIdentifier:(id)arg2 size:(struct CGSize)arg3;
- (void)invalidateAllTokens;
- (void)_supportedCommandsDidChangedNotification:(id)arg1;
- (void)_playbackQueueChangedNotification:(id)arg1;
- (void)_playbackQueueContentItemsChangedNotification:(id)arg1;
- (void)_contentItemArtworkChangedNotification:(id)arg1;
- (id)_legacyCommands;
- (CDUnknownBlockType)_onQueue_updateOptimisticStateForCommand:(unsigned int)arg1 options:(id)arg2;
- (id)_onQueue_identifiersForRange:(struct _MSVSignedRange)arg1;
- (void)_onQueue_mergeContentItems:(id)arg1 queueRange:(struct _MSVSignedRange)arg2 requestRange:(struct _MSVSignedRange)arg3;
- (void)_onQueue_invalidateArtworkFuturesForContentItemID:(id)arg1;
- (void)_onQueue_purgeArtworkForContentItemIdentifier:(id)arg1;
- (void)_onQueue_purgeArtworkForContentItemIdentifier:(id)arg1 artworkIdentifier:(id)arg2;
- (id)_createExportableArtworkPropertiesForContentItem:(id)arg1;
- (CDUnknownBlockType)_onQueue_setOptimisticPlaybackState:(unsigned int)arg1 withOptions:(id)arg2;
- (CDUnknownBlockType)_onQueue_setOptimisticElapsedTimeForContentItem:(id)arg1 elapsedTime:(double)arg2 rate:(float)arg3;
- (CDUnknownBlockType)_onQueue_setOptimisticPlayingItemIdentifier:(id)arg1;
- (void)_onQueue_setOptimisticReorderedPlaybackQueueWithMovingContentItemIdentifier:(id)arg1 afterContentItemIdentifier:(id)arg2;
- (long long)contentItemArtworkCacheStateForArtworkIdentifier:(id)arg1 size:(struct CGSize)arg2;

@end
