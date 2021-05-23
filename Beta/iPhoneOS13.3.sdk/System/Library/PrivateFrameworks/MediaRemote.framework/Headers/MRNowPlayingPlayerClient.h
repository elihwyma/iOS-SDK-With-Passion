/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <Foundation/NSObject.h>

@class MRNowPlayingArtwork, MRNowPlayingPlayerClientCallbacks, MRPlaybackQueueSubscriptionController, NSArray, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, _MRContentItemProtobuf, _MRNowPlayingPlayerPathProtobuf, _MRPlaybackQueueProtobuf;

@protocol OS_dispatch_queue;

@interface MRNowPlayingPlayerClient : NSObject

{
    NSObject<OS_dispatch_queue> *_serialQueue;
    _MRPlaybackQueueProtobuf *_playbackQueue;
    NSArray *_supportedCommands;
    NSDictionary *_nowPlayingInfo;
    MRNowPlayingArtwork *_nowPlayingArtwork;
    unsigned int _playbackState;
    NSDate *_playbackStateDate;
    unsigned long long _capabilities;
    NSDate *_lastReceivedCommandDate;
    _Bool _coalescingInvalidations;
    _Bool _coalescingRequests;
    _Bool _triggerInvalidation;
    double _invalidatationTimestamp;
    NSMutableDictionary *_coelscingTransactionPackets;
    NSMutableArray *_transactionSources;
    NSMutableDictionary *_cachedContentItemUpdates;
    NSMutableDictionary *_pendingPlaybackSessionMigrateEvents;
    _MRNowPlayingPlayerPathProtobuf *_playerPath;
    MRPlaybackQueueSubscriptionController *_subscriptionController;
    MRNowPlayingPlayerClientCallbacks *_clientCallbacks;
}

@property (retain, nonatomic) _MRNowPlayingPlayerPathProtobuf *playerPath;
@property (copy, nonatomic) NSArray *supportedCommands;
@property (copy, nonatomic) NSDictionary *nowPlayingInfo;
@property (retain, nonatomic) MRNowPlayingArtwork *nowPlayingArtwork;
@property (nonatomic, readonly) unsigned int playbackState;
@property (nonatomic) double invalidatationTimestamp;
@property (retain, nonatomic) _MRPlaybackQueueProtobuf *playbackQueue;
@property (nonatomic) unsigned long long capabilities;
@property (nonatomic, readonly) _MRContentItemProtobuf *nowPlayingContentItem;
@property (nonatomic, readonly) _Bool hasReceivedCommandRecently;
@property (nonatomic, readonly) MRPlaybackQueueSubscriptionController *subscriptionController;
@property (nonatomic, readonly) MRNowPlayingPlayerClientCallbacks *clientCallbacks;

- (id)description;
- (id)debugDescription;
- (id)initWithPlayerPath:(id)arg1;
- (void)updatePlayer:(id)arg1;
- (void)updatePlaybackState:(unsigned int)arg1 date:(id)arg2;
- (void)sendTransaction:(unsigned long long)arg1 withPackets:(id)arg2;
- (void)restoreNowPlayingClientState;
- (void)addPendingPlaybackSessionMigrateEvent:(id)arg1;
- (_Bool)removePendingPlaybackSessionMigrateEvent:(id)arg1;
- (unsigned int)resolveCommand:(unsigned int)arg1;
- (id)resolveCommandOptions:(unsigned int)arg1 options:(id)arg2;
- (void)clearCachedContentItemArtworkForItems:(id)arg1;
- (void)updateCacheWithContentItems:(id)arg1;
- (void)cacheContentItemChangesForPendingRequests:(id)arg1;
- (void)transactionDidEnd:(id)arg1;
- (_Bool)testAndSetCoalescingInvalidations;
- (void)unsetCoalescingInvalidations;
- (void)_handePlaybackSessionMigrateRequest:(id)arg1 request:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateCacheWithPlaybackQueue:(id)arg1;
- (void)preProcessChangePlaybackRateCommandWithOptions:(id)arg1;
- (void)flushPendingPlaybackSessionMigrateEvents:(CDUnknownBlockType)arg1;
- (void)_onQueue_sendTransaction:(unsigned long long)arg1 withPackets:(id)arg2;
- (_Bool)testAndSetCoalescingRequests;
- (_Bool)unsetCoalescingRequests;
- (void)updateCacheWithItem:(id)arg1;
- (void)beginSendingTransactions;
- (void)endSendingTransactions;
- (void)addPendingRequest:(id)arg1;
- (void)startCachingContentItemUpdatesForItem:(id)arg1 forPendingRequest:(id)arg2;
- (void)updatePlaybackQueueWithCachedUpdates:(id)arg1 forPendingRequest:(id)arg2;

@end
